#include <iostream>

using namespace std;

//p.128 함수원형 --> function prototype
int fun1(int a); //function prototype

//p.123함수
int main(){
    
    int k=fun1(10);
    cout<<k<<endl;


    return 0;
}

int fun1(int a){
    return a;
}