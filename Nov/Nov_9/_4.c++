#include <iostream>

using namespace std;

//polymorphism
//dynamic binding

class Animal{
    public:
    void speak(){
        cout<<"Animal"<<endl;
    }
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"Dog"<<endl;
    }
};

int main(){
    Animal* a=new Animal();
    a->speak();

    Dog* d=new Dog();
    d->speak();

    //virtual: 나를 밟고 가시오, 혹시 상속받은 자식 중에 overriding된 것이 있으면 그것을 부르시오
    //dynamic binding: 어느 speak()이 불릴지는 runtime에 가봐야한다.
    Animal* aa=new Dog();
    aa->speak();

    Dog dd;
    Animal& aaa=dd;
    aaa.speak();

    Dog dd2;
    Animal aaa2 =dd2;
    aaa2.speak();

    return 0;
}


