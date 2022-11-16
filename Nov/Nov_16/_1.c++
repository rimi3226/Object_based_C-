//p.534
//이진파일 binary file <---> text file, ascii file, .txt
//text file : 저장내용이 ascii code로 기록
//binary file :값이 그대로 기록
//stream - input stream, output stream, 

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //파일에 기록할 데이터
    int buffer[]={10,20,30,40,50};

    //기록할 파일 객체를 생성한다.
    //c : fopen, fclose
    //객체 생성 == open
    //    소멸 == close
    
    ofstream os("binary.dat",ofstream::binary);

    cout <<"size of buffer"<< sizeof(buffer);
    os.write((char *)&buffer[0],20);

}
