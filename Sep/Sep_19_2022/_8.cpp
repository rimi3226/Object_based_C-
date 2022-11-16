#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1="hello";
    string s2="world";

    //p.151, string member function
    //s1[0]
    cout << boolalpha; //bool 값을 True, False로 출력
    cout << s1.empty() << endl;
    cout << s1.insert(2,s2) <<endl; //문자열 중간에 삽입하기
    cout << s1.find("llo") <<endl; 

    return 0;
}