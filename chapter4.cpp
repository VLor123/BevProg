#include "std_lib_facilities.h"

int main()
{
	double szam1, szam2;
	char stop = 'x';
	double differencia;
	cout << "Please input 2 numbers." << endl;
	while(cin >> szam1){
		cin >> szam2;
		
		if (szam1==szam2){
			cout << "the numbers are equal."<< endl;
		
		}
		if (szam1>szam2){
			cout << "the smaller value is: "<< szam2 << endl;
			cout << "the larger value is: " << szam1 << endl;
		}
		else if (szam2>szam1){
			cout << "the smaller value is: "<< szam1 << endl;
			cout << "the larger value is: " << szam2 << endl;
		}
		differencia=szam1-szam2;
		if (differencia > -0.001 && differencia < 0.001)
			cout << "the numbers are almost equal"<< endl;
	}
	return 0;
}

