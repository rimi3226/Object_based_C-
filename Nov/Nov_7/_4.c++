//p.449 생성자와 소멸자
#include <iostream>

using namespace std;

class A{
    protected:
        int a;
    public:
        int b;
        
        A(int _a=5,int _b=5): a(_a),b(_b){
            cout<<"A 생성자"<<endl;
        };
        ~A(){
            cout<<"A 소멸자"<<endl;
        }
        void show(){
            cout<<a<<", "<<b<<endl;
        }

};

class AA: public A{
    public:
        int c,d;

        AA(int _a=10,int _b=10,int _c=10,int _d=10): A(_a,_b){
            c=_c;
            d=_d;
            cout<<"AA 생성자"<<endl;
        }
        ~AA(){
            cout<<"AA 소멸자"<<endl;
        }

        //AA는 아무런 데이터가 없더라도 A로부터 상속받은 a,b가 있다.
        void showSum(){
            cout<<(a+b)<<endl;
        }
};

int main(){
    AA aa;

    aa.show();
}