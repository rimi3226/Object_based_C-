//Lambda Function == Lambda expression
//p.640
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool my_my_func(int i){
    if(i%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    vector<int> numbers={1,2,3,4,5};

    auto count =count_if(numbers.begin(),numbers.end(),my_my_func);
    cout<<"일반함수 개수 세기: "<<count<<endl;

    auto count2=count_if(numbers.begin(),
        numbers.end(),
        [](int x){if(x%2==0){return true;}else return false;}
    );

    cout<<"Lambda 함수 개수 세기: "<<count2<<endl;

    return 0;

}
