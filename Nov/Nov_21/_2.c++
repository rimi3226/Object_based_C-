//function template vs function overloading or overriding

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
void showValue(T v){
    cout<<v<<endl;
}
    
int main(){
    showValue(10); //int
    showValue(10.4); //double
    showValue('c'); //char
    showValue("hello"); //string

}

