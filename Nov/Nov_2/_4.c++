#include <iostream>
//p.414 index operator overloading

using namespace std;

class MyValue{
    public: 
    int x;

    int operator[](int k){
        if(k<50){
            return -999;
        }
        else{
            return 999;
        }
    }

    MyValue(int _x):x(_x){};
};

int main(){
    MyValue v1(10);

    cout<<v1[30]<<endl;
}