#include <iostream>
using namespace std;
int main( )
{
	int x;
	int cont_or_not;

	do
	{
		cout << "Enter an int: ";
		cin >> x;
		cout << "Continue? (key in 1 for yes and 0 for no)";
		cin >> cont_or_not;
	} while(cont_or_not=1);
	
	system("PAUSE");
	return 0;
}