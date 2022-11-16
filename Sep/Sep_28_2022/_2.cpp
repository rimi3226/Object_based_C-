//p. 253
//객체 : class --> instance(객체)
//

//객체 배열
#include <iostream>
#include <vector> //linked list를 담은 헤더파일 : SLL, DLL --> 이제 편하게 사용할 수 있다.
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

int main() {

    Circle cs[10];

    // for (auto& c : cs) {//&이 있을 때와 없을 때의 차이 /  c : cs면 cs의 값을 c에 복사하며 출력하므로 출력하는데 더 오랜 시간이 걸린다.
    //     c.showCircleInfo();
    // }
    // cs[2].x = 100;
    // cs[2].showCircleInfo();

    //p. 261

    //template : 타입에 대해 걱정할 필요없고 원하는 타입을 <>안에 지정만 해주면 된다.

    //standard template library (STL에) ---> vector(가 포함돼 있음)

    //chap.15 STL과 람다식

    vector <int> first(10);
    // vector : linked list
    // <int> : 데이터 타입
    // first : 이름 
    // 10 : 10개짜리 linked list

    // //vector는 array처럼 쓸 수 있다.
    // for (auto& v : first) {
    //     cout << v << endl;
    // }
    //이 두 줄은 똑같은 말이다
    first[5] = 13;
    cout << (first[5]) << endl;//배열처럼 사용
    cout << first.at(5) << endl;//메소드 사용 -> 즉, vector는 class이다.

    // //sll의 끝에 하나 더 추가하고 싶을 떄
    // first.push_back(100);//뒤에 100이 저장된 노드 추가!
    // first.push_back(200);//맨 마지막 노드 뒤에 200이 저장된 노드 추가!

    // cout << "first : " << first.front() << " back : " << first.back() << endl;//맨 앞 노드, 맨 뒷 노드 출력

    // first.pop_back();//맨 마지막 노드 (200) 삭제하기
    // cout << "--------------------------------------------" << endl;

    // for (auto& v : first) {
    //     cout << v << " ";
    // }

    // //begin, end
    // //p.266
    // for(auto p=first.begin();p!=first.end();p++){
    //     cout<<*p<<endl;
    // }
    // auto p=first.begin();
    // cout<<*(p+5)<<endl;

    // vector<int> b;
    // b=first;

    // if(first==b){
    //     cout<<"they are same"<<endl;
    // }

    // //insert
    // first.insert(first.begin()+1,999); //맨 앞 바로 뒷 칸에 1 넣기
    // cout<<first.at(0)<<endl; //999

    // //assign
    // first.clear();
    // cout<<"size: "<<first.size()<<endl;


    // //clear
    // first.clear();
    


    // vector <Circle> second;//



    return 0;
}