#include <iostream>
#include <set>
#include <map>
#include <stack> //container adapter
#include <queue>
#include <list>

using namespace std;
//p.626 container adapter : stack, queue, priority queue

int main(){

    stack<int,list<int>> my_stack; //실제 구현이 list로 된 stack
    my_stack.push(10);
    my_stack.push(20);
    my_stack.push(30);

    cout<<"stack size: "<<my_stack.size()<<endl;
    cout<<my_stack.top()<<endl; //pop을 하지 않는다.

    while(my_stack.empty()==false){
        cout<<my_stack.top()<<endl;  
        my_stack.pop();

    }
    return 0;
}