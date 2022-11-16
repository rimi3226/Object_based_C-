#include <iostream>

using namespace std;

//p. 106 2차원 배열
int main(){

    string names[]={"james","john","tom"};
    for(auto v:names){
        for(auto c:v){
            cout<<c<<endl;
        }
    }
    return 0;
}