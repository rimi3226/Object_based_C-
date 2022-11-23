#include <iostream>
#include <set>
#include <map>
#include <stack> //container adapter
#include <queue>
#include <list>

using namespace std;
//p.626 container adapter : stack, queue, priority queue

int main(){

    //queue<int,deque<int>> my_q;
    queue<int> my_q;

    my_q.push(10);
    my_q.push(20);
    my_q.push(30);

    cout<<my_q.size()<<endl; //큐에 있는 개수
    cout<<my_q.front()<<endl; //맨 앞에 있는 것
    cout<<my_q.back()<<endl; //맨 뒤에 있는 것

    //큐에 있는 것들을 모두 출력, 하나씩 빼면서
    while(my_q.empty()==false){
        cout<<my_q.front()<<endl;
        my_q.pop();
    }
    




    return 0;
}