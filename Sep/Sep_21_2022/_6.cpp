//p.188 멤버함수 중복
#include <iostream>
#include <string>

using namespace std;

class Circle{
    public:
        int x,y;
        void show(int x,int y){
            return;
        }
        void show(float x,float y){ //method overloading 제공
            return;
        }
};

//p.189 클래스 인터페이스와 구현의 분리

class Circle{
    public:
        int x,y;

    void show(int x,int y);

    void show(float x,float y);

        
};


//class 밖으로 나옴 -> 어느 클래스에 나왔는지 헷갈림 -> 소속 표시 해야함 -> Circle::
void Circle:: show(int x,int y){
    return;
}

void Circle:: show(float x,float y){ //method overloading 제공
    return;
}


//한걸음 더 나아가서 header 와 source로 분리
//header file들만 모아놓은 폴더 생성. source code들만 모아놓은 폴더 생성