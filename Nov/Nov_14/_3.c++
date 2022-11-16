#include <iostream>

//java의 인터페이스 개념, c++는 abstract class(virtual function)이용해서 interface 구현
//interface : 클래스가 반드시 구현해야 할 메소드들의 목록

class Shape{
    public:
    virtual double getArea()=0;
};

class Triangle : public Shape{
    private:
    int width, height;
    public:
    Triangle(int _w,int _h):width(_w),height(_h){}
    double getArea(){
        return (double)(0.5*width*height);
    }
};

class Circle : public Shape{
    private:
    double r;
    
    public:
    Circle(double _r): r(_r){}
    double getArea(){
        return (double)(3.14*r*r);
    }
};

class Rect : public Shape{
    private:
    int width, height;
    public:
    Rect(int _w,int _h):width(_w),height(_h){};
    double getArea(){
        return (double)(width*height);
    }
};

int main(){
    Triangle t(10,10);
    t.getArea();

    Circle c(10.0);
    c.getArea();

    Rect r(20,10);
    r.getArea();

    Shape* s[3];
    s[0]=&t; //upcasting
    s[1]=&c;
    s[2]=&r;

    for (int i = 0; i < 3; i++)
    {
        s[i]->getArea();
    }
    
}