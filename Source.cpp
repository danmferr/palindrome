#include <iostream>
#include<string>
using namespace std;


bool palindrome(string str)
{
	if (str.length()<=1)
		return true;
else {
	if (str.at(0)!=str.at(str.length()-1))
		return false;
	else
		return palindrome(str.substr(1,str.length()-1));
}
}

int main()
{

string input;
cout << "Enter a string: ";
cin >> input;
cout << endl;
cout<<"The string"<<input<<"is";
if (palindrome(input));
else 
	cout <<"not palindrome";
system("pause");
return 0;
}

