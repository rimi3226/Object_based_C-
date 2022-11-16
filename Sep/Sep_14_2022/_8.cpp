#include <cstdlib>
#include <iostream> //cin,cout
#include <string>

using namespace std;

int main(void){
    //주시위 2개를 던져서 1,1이 나올 확률을
    //시뮬레이션을 통해서 계산하시오.
    //1/36 =0.027, 2.7%
    //cplusplus reference

    int cnt=0; //(1,1)이 나오는 횟수
    srand(3000);

    cout<<"rand max is " << RAND_MAX <<endl;

    for (auto i = 0; i < 10000; i++)
    {
        int k1=rand()%6+1;
        int k2=rand()%6+1;
        if ((k1==1)&&(k2==1))
        {
            cnt++;
        }
        
    }
    
    cout<<"10000번 중에 " << cnt << endl;

    return 0;
}