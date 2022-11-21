/*
    class Template
    : class template --> class
    : class --> object, instance

*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
class Box{
    private:
        T data;
    public:
        Box(){

        }
        Box(T _data): data(_data){

        }
        T getData(){
            return data;
        }
        void setData(T _t){
            data=_t;
        }
        void showMyData();

};

template <typename T>
void Box<T>::showMyData(){
    cout<<data<<endl;
}

class MyItem{
    private:
    int k;
    public:
    MyItem(){
        k=99;
    }
    void show(){

        cout<< k << endl;
    }
};

template <typename T1,typename T2>
class DBox{
    T1 data1;
    T2 data2;
};


int main(){
    //python --> type annotation
    //1단계: int를 data로 갖는 class를 class template으로부터 만든다.
    //2단계: 만들어진 클래스 Box<int>로부터 객체를 만든다.
    vector<int> v={1,2,3,4,5}; //얘는 class template이 아니다.
    Box<int> b{10}; //class template
    
    //=================================
    Box<MyItem> my_box;
    MyItem i;
    my_box.setData(i);

    MyItem v2=my_box.getData();
    
    DBox<string,int> db;
    cout<<b.getData()<<endl;

    return 0;
}