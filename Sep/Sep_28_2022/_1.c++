//pg 256

//객체 배열

#include <iostream>

using namespace std;

class Circle{
    public:
        int x,y; //중점의 좌표
        int radius; //반지름

        Circle(): x(0),y(0),radius(0){ //초기값 지정
            cout << "circle constructor was invoked \n";
        }
        Circle(int _x,int _y,int _r) : x(_x), y(_y), radius(_r){
            cout << "circle constructor was invoked \n";
        }
        void showCircleInfo(){
            cout << x << " "<< y << " "<< radius<< endl;
        }
};

int main(){
    Circle cs[10];

    for (auto& c:cs){ //&쓰는 이유 : cs가 c로 넘어갈때 원본이 아니라 복사본이 나오는데 &(reference 참조)를 붙이면 주소가 나오기 때문에 복사를 안해도 돼서 속도가 빨라짐
        c.showCircleInfo();
    }

    cs[4].showCircleInfo();
    cs[2].x=100;
    cs[2].showCircleInfo();
    
    return 0;
}