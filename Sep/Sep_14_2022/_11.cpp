#include <cstdlib>
#include <iostream> //cin,cout
#include <string>

using namespace std;

int main(void){
    //range based for loop
    int num[]={1,2,3,4,5};
    // for(int i:num){
    //     cout << i << endl;
    // }
    //pointer type int* i;

    //reference type int& i;
    //변수를 하나 더 만든다고 생각하기.
    //포인터의 위험성을 낮춰줌
    int j=100;
    int& i=j;
    i=200;
    cout <<j<< endl; //200

    
    for(int& x:num){
        x=2*x;
    }

    for(int a:num){
        cout << a <<endl;
    }
}