#include <iostream>

using namespace std;

//p.411 대입연산자

class MyValue{
    private:
    int x;
    public:
    MyValue(int _x):x(_x){

    }
    

    MyValue(const MyValue& p){
        this->x=p.x;
    }
    //대입 연산자의 overloading
    MyValue& operator=(const MyValue& other){ //레퍼런스를 쓰는 이유는 효율성때문에!
        this->x=2*other.x;
        return *this;
    }

    void show(){
        cout<<"Value : "<<x<<endl;
    }
};

int main(){
    MyValue v1(10);
    MyValue k=v1; //복사생성자

    MyValue v2(20);
    k=v2; //대입 연산자 k=40

    v2.show();
    k.show();
}