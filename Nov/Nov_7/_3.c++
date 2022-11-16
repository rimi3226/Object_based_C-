//p.439
//상속 inheritance

// public : 무조건 상속
// private : 넘겨주지 않는다 (상속이 안됨)
// protected : 자식에게 상속 O, 밖에서 접근 X

#include <iostream>

using namespace std;

class A{
    protected:
        int a;
    public:
        int b;
        A(int _a=10,int _b=10): a(_a),b(_b){};
        void show(){
            cout<<a<<", "<<b<<endl;
        }



};

class AA: public A{
    public:
    int c;
    //AA는 아무런 데이터가 없더라도 A로부터 상속받은 a,b가 있다.
    void showSum(){
        cout<<(a+b)<<endl;
    }
};

class AAA: public AA{

};

int main(){

    AA aa;

    aa.show();
    aa.showSum();

    
    //cout<<aa.a<<", "<<aa.b<<endl; protected에 걸림


    AAA aaa;
    aaa.show();
    aaa.showSum();
    // aaa.a=100; protected에 걸림
    aaa.b=200;
    aaa.c=300;
}