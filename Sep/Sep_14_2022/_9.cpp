#include <cstdlib>
#include <iostream> //cin,cout
#include <string>

using namespace std;

int main(void){
    //p.95 배열
    int a[5]={1,2,3,4,5};
    int b[]={1,2,3,4,5};
    int c[] {1,2,3,4,5};

    int d[10]={1,2 }; //1,2,0,0,0,0,0,0,0,0

    string names[3]={"tom","jane","james"};

    for(auto i = 0; i < 3; i++)
    {
        cout << names[i] << endl;
    }
    
    return 0;
}