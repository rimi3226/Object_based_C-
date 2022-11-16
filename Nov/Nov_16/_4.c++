//p.559
//exception handling
//error handling
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int a=0;
    int b=0;

    try{
        cout<<(b/a)<<endl;
    }
    catch(exception& e){
        cout<<"ExceptionL "<<e.what()<<endl;
    }
    cout<<"End of Program"<<endl;
    return 0;
}