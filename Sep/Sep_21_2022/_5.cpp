//p. 185 도전문제 
// x좌표를 200부터 600까지, 50씩 증가시키면서 원을 그려보시오.
#include <iostream>
#include <string>

using namespace std;

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
    c.y=500;
    c.radius=100;
    for (auto i = 200; i < 600; i+=50)
    {
        c.x=i;
        c.draw();
    }
    
    return 0;
}