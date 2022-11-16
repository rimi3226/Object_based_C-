/*
Overloading된 함수 foo를 만드시오.

함수 foo는 정수 1개가 인수로 주어질 경우, 그 수의 부호를 바꾼 값을 반환하다.

또한, 함수 foo는 정수 2개가 인수로 주어질 경우, 두 수의 합을 계산하여 반환하다.

함수 foo를 정의하고, 아래 main 함수에서 사용할 수 있도록 하시오.
*/

#include <iostream>

using namespace std;

int foo(int x){
    return -x;
}

int foo(int x,int y){
    return x+y;
}
/*-------------------------------------------------------

이 곳에 overloading된 함수 foo를 정의하시오.

--------------------------------------------------------*/

int main()
{
    int a, b;
    cin >> a >> b;

    cout << foo(a) + foo(foo(a, b));
    return 0;
}