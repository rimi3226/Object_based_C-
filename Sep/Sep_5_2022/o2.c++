//p.39 변수와 자료형 1.12
//short - 2
//int - 4
//long - 4
//long long - 8
//char - 1
//float - 4
//double - 8
//long double - 8

//C++ 추가형
//bool : 1
//문자열형 string 
#include <iostream> //cin,cout
#include <string>

using namespace std;

int main(){

    bool b;
    b=true;
    bool c;
    c=false;
    
    string s1 ="hello";
    string s2 ="world";

    cout << b << " " << c << endl;

    cout << s1+s2 << endl;

    cout <<(s1==s2)<<endl;

    const int k=10;
    cout <<s1+to_string(k)+s2<<endl;
    return 0;
}
