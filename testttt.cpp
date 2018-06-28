#include<iostream>
using namespace std;

int main()
{
	char name[] = "Philip";
	char name2[6]={};
	int i;
	for (i = 0; i <= 7; i++)
	{
		name2[i] = name[i];
		cout << name2[i]<< endl;
	}
	name2[6]='\0';
	cout << name2 << endl;
	
	int* num = new int;
*num = 10;
cout << *num << endl;
	
	return 0;
}
