    //p. 253
    //객체 : class --> instance(객체)
    //

    //객체 배열
    #include <iostream>
    #include <vector> //linked list를 담은 헤더파일 : SLL, DLL --> 이제 편하게 사용할 수 있다.
    #include <algorithm>

    using namespace std;

    class Circle {
    public:

    int x, y;   //중점의 좌표
    int radius;   //반지름

    Circle() :x(0), y(0), radius(0) {
        cout << "circle default constructor was invoked\n";
    }

    Circle(int _x, int _y, int _r) :x(_x), y(_y), radius(_r) {
        cout << "circle constructor was invoked\n";
    }

    void showCircleInfo() {
        cout << x << " " << y << " " << radius << endl;
    }

    };

    //p.271
    bool compare(int a, int b) {
    return a < b;
    }

    bool compare2(Circle a, Circle b) {
    if (a.radius < b.radius) {
        return true;
    }
    return false;
    }

    int main() {

    Circle css[10];

    for (auto& c : css) {//&이 있을 때와 없을 때의 차이 /  c : cs면 cs의 값을 c에 복사하며 출력하므로 출력하는데 더 오랜 시간이 걸린다.
        c.showCircleInfo();
    }
    css[2].x = 100;
    css[2].showCircleInfo();

    //p. 261

    //template : 타입에 대해 걱정할 필요없고 원하는 타입을 <>안에 지정만 해주면 된다.

    //standard template library (STL에) ---> vector(가 포함돼 있음)

    //chap.15 STL과 람다식

    vector <int> first(10);
    //vector : linked list
    //<int> : 데이터 타입
    //first : 이름 
    //10 : 10개짜리 linked list

    //vector는 array처럼 쓸 수 있다.
    for (auto& v : first) {
        cout << v << endl;
    }
    //이 두 줄은 똑같은 말이다
    cout << (first[5] = 24) << endl;//배열처럼 사용
    cout << first.at(5) << endl;//메소드 사용 -> 즉, vector는 class이다.

    //sll의 끝에 하나 더 추가하고 싶을 떄
    first.push_back(100);//뒤에 100이 저장된 노드 추가!
    first.push_back(200);//맨 마지막 노드 뒤에 200이 저장된 노드 추가!

    cout << "first : " << first.front() << " back : " << first.back() << endl;//front : 맨 앞 노드, back : 맨 뒷 노드 출력

    first.pop_back();//맨 마지막 노드 (200) 삭제하기
    cout << "--------------------------------------------" << endl;

    for (auto& v : first) {
        cout << v << " ";
    }

    vector <Circle> second;//이런식으로 객쳅 ㅐ열을 만들 수도 있음

    //begin, end
    //p. 266
    for (auto p = first.begin(); p != first.end(); p++) {//p는 포인터이므로 포인터처럼 사용가능
        cout << *p << endl;   
    }

    auto p = first.begin();
    cout << *(p + 5) << endl;//5번째 원소 출력

    vector <int> b;
    b = first;

    if (first == b) {
        cout << "they are same" << endl;
    }

    //insert
    first.insert(first.begin() + 1, 999);

    cout << first.at(0) << endl;//999

    for (auto p = first.begin(); p != first.end(); p++) {//p는 포인터이므로 포인터처럼 사용가능
        cout << *p << endl;
    }

    //assign : 다른 벡터에 있는 걸 뜯어다가 새로운 배열에 저장할 때 사용한다.
    first.clear();
    cout << "size: " << first.size() << endl;

    //p. 261


    vector<Circle> cs;
    Circle a;
    cs.push_back(a);//엇 이거 나 놓쳤다

    //p. 270, algorithm
    vector<int> firstt{ 5,4,3,2,1 };
    sort(firstt.begin(), firstt.end(), compare);

    for (auto& v : firstt) {
        cout << v << " ";
    }

    sort(cs.begin(), cs.end(), compare2);

    //2차원 벡터
    vector <vector<int>> a;
    //p.272 초기화하는 방법


    for (int i = 0; i < 3; i++) {
        vector <int> row;
        for (int j = 0; j < 5; j++) {
            row.push_back(i * j);
        }
        a.push_back(row);
    }

    //array
    array <int,3> my_array;
    my_array[0] = 10;

    for (auto v : my_array.begin()) {
        cout << v << endl;
    }

    ------method------
    size()
    fill()
    empty()
    at()
    front()
    back()

    p.286
    SFML : simle and fast multimedia library

    return 0;
    }