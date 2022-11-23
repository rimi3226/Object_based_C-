#include <iostream>
#include <map>

using namespace std;

int main(){
    //map : hashtable ==> key, value : 검색 짱
    //p.620
    //key와 value의 type을 각각 지정
    map<string,int> my_map;

    my_map["john"]=20;
    my_map["tom"]=19;

    cout<<"john age: "<<my_map["john"]<<endl;
    cout<<"tom age: "<<my_map["tom"]<<endl;

    return 0;
    
}