#include <iostream>
#include <string>
#include <vector>
#include <list>


using namespace std;

/*
p.595
STL : Standard Template Library
    1. container : vector, list, queue, stack ,priority queue, set,map
    2. iterator : 반복자
    3. algorithm : find, sort,reverse, remove, transform
*/

//p.612 list

int main(){
    vector<int> v={3,2,1,5,4};
    list<int> l={3,2,1,5,4};

    // vector : array, contiguous memory
    //        : add는 일정 insertion, deletion은 상황에 따라 다르다.
    //        : small memory
    //        : default size
    //        : v.at(1)
    for(auto& e: v){
        cout<<e<<endl;
    }

    
    //list : double linked list
    //     : insertion, deletion 거의 일정
    //     : large memory
    //     : no default size
    //     : random access is not possible .at(i)
    for(auto& e:l){
        cout<<e<<endl;
    }

}
