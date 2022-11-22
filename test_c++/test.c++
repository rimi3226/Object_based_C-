#include <iostream>

using namespace std;

class P2{
	public:
	virtual ~P2(){
		cout<<"P2 소멸자"<<endl;
	}
};

class C2: public P2{
	public:
	int* p;
	C2(){
	p=new int[40];
	}
	~C2(){
		cout<<"C2 소멸자"<<endl;
	}
};

int main(){
	C2* c=new C2();

	delete c;

	cout<<"======"<<endl;

	P2* p=new C2();

	delete p;
	
	return 0;
}