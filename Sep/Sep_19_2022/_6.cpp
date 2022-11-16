#include <iostream>
using namespace std;

//p.145
//inline function
//오버되는 부분이 많아서 생긴 함수

inline int my_func(int a, int b){
    //함수의 코드를 main함수에 붙여넣기
    return a+b;
}



int main(){
    my_func(10,20);
    return 0;

}