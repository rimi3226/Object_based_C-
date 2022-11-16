#include <cstdlib>
#include <iostream> //cin,cout
#include <string>

using namespace std;

int main(void){
    //p.99
    //range based for loop
    int num[]={1,2,3,4,5};
    for (int i :num)
    {
        cout <<i<<endl;
    }
    
    for (int k = 0; k < 5; k++)
    {
        cout << num[k] << endl;
    }

    string names[]={"tom","jane","jerry"};
    for (auto v :names){
        cout << v << endl;
    }
    
    
    return 0;
}