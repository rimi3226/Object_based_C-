/*
파일 입출력
stream: 외부에 있는 데이터를 읽고 쓰는 통로
input stream
output stream <- Java에도 있는 개념

파일 종류 : text, binary
text: ASCII코드 값으로 저장
binary: 값 그대로
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // ofstream os("test.txt");

    // for (int i = 0; i < 100; i++)
    // {
    //     os<<i<<endl;
    // }

    ifstream is("test.txt");
    int number;

    while(is){
        is>>number;
        cout<<number;
    }

    char c;

    while(!is.eof()){
        is.get(c);
        cout<<c;
    }
    
    return 0;
    
}