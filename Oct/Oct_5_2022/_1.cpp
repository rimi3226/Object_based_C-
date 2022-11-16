//include 폴더 : 클래스, function declaration 모음, 클래스 definition 모음
//lib 폴더 : 클래스, 함수 구현 소스코드의 컴파일 결과물
//        : 바이너리 코드를 한데 묶어 놓은 것
//        --> 내가 작성한 코드와 묶는 과정을 link

//dynamically linked library
//DLL

//반대 statically linked library

//dynamically linked library
//DLL

//반대 statically linked Library

//ㅔ.293
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    RenderWindow() window(VideoMode(200,200),"First Example");
    
    CircleShape shape(100.0f);
    shape.setFillColor(Color::Green);
    
    while(window.isOpen()){
        
        Event e;
        
        while(window.pollEvent(e)){ //사용자가 건드렸을 경우
            if(e.type == Event::Closed){
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.display();
        
        
    }
    return 0;
}
