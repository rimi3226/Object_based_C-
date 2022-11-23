#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream is("binary.dat",ifstream::binary);

	int v;
	is.seekg(4,ios::beg);
	is.read((char*)&v,4);
	cout<<v<<endl;
}