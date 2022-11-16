//p.458
// 11.6 멤버함수 정의

#include <iostream>
#include <string>

/*
 * overload : (한개의 이름에 여러개 이름의 함수를 부착해서, 힘들게 overload를 한다.)
 * function overloading
 * -함수 이름이 같아도, parameter 개수, type, 순서가 다르면 다른 함수로 인식
 *
 * method overloading
 * - 클래스 정의에 적용된 function overloading
 *
 * method overriding:
 * - 클래스에만 적용: OOP
 * - 상속 관계에서만 발생
 * - 자식 클래스에서 정의한 method가 동일한 signature(함수 이름, 파라미터들)을 가진 부모 클래스의 method를 가려버리는 현상
*/

using namespace std;

class Parent{
public:
    void whoareyou() {
        cout << "Parent" << endl;
    }
};

//Parent로부터 상속 받아서 child 클래스 생성

//p.462 
//public 으로 상속 받을 경우: public->public, protected->protected, private: 원래 못받음
//protected 로 상속 받을 경우: public->protected, protected->protected
//private으로 상속 받을 경우 : public -> private,protected -> privates
class Child: public Parent{
public:
    void whoareyou(){
        Parent::whoareyou(); //부모 클래스의 whoareyou를 부르는 경우
        cout<<"Child"<<endl;
    }
};

int main(){
    Child c;
    cout<<"====="<<endl;

    c.whoareyou();
    cout<<"====="<<endl;
    c.Parent::whoareyou();
    cout<<"====="<<endl;

    Parent p;
    p.whoareyou();

    return 0;
}