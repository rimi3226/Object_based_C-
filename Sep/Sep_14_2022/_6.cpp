#include <cstdlib>
#include <iostream> //cin,cout
#include <string>

using namespace std;

int main(void){
    //p.80

    string str;
    do{
        cin >> str;
        cout << "입력 문자열은 "+str<< endl; //C언어에서 문자열 붙여주는 함수 : strcat
    }while(str != "end");

    //cin의 한계 : 공백을 \n으로 인식. 
    //ex) apple banana orange 로 입력하면 세 단어를 한번에 입력받지 못하고 세번 입력 받은 것처럼 행동함
    getline(cin,str);
    cin >> str;
    cout << "getline 입력 문자열은 "+str<< endl; 
    return 0;
}