#include <iostream>
#include <string>

using namespace std;

//.176
class Circle{

    //member variable
    public : 
    //private : 함수 내부에서만 사용 가능
    //public과 private를 나누는 이유 : 정보 은닉.
        int radius;
        string color;
    //method
    void show(){
        cout <<radius << " "<<color<<endl;
    }

};



int main(){
    Circle c;
    c.radius =10;
    c.color ="yellow";
    c.show();

    cout<<c.radius<<" "<<c.color<<endl;
}