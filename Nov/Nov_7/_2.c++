//p. 425
// ===> <<, >> 연산자의 중복, operator overloading

#include <iostream>
using namespace std;

class Point {
    private:
    int x, y;
    public:
    Point(int _x, int _y) : x(_x), y(_y) { }

    void showPoint() {
        cout << x << ", " << y << endl;
    }

    friend ostream& operator<<(ostream& os, Point& p);
    friend istream& operator>>(istream& in, Point& p);
};

ostream& operator<<(ostream& os, Point& p) {
    os << p.x << ", " << p.y<<endl;;
    return os;
}

istream& operator>>(istream& in, Point& p) {
    in >> p.x >> p.y;
    return in;
}

int main() {

    Point p(10, 20);
    p.showPoint();

    cin >> p;   //이것을 하기 위해서 friend 함수를 이용

    cout << p <<endl;

    return 0;
}