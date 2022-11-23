#include <iostream>
#include <set>

using namespace std;

//set(집합, 중복 허락X, 순서X),map

int main(){
    set<int> my_set;

    my_set.insert(1);
    my_set.insert(2);
    my_set.insert(3);

    //iterator
    for(auto it=my_set.begin();it!=my_set.end();it++){
        cout<<*it<<endl;
    }

    //ranged based for loop
    for(auto& e:my_set){
        cout<<e<<endl;
    }



    return 0;
}
