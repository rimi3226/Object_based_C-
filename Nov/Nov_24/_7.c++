//STL : container, iterator, algorithm
/*
Algorithm
: find
: count_if: 조건을 만족하는 것의 개수
: copy
: reverse
: sort : 정렬하기, 기본은 오름차순
: for_each : 각 요소에 함수 적용
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool my_condition(string s){
    if(s.length()>=6){
        return true;
    }
    else{
        return false;
    }
}

bool my_str_sort(string s1,string s2){
    if (s1<s2)
    {
        return false;
    }
    else{
        return true;
    }
    
}

void my_func(string s){
    cout<<"문자열: "<<s<<endl;

}

int main(){
    vector<string> myf = {"사과","바나나","토마토","배"};

    auto it=find(myf.begin(),myf.end(),"토마토");
    //토마토가 있는지 확인해보기 Algorithm find() 사용
    if (it==myf.end())
    {
        cout<<"찾을 수 없습니다."<<endl;
    }
    else{
        cout<<"토마토 찾았습니다."<<endl;
    }
    
    auto itt=find_if(myf.begin(),myf.end(),my_condition);

    sort(myf.begin(),myf.end(),my_str_sort); //내림차순 정렬

    for(auto& e:myf){
        cout<<e<<endl;
    }

    for_each(myf.begin(),myf.end(),my_func);
    
    //들어있는거 순서만 바꾸기
    reverse(myf.begin(),myf.end());

    for(auto& e:myf){
        cout<<e<<endl;
    }

    return 0;

}