#include <iostream>
#include <fstream>

using namespace std;

int main(){
    try{
        int person=0;
        if (person==0)
        {
            throw person;
        }
        
    }

    //다중 catch 문장, multiple exee
    catch(int e){
        cout<<"test"<<endl;
    }
    catch (char c){
        cout<<"Character exception catched!"<<endl;
    }
}

