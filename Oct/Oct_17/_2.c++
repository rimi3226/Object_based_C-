//p.323
//포인터 

#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
    int age;
    Person(){
        age=10;
    }
    Person(int _age) : age(_age){
        age=_age;
    }
};

int main(){

    //객체의 정적 생성
    Person p;
    p.age=20;

    //객체의 동적생성
    //new가 생겨난 이유 : 클래스로부터 객체를 생성 (메모리 할당받고, 등등)하기 위해서
    //malloc으로 new가 하는 일을 못하는 이유 : ₩
    //      --malloc으로 객체를 위한 메모리는 할당받을 수 있지만,
    //      --malloc은 생성자 호출을 못함.
    //delete : free가 하는 메모리 해제 역할 + 소멸자 불러준다 (destructor)

    //p.332 smart pointer, 스마트 포인터 ...
    //스마트 포인터의 목적 : 더이상 delete를 신경쓰지 않아도 된다!

    //new-delete pointer로, delete를 안하면 문제가 생긴다.
    Person* pp=nullptr;

    pp=new Person;
    pp->age=30;

    pp=new Person(21);

    delete pp;

    //smart pointer, delete의 수고로부터 자유!
    //wrapper
    //smart pointer 자체는 포인터라기보단 객체인데, 객체 안에 소멸자가 있어서 delete를 해준다.
    unique_ptr<Person> pp1(new Person(21)); //unique_ptr자체가 클래스. <>는 template



    return 0;
}