#include <cstdlib>
#include <iostream> //cin,cout
#include <string>

using namespace std;

int main(void){
    //p. 78 while, do-while
    while(true){
        cout << "infinite loop" <<endl;
    }

    do{
        cout << "infinite loop \n do-while" <<endl;
    }while(false);

    return 0;
}
