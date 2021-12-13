#include "std_lib_facilities.h"

void suspicous(int s, int x){
	
	int* p = new int[s];
	vector<int> v1;
	//...
	
	try{
	
		if (x) p[x] = v1.at(x);
	
	}catch(...){
	
		delete[] p;
		throw;
	}
	
	int* q = new int[s];
	vector<double> v2;
	//...
	try{
		if(x) q[x] = v2.at(x);
	}catch(...){
		delete[] q;
		throw;
	}
	
	delete[] p;
	delete[] q;
}

int main()
{
	
	return 0;
}
