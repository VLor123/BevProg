#include "std_lib_facilities.h"

int main()
{
	double szam1,max=0,min=0, sum=0, num_o_values=0;
	string length;
	cout << "Please input a number." << endl;
	vector<double>lengths;
	while(cin >> szam1){

		sum=szam1+sum;
		num_o_values=num_o_values+1;

		cin >> length;
		
		if (length=="y" || length=="yard" || length=="km" || length=="gallons") error("illegal measurment values!");
		
		
		if (szam1>max){
			max=szam1;
			cout << "the largest so far." << endl;}
		if (szam1<min){
			min=szam1;
			cout << "the smallest so far."<< endl;}
/*		if (length=="m"){
			szam1=szam1*100;
			length="cm";
			cout << szam1<< " " << length << endl;}	*/
		if (length=="ft"){
			szam1=szam1*12;
			length="in";}
		if (length=="in"){
			szam1=szam1*2.54;
			length="cm";}
		if (length=="cm"){
			szam1=szam1/100;
			length="m";}
		lengths.push_back(szam1);
/*			cout << szam1<< " " << length << endl;
			szam1=szam1/2.54/12;
			length="ft";
			cout << szam1<< " " << length << endl;}
		else if (length=="cm"){
			szam1=szam1/2.54;
			length="in";}	*/

		

/*		if (length!="cm" && length!="ft")	*/
//		cout << szam1<< " " << length << endl;
	}
	
	sort(lengths);
	for (int i=0;i<num_o_values;i++)
	{	cout << lengths[i] << " m"<< endl;}
	
	cout << "the smallest number is : " << min << endl << "the largest number: " << max << endl << "the number of values: " << num_o_values << endl << "the sum of values: " << sum<< endl;
	return 0;
}

