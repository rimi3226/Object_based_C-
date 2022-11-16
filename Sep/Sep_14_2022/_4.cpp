#include <cstdlib>
#include <iostream> //cin,cout
#include <string>

using namespace std;

int main(void){
    //p. 76 swtich
    int c=1;

    switch(c) {
        case 1:
            cout <<"hello "<< endl;
            break;
        case 2:
            cout <<"world!"<< endl;
            break;
        default :
            cout <<"others "<< endl;
            break;

    }

    return 0;

}