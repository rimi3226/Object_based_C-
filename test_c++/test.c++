#include <iostream>
#include <vector>
using namespace std;

vector<int> cnt;
vector<vector<int>> v;
int cnt_one=0;
int cnt_zero=0;

int fibonacci(int n) {
    if (n == 0) {
		cnt_zero++;
        return 0;
    } else if (n == 1) {
		cnt_one++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void print_cnt(int num){
	fibonacci(num);

	cnt.push_back(cnt_zero);
	cnt.push_back(cnt_one);

	v.push_back(cnt);

	cnt.clear();
	cnt_one=0;
	cnt_zero=0;
}

int main(){
	int i,j;
	vector<int> num;


	cin>>i;

	for (int n = 0; n < i; n++)
	{
		cin>>j;
		num.push_back(j);
	}
	
	for (int n = 0; n < i; n++)
	{
		print_cnt(num[n]);
		
	}
	
	
	for (int n = 0; n < i; n++)
	{
		for (int m = 0; m < 2; m++)
		{
			cout<<v[n][m]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}