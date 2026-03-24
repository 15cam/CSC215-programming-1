

#include <iostream>
using namespace std;

int main()
{
	int num = 5;
	int& ref = num; // ref is referncing to variable num
	cout << "Num: " << num << endl;
	cout << "Ref: " << ref << endl;
	ref = 15;
	cout << "Num: " << num << endl; // num after modifiying
	cout << "Ref: " << ref << endl; // ref after modifiying
	return 0;
}





