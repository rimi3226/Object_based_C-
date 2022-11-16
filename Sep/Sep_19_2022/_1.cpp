#include <iostream>

using namespace std;

//p. 106 2차원 배열
int main(){

    int a[3][3] ={ //2차원 배열
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //range based for loop
    for (auto& v : a) //&
    {
        for (auto v2 : v){ 
            cout <<v2;
        }
        
    }
    
    return 0;
}