#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;
/*
    Iterator ==generalized pointer
    begin()
    end()
    ++
    --
    *
    rbegin()
    rend()
    */

int main(){
    list<int> v={3,2,1,5,4};

    //iterator 사용
    for(auto i=v.begin();i != v.end();i++){
        cout<< *i <<endl;
    }

    //직접 하나씩 access(뽑아서) 쓰는거
    for(auto& e:v){
        cout<<e<<endl;
    }

    v.sort();
    for (auto i = v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<endl;
    }

}