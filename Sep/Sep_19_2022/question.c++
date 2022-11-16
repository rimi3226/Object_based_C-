#include <iostream>

using namespace std;

void my_swap2(int& a,int& b){ //reference variable
    int temp=a;
    a=b;
    b=temp;

    b+1=666; //옆에있던 w의 값이 바뀌어버림. call by reference 이기 때문이다.
}

int x=10;
int y=20;
int w=30;

int main(){
    
    my_swap2(x,y);
    cout << x << " " << y << " " << w << endl; 
    return 0;
}