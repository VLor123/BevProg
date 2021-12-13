#include "std_lib_facilities.h"

int main()
{
	string firstn;
	string friendn;
	char friendsex=0;
	int age;
	cout << "please enter first name!" << endl;
	cin >> firstn;
	cout << "please input a friends name!" << endl;
	cin >> friendn;
	cout << "please input the gender of the friend!(m/f)" << endl;
	cin >> friendsex;
	cout << "please enter the recipients age." << endl;
	cin >> age;
	if (age == 0 || age == 110)
		simple_error("you're kidding!");
	
	
	cout << "Dear " << firstn << "," << endl;
	cout << "How are you? I am fine. I miss you." << endl;
	cout << "Have you seen " << friendn << " lately?" << endl;
	if (friendsex == 'm')
		cout << "if you see " << friendn << " please ask him to call me." << endl;
	if (friendsex == 'f')
		cout << "if you see " << friendn << " please ask her to call me." << endl;
	cout << "i hear you just had a birthday and you are " << age << " years old!" << endl;
	
	if (age < 12)
	++age;
		cout << "next year you will be " << age << endl;
	if (age == 17)
		cout << "next year you will be able to vote" << endl;
	if (age > 70)
		cout << "i hope you are enjoying retirement" << endl;
	cout << "Yours sincerely" << endl << endl << endl;
	cout << "Lawrence" << endl;
	
	return 0;
}
