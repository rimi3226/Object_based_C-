#include <iostream>

using namespace std;

// p.363
//함수가 객체 반환하기
//함수가 열심히 일을 하고 나서,
//그 일을 하는 도중에 객체를 하나 만들었는데,
//반환값으로 그 객체를 반환할 때,,


class Pizza{
    private:
    int r;
    public:
    Pizza(int _r=0): r(_r){
        cout<<"Pizza constructor was invoked"<<endl;
    }
    // Pizza(const Pizza& p){
    //     cout << "이게 바로 복사 생성자이다."<<endl;
    // }
    ~Pizza(){
        cout<<"destructor was invoked "<<endl;
    }

    void set(int _r){
        this->r=_r;
    }
    void show(){
        cout<<"pizza radius: "<< this->r <<endl;
    }

};

Pizza createPizza(int r){
    //함수가 객체를 넘길때는 복사본을 만들어서 넘겨준다,
    //즉, p의 복사본을 만들아사 넘겨주는데,
    //복사본은 '생성자'를 안부르고 만들어지는 것인가?
    //생성자가 아니라 복사생성자를 부른다.
    //p.372 복사생성자(copy constructor)


    Pizza p(r); //클래스 생성
    return p; //복사본을 넘겨준다.
}

int main(){
    //복사 생성자 쓰이는 경우.           
    //1. 힘수의 인수로 넘겨즐 때,
    //2. 함수가 객체를 반환할 때,
    //3. 다른 객체를 복사해서 내 객체를 만들때
    Pizza p1(100);
    Pizza p2(p1);

    Pizza p3=createPizza(10);
    p1.show();
    p2.show();
    p3.show();

    return 0;
}