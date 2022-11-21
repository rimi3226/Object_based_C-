#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using namespace std;

//dqueue: double ended queue

int main()
{
    deque<int> dq={1,2,3,4,5};

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(999);
    dq.push_front(100);


}