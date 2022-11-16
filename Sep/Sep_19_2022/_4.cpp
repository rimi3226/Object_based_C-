#include <iostream>

using namespace std;

//p.130 함수 호출시 인수전달 방법
//      call-by-value : 복사본을 넘기는 방식
//      call-by-reference : 원본의 주소를 넘기는 방식, 빠르다, 원본 수정 가능

int my_func(int a,int b){ //call_by_value
    return a+b;
}

int my_func2(int* a,int* b){ //call_by_reference
    *a=100;
    *b=200;
    return  *a + *b;
}

void my_swap(int* a,int* b){ //call_by_reference  :주소를 건들일 수 있기 때문에 위험함. 
//pointer variable
    int temp=*a;
    *a=*b;
    *b=temp;

    //*(b+1)=666; //옆에있던 w의 값이 바뀌어버림. call by reference 이기 때문이다.
    }


void my_swap2(int& a,int& b){ //reference variable
    int temp=a;
    a=b;
    b=temp;

    b+1=666; //옆에있던 w의 값이 바뀌어버림. call by reference 이기 때문이다.
}


int x=10;
int y=20;
int w=30;

int main(){
    
    int v= my_func(x,y);
    cout << x << " " << y << " " << w << endl; 
    my_swap(&x,&y);
    cout << x << " " << y << " " << w << endl; 
    my_swap2(x,y);
    cout << x << " " << y << " " << w << endl; 
    return 0;
}