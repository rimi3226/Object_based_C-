//p.572 함수 template
#include <iostream>
#include <fstream>

using namespace std;

template<typename T>
T get_max(T x,T y){
    if (x>y)
    {
        return x;
    }
    return y;
    
}

int get_max(int x,int y){
    if(x>y){
        return x;
    }
    return y;
}

float get_max(float x,float y){
    if(x>y){
        return x;
    }
    return y;
}

int main(){
    cout<<get_max(3,4)<<endl;
    cout<<get_max(3.4,5.6)<<endl;

}