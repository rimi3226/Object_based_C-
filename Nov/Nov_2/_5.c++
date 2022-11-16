//p.416
//포인터 연산자의 중복
//pointer operator overloading

#include <iostream>

using namespace std;

class MyIntegerPtr{
    public:
    int* p;

    MyIntegerPtr(int* _p):p(_p){ }    
    ~MyIntegerPtr(){ 
        delete p;
    }

    int& operator*(){
        return *p;
    }

    int* operator->(){
        return p;
    }

};

int main(){

    //메모리 누수 memory leak

    //얘 안됨
    while (true)
    {
        int* p=new int(40);
        delete p;
    }
    
    //얘 안됨
    while (true)
    {
        unique_ptr<int> p(new int(40));
    }
        
    //얘 안됨
    while(true){
        MyIntegerPtr* p=new MyIntegerPtr(new int(50));
    }
    
    //얘 됨
    while(true){
        MyIntegerPtr p(new int(40));

    }


    MyIntegerPtr p(new int(10));

    *p=20;
    cout<<*p<<endl;
    return 0;
    
}