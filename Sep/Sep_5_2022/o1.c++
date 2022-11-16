//p.9

// C++
// object oriented programming
// 객체 지향 프로그래밍

// C : 고성능
// 단점 : 생산성이 매우 낮음.
// 장점 : 속도 --> 10~100배 빠름, python,java
//     : 메모리 절약형

// C++, Bjarne Stroustrup

// C --> (SIMULA) --> C++(메모리 관리가 어려움) --> java(pointer 빼기) --> C#

// p.11
// C++의 핵심
// class : struct + function
// inheritance(상속) : 기존의 class 원하는 것만 물려받기
// polymorphism, operator overloading
//reference type : pointer 대체재 (pointer의 위험성 피해갈 수 있다)
// standard library : 좋은 lib가 많음
// new delete : malloc, free
// generic : type

// p.16

// 절차지향, 객체지향
// C,      C++

// p.34
// .h가 붙으면 C언어에서 사용
// ex) string.h -> C언어, string -> C++
#include <stdio.h> //printf, scanf
#include <iostream> //cin,cout

using namespace std;

int main(){
    //cout : console out , << : stream(물길이 흘러가는 방향)

    //namespace : 충돌 막기 위해 쓰는 것
    //ex) std :: -> std의 cout
    std::cout << "hello world" <<std::endl; 

    cout << "hello world" << endl; //using namespace를 했기 때문에 std:: 를 안붙여도 됨

    bool b;
    b=true;
    bool c;
    c=false;

    cout << b << " " << c << endl;
    return 0;
}

