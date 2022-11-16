
// 10.9 friend function an friend class - 친구 함수와 친구 클래스
// p. 419

#include <iostream>

using namespace std;

// private : access specifier, 접근 지정자
//  ===> OOP의 중요한 개념인 information hiding (정보 은닉)이다
//  정보 은닉 : 객체 내부의 private는 객체 내부의 함수를 통해서만 접근
//  ===> 코드 security & safety를 위해서 중요

class A{
private:
    int a;

public:
    // friend를 붙여주면, 친구에게 모든 걸 다 내어줄 수 있다. => 이거는 솔직히 말해서 쓰레기예유...
    friend void showA(A _a);
    friend class B;

    A(int _a) : a(_a){
    }

    void setA(int _a){
        if (_a < 0)
        {
            a = 0;
        }
        else
        {
            a = _a;
        }
    }
};

void showA(A _a){

    _a.a = -666;
    cout << _a.a << endl;
}

class B{
public:
    B(){ }

    void showA(A _a)
    {
        cout << _a.a << endl;
    }
};

int main(){

    A obj(20);

    showA(obj);

    B b;
    b.showA(obj);

    return 0;
}