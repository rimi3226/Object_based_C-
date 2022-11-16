/*
OOP 1. information hiding(정보은닉) 
    -- access specifier : private, public, protected

OOP 2. inheritance
    -- reusability (코드 재사용성)
    -- parent's protected : child에게는 public, 외부에는 private

method(function) overloading
method overriding : 부모 method와 똑같이 생겼을때,,

binding : static, dynamic binding -어느 함수를 부를지 결정하는 것
static binding : 

upcasting : 자식 객체들을 부모 클래스 포인터로 가리킬 때,
downcasting: 부모 객체를 자식 클래스 포인터로 가리킬 때.

dynamic binding : virtual - method 앞에 붙는 것
*/

#include <iostream>
#include <string>

using namespace std;

class A{
    public:
        void show(){
            cout<<'Class'<<endl;
            

        }       
};

class B : public A{ //A로부터 상속을 받을때 A가 public,protected,private 데이터를 어떻게 넘길지

    public:
        void show(){
            cout << "자식 원수" <<endl;
        }
};

int main(){
    B pb;
    A* pa;

    pa=pb;
    pa=show();
    pb=show*();





}

