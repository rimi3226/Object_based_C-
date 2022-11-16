//p. 540 random access file
//순차 접근 파일 : 앞에서부터 파일을 모두 읽어야, 원하는 위치 도달
//임의 접근 파일 (random access file) -> 내가 읽으려는 위치까지 포인터를 이동


#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream is("binary.dat",ifstream::binary);

    is.seekg(4,ios::beg); //파일 포인터를 움직이는 함수 
    //읽는거 seekg, 쓰는거 seekp

    int v;
    is.read((char*)&v,4);

    //ex
    int w;
    is.seekg(4,ios::beg); //beginning
    is.read((char*)&w,8);
    is.seekg(4,ios::cur); //current
    is.seekg(-4,ios::end); //end (파일 포인터 움직이기)

    cout<<"value is: "<<v<<endl;
    cout<<"value is: "<<w<<endl;


}