//p.302

#include <SFML/Graphics.hpp>
//#include <windows.h>
#include <string>
#include <iostream>

class LunarLander{
    private:
        double x,y; //착륙선 현재 위치
        double velocity; //착륙 속도
        double fuel; //남아있는 연료량

        string status;
        Texture t1, t2;
        Sprite spaceship, burst;
        Font font;
        Text text;
    public: 
        LunarLander(double h,double v,double f);
        void update(double rate);
        void draw(RenderWindow& window);
};
