#include <iostream>
#include <set>
#include <map>
#include <stack> //container adapter
#include <queue>
#include <list>

using namespace std;

template<typename T>
class MyCompare{
    public:
    bool operator()(T a, T b){
        if(a<b){
            return false;
        }
        return true;
    }
};

int main(){
    priority_queue<int,vector<int>,MyCompare<int>> pq;

    pq.push(10);
    pq.push(50);
    pq.push(30);
    
    while(pq.empty()==false){
        cout<<pq.top()<<endl;
        pq.pop();
    }


    return 0;
}