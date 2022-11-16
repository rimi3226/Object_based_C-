//p.378 복사 생성자와 대입 연산자
#include <iostream>

using namespace std;

class Pizza{
    private:
    int r;
    public:
    Pizza(int _r=0): r(_r){
        cout<<"Pizza constructor was invoked"<<endl;
    }
    Pizza(const Pizza& p){
        cout << "이게 바로 복사 생성자이다."<<endl;
    }
    ~Pizza(){
        cout<<"destructor was invoked "<<endl;
    }

    void set(int _r){
        this->r=_r;
    }
    void show(){
        cout<<"pizza radius: "<< this->r <<endl;
    }

};

int main(){
    Pizza p1(10);
    Pizza p2(20);
    p2=p1; //대입 연산자

    //복사 생성자
    Pizza p3=p1;
    Pizza p4(p1); 
}