#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name\n";
	string first_name = "";
	cin >> first_name;
	cout << "Hello, " << first_name << "\n";

	string dear_name = "";
	cout << "Enter the name of the person you want to write to\n";
	cin >> dear_name;
	cout << "Dear " << dear_name << ",\n";
	cout << "\n";
	cout << "How are you? I am fine. I miss you.\n";
	cout << "Every single day, I am reminded of your kindness and your infectious spirit. Your absence is deeply felt in the most mundane aspects of my life. In every cup of coffee I sip, every song I hear, and every beautiful sunset I witness, I find a piece of you.\n"; // written by ChatGPT

	string friend_name = "";
	cout << "Enter the name of the friend\n";
	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	char friend_sex = 0;
	cout << "Enter m if the friend is male and an f if the friend is female\n";
	cin >> friend_sex;

	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me\n";
	}
	else if (friend_sex = 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me\n";
	}

	int age = 0;
	cout << "Enter the age of the recipient\n";
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " years old\n";
	if (age == 0 || age >= 110)
	{
		simple_error("you are kidding!");
	}

	if (age < 12)
	{
		cout << "Enter the age of the recipient\n";
	}
	else if (age == 17)
	{
	}
	else if (age >= 70)
	{
	}
	cout << "\n\n";
	cout << "Yours sincerely,\n";
	cout << first_name << "\n";
}
