#include <iostream>
#include <string>

using namespace std;

//.176
class Bank{
    //정보 은닉
    //데이터는 함수를 통해서 건드릴 수 있다. -> 정보를 함부로 건들지 못함
    private:
        int money;

    public:
        void set(int m){
            if(m<0){
                money=0;
                return;
            }
            money=m;
        }
    
        void show(){
            cout <<"You have "<<money<<"won."<<endl;
        }

};



int main(){
    Bank a;
    Bank b;
    Bank c;


    a.set(-100);
    a.show();

    b.set(300000);
    b.show();

    c.set(2300);
    c.show();

    return 0;

}