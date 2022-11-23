//12.5 순수 가상 함수 pure virtual method
//pure virtual method를 가진 클래스를 특별히 abstract class(추상 클래스)라고 하고, abstract class로부터는 객체를 만들어내지 못한다.
#include <iostream>

using namespace std;

class A{
    public:
    virtual void show()=0;
};

class B: public A{
    public:
    void show(){
        cout<<"자식"<<endl;
    }
};

class C : public A{
    public:
    void show(){
        cout<<"CCC"<<endl;
    }
};

int main(){
    B b;
    C c;

    b.show();
    c.show();

    return 0;
}