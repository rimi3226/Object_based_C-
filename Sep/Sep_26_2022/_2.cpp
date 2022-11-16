//p.205 UML : Unified Modeling Language -> 수도 코드 객체지향 버전
//p.219 생성자(constructor): 객체를 만들때 member variable에 초기값을 변환시키는 것
// 1. 이것은 함숟이다.
// 2. 모든 class는 constructor
// 3. polymorphism 
//default constructor
#include <iostream>

using namespace std;

class Circle{
    public:
        int x;
        int y;
        int r;

    Circle(int _x,int _y,int _r){
        x=_x;
        y=_x;
        r=_r;
    }

    //디폴트 인수
    Circle(int _x,int _y,int _r){
        x=5;
        y=5;
        r=10;
    }

    Circle(){
        x=2;
        y=4;
        r=10;
    }

    Circle(int _x,int _y,int _r) : x(_x),y(_y),r(_r){
    }
    void showCircleInfo(){
        cout<<x<<" "<<y<<" "<<r<<endl;
    }

};

int main(){
    Circle c{10,10,30};
    Circle c2;

    c.showCircleInfo();
    c2.showCircleInfo();

    return 0;
}