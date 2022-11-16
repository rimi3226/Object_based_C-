#include <iostream>
#include <string>

using namespace std;

class Shape{
    int x,y;
    public:
    Shape(){
        cout<<"Shape 생성자"<<endl;
    }
    Shape(int _x,int _y):x(_x),y(_y){
        cout<<"Shape 생성자"<<endl;
    }
    ~Shape(){
        cout<<"Shape 소멸자"<<endl;
    }
};

class Rectangle: public Shape{
    int width, height;
    public:
    Rectangle(int _x=10,int _y=10,int _w=10,int _h=10): Shape(_x,_y){
        width=_w;
        height=_h;
        cout<<"Rectangle 생성자"<<endl;
    }
    ~Rectangle(){
        cout<<"Rectangle 소멸자"<<endl;
    }
};

int main(){
    Rectangle r(0,0,100,100);
    return 0;
}