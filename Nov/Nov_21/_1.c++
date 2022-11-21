#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v={1,2,3,4,5 };
    
    try{
        cout<<v.at(0)<<endl;
        cout<<v.at(10)<<endl;
        v.resize(v.max_size()+1);
    }
    catch(length_error& e){
        cout<<"me : "<<e.what()<<endl;
    }
    catch(out_of_range& e){
        cout<<"me : "<<e.what()<<endl;
    }
    catch(exception& e){
        cout<<e.what()<<endl;
    }

    cout<<"Program ended"<<endl;

    return 0;
    
}