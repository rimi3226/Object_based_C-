#include <iostream>

using namespace std;

class Point{ //클래스
    int x;
    int y;

    //차이점. 함수가 들어간다.
    int add(void){
        return x+y;
    }
};

int main(void){
    Point a; //변수 -> 객체
    Point b;

    //p.167
    //object oriented programming, OOP
    //객체지향 프로그래밍

    //p.168 절차 지향 프로그래밍
    //procedural programming
    //procedure --> function
    //c: data와 function이 분리

    //p.170
    //1960년대에 SIMULA -> C++ -> Java --> C#

    //p.172 
    //객체는 무엇으로 이루어지는가?
    // 1. member variable == member field
    // 2. member function == method
    //객체(instance) : 클래스 타입을 갖는 변수
    
    //p.1.7 클래스는 객체의 설계도

}