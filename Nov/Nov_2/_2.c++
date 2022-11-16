#include <iostream>
#include <vector>
#include <string>

using namespace std;

    //p.407 
    //increment operator

class MyValue{
    private:
    int x;
    public:
    MyValue(int _x):x(_x){

    }

    void show(){
        cout<<"My value is "<<this->x<<endl;
    }

    //return 값이 없기 때문에 잘못됨
    // void operator++(){
    //     this->x=this->x+1;
    //     return;
    // }
    
    //prefix increment operator
    MyValue& operator++(){ //복사본이 넘어가지 않도록 &를 사용
        this->x=this->x+1;
        return *this; 
    }

    //postfix increment operator
    MyValue operator++(int){  //얘는 temp를 return 하기 때문에 &붙이면 안됨
        
        MyValue temp=*this; //나를 복사해서, 하나를 만든다
        this->x=this->x+1;
        return temp;
    }


};

int main(){
    MyValue v1(10);

    ++(++v1); //12
    ++v1; //13
    ++v1; //14

    v1.show();
    cout<<"============="<<endl;

    MyValue k=v1++;
    k.show(); //14
    v1.show(); //15
    cout<<"============="<<endl;

    //postfix는 복사본을 넘겨주기 때문에 +1이 아니라 +2이다.
    (v1++)++; 
    v1.show(); //16
    cout<<"============="<<endl;

    (++v1)++;
    v1.show(); //18
    return 0;
}