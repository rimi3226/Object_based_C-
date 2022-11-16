//p.226 소멸자 : destructor <---> constructor
#include <iostream>

using namespace std;

class Circle
{
    public: 
        int x;
        int y;
        int r;

    int* p;
    Circle(int _x,int _y,int _r) : x(_x),y(_y),r(_r){
        p=(int *)(malloc(10000));
    }
    ~Circle(){ //destructor
        cout <<"destructor was invoked "<<endl;
        free(p);
    }
    
    //p.232 접근 제어, access control
    //
    //private member variable을 
    //읽는 read method ---> getter
    //쓰는 write method ---> setter
    void setX(int _x){
        x=_x;
    }

    int getX(){
        return x;
    }

};

bool compare_circle(Circle& c,Circle& d){ //call by value가 되지 않도록 reference 참조를 사용
    if (c.getX()==d.getX()) 
    {
        return true;
    }
    return false;                                                                                                                                                                                                                                 
};

Circle return_Circle(){
    Circle c1{1,2,3};
    return c1;
}


int main(){
    Circle c{10,10,30};
    Circle c2{10,20,40};

    if (compare_circle(c,c2)){
        printf("3226");
    }
    return 0;
}