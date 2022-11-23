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
    Box<string> b{"Hello"}; //class template
    cout<<b.getData()<<endl;

    //=================================
    Box<MyItem> my_box;
    MyItem i;
    my_box.setData(i);

    MyItem v2=my_box.getData();
    v2.show();
    
    DBox<string,int> db;

    return 0;
}