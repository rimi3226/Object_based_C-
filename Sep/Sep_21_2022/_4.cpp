#include <iostream>
#include <string>

using namespace std;

//p.185
class Circle{
    public:
    int x,y,radius; //중점 (x,y)에 반지름 radius 원
    string color;

    double calc(){
        return 3.14*radius*radius;
    }
    void draw(){
        /*
        window에서만 가능, Windows API(Application Programming Interface) 
        HDC hdc = getWindowDC(GetForegroundWindow()); //DC(=도화지) : Direct Contest 
        Ellipse(hdc,x-radius,y-radius,x+radius,y+radius); //타원을 그리는 함수 : 운영체제가 제공
        */
    }
};



int main(){
    Circle c;
    c.x=200;
    c.y=500;
    c.radius=100;
    c.draw();
    c.calc();
    return 0;
}