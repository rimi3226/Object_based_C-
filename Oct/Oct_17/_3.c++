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

    //클래스 안에서, 멤버 함수 만들 때,
    //함수 뒤에 const를 붙이면,
    //이 함수 안에서는 멤버 변수들을 절대로 변경시키지 않는다는 뜻
    //어기면 compile ERROR
    int showAge const(int x){
        return age;
    }
};

int main(){

    //p.344 const 멤버 함수

    //p가 가리키고 있는 곳 (100번지의) 값을
    //읽을 수는 있으나, 바꿀 수는 없음
    const int* p=100;

    //p가 가리키는 주소 100을 바꿀 수가 없음.
    int* const p=100;

    //둘 다 안됨
    const int* const p =100;

    const Person* pp=new Person(20);
    Person* const pp=new Person(20);
    const Person* const pp=new Person(20);
    return 0;
}