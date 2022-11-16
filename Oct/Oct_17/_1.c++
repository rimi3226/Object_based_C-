//p.323
//포인터 

#include <iostream>
#include <string>

using namespace std;


int main(){

    //p.325
    //#define NULL 0 NULL
    //-->포인터가 아무것도 가리키지 않는다.
    //c++ 에서는 nullptr : null pointer를 확실히 하기 위한 예약어 를 사용한다.
    //0,NULL : 정수 0을 의미
    //nullptr : 이거야 말로 진정한 null pointer

    //장점 : 가독성이 좋아진다.

    int* p=nullptr;
    int a=10;
    p=&a;

    //p.328
    //동적 메모리 할당 (dynamic memory allocation)
    //<-> 정적 메모리 할당 (static memory allocation)

    //DMA --> malloc/free (heap 공유 메모리에서 들고온다.)
    //SMA --> array allocation : int a[10];

    //c++ DMA : new-->malloc, delete-->free
    //old-fashioned C way
    int* a2=(int*)malloc(sizeof(int));
    free(a2);

    int* b1=(int*)malloc(sizeof(int)*10);
    free(b1);

    //C++
    int* a3 =new int;
    delete a3;

    int* b2=new int[10];
    delete[] b2;

    string* s=new string[10];
    s[0]="hello";
    s[1]="world";
    delete[] s;

    return 0;
}