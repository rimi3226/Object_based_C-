#include <iostream>

//p.374
//왜 복사 생성자를 알아야하는가

//복사 생성자는 평소에는 무시해도 되지만, 객체 안에서 "동적 메모리 할당"을 할 때는 주의를 기울여
//팔요한 메모리를 다시 할당 받아야한다.

//shallow copy
//deep copy

using namespace std;

class MyArray {
public :
    int size;
    int* data;

    MyArray(int _size) {
        this->size = _size;
        data = new int[this->size];  // 정수 배열을 선언한다.
    }
    // 모든 문제 해결을 위해서 복사 생성자를 만듭시다.
    MyArray(const MyArray& p) {
        this->size = p.size;

        /*shallow copy
        this->data=p.data;
        */
        
        //deep copy
        this->data = new int[this->size];
        // 오리지널로부터 값들을 복사해 와야 한다.
        for (int i = 0; i < p.size; i++) {
            this->data[i] = p.data[i];
        }
    }
    ~MyArray() {  // 내가 가져온 쓰레기는 내가 가져간다.
        delete[] data;
    }
};

int main(){
    MyArray a(10);
    a.data[5]=123456;

    cout<<"value : "<<a.data[5]<<endl;

    MyArray a2=a;
    cout<<"value : "<<a2.data[5]<<endl;


    return 0;
}
