#include <iostream>

using namespace std;

//p.359 
//함수로 객체 전달하기
//call by value
//call by reference
//int, char, float --> value
//array --> call by reference
//object, instance(객체) --> call by value 

class Pizza{
    private:
    int r;
    public:
    Pizza(int _r=0): r(_r){
        cout<<"Pizza constructor was invoked"<<endl;
    }
    void set(int _r){
        this->r=_r;
    }
    void show(){
        cout<<"pizza radius: "<< this->r <<endl;
    }

};
//call by value이기 때문에 p의 radius가 두배가 되지 않는다. (p의 복사본이 넘어갔기 떄문이다.)
void douvle_size(Pizza p){
    p.set(20);
}

//call by reference
void double_size_re(Pizza& p){
    p.set(20);
}

void double_size2(Pizza* p){
    p->set(40);
}

int main(){
    Pizza p(10);

    p.show();
    double_size_re(p); 
    double_size2(&p); //포인터로 왔을 경우. -> 문제점 : C언어에서 사용하던 전통방식이나, 주소(잘못 조작하면 주변부의 값 수정 가능)이므로 매우 위험함.
    p.show();
    return 0;
}