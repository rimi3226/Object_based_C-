//p. 540 random access file
//순차 접근 파일 : 앞에서부터 파일을 모두 읽어야, 원하는 위치 도달
//임의 접근 파일 (random access file) -> 내가 읽으려는 위치까지 포인터를 이동


#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream is("binary.dat",ifstream::binary);

    is.seekg(4,ios::beg); //30

    int v;
    is.read((char*)&v,4); //30
    cout<<"value is: "<<v<<endl;

    //ex
    int w;
    is.seekg(4,ios::beg); //20
    is.read((char*)&w,8); //20
    cout<<"value is: "<<w<<endl;

    is.seekg(4,ios::cur); //30
    is.seekg(-4,ios::end); //40의 끝, 50의 시작

    int r;
    is.read((char*)&r,4);
    cout<<"value is: "<<r<<endl;



}