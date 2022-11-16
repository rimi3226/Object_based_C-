/* 서로 다른 정수를 n (>= 3)개 입력받아, 그 중에서 가장 큰 숫자와 작은 숫자를 제외하고,

오름차순으로 출력하고자 한다.

이를 지원하는 class Temp 를 만드시오.

class Temp는 meothod void addNum(int _a) 를 제공하여, 입력된 숫자를 받는다.

method void showSorted(void)를 제공하고, 가장 큰 숫자와 작은 숫자를 제외하고 1칸의 공백으로 숫자간을 구분하여 오름차순으로 출력한다.

아래 main함수에서 사용할 수 있는 class Temp를 지정된 위치에 만드시오.
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class Temp{
    public:
    vector <string> arr; 

    void addNum(string _a){
        arr.push_back(_a);
    }

    void showSorted(){
        sort(arr.rbegin(),arr.rend());
        for (int i = 0; i < arr.size(); i++)
        {
            cout<<arr[i];
            if(i+1<arr.size()-1){
                cout<<" ";
            }
        }
        
        
    }
};
//-------------------------------------------------- 

// 필요한 헤더와 namespace 정의를 넣으시오

// class Temp를 정의하시오

//-------------------------------------------------


int main()

    {

    Temp t;

    string _a;

    while(true){
        cin >> _a;

        if (_a == "Z")

        {

        break;

        }

        t.addNum(_a);
    }

    t.showSorted();


    return 0;

}