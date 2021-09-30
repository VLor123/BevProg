#include "std_lib_facilities.h"

int main()
{
	string first_name,friend_name;
	char friend_sex=0;
	int age;
	
	cout << "Enter the name of the person you want to write to" <<endl ;
	cin >> first_name;
	cout << endl << "Please enter this person's age" << endl;
	cin >> age;
	
	if (age<=0 || age>=110)
		simple_error("you're kidding!");
	
	cout << endl << "Please enter the name of your third best friend" << endl;
	cin >> friend_name;
	cout << endl << "Is this friend male of female? Please type 'm' or 'f'." << endl;
	cin >> friend_sex;
	
	cout << "Dear, " << first_name << endl << endl ;
	cout << "How are you? I am fine. I miss you. I Think we should hang out together!"<< endl;
	cout << "Have you seen " << friend_name << " lately?" << endl;
	
	if (friend_sex=='m')
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	else if (friend_sex=='f')
		cout << "If you see " << friend_name << " please ask her to call me." << endl;
	
	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
	
	if (age<12)
		cout << "Next year you will be " << age+1 << endl;
	else if (age==17)
		cout << "Next year you will be able to vote." << endl;
	else if (age>70)
		cout << "I hope you are enjoying retirement." << endl;
		
	cout << "Yours sincerely," << endl << endl<< endl << "Vastag Lorinc." << endl;
	
	keep_window_open();
	return 0;
}
