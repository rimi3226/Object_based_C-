#include <iostream>

using namespace std;

//p.381
//클래스 안에 객체 포함하기

class A{
    int a;
};

class B{
    float d;
};

class D{
    B* b;
    A k;
};

int main(){
    return 0;
}