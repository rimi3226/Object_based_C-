/*
    p.481 다형성, polymorphism
    객체 지향에서 최고급 개념
    ->어떤 멤버 함수를 부를지 그 때, 그 때 정한다.

    정적 polymorphism: method overriding
    동적 polymorphism: 
*/
#include <iostream>

using namespace std;

class Parent{
    public:
    int x;

};

class Child: public Parent{
    public:
    int y;
};

int main(){

    //1. 
    //upcasting : 부모 클래스 타입의 포인터로 자식 클래스의 객체를 가리키는 일
    Parent* p=new Child();
    p->x=10;
    // p->y=30; (Error)

    //2. 
    //Child* c=new Parent(); (Error)
    Parent* p=new Parent();

    //Dynamic Cast
    //Child* c=dynamic_cast<Child*>(p);

    //c->x=50;
    //c->y=999;

}
