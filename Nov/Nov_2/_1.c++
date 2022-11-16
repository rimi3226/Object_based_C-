#include <iostream>
#include <vector>
#include <string>

using namespace std;

class MyVector{
    public:
    int x;
    bool operator==(MyVector& v){
        if (this->x==v.x)
        {
            return true;
        }
        
        return false;
    }
    bool operator!=(MyVector& v){
        return !(*this==v);     
    }


};



int main(void){ 

}