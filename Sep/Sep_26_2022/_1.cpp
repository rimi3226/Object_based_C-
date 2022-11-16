#include <iostream>
#include <string>

//p.196 객체지향 프로그램의 개념들
//1. Encapsulation(캡슐화)
//2. Information hiding (정보은닉 p.198)
//3. Inheritance (상속 p.199)
//4. Polymorphism (다형성 p.200)

using namespace std;

class Circle{
    protected:
        int x;
        int y;
        int r;

    public:
        void increase_radius(int d){
            r=r+d;
        }
};

class ColoredCircle : public Circle {
    private:
        string color;
};

int my_add(int a,int b){
    
}

int main(){

}