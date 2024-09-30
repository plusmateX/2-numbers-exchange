#include <iostream> 
using namespace std;

int main()
{	
	int a, b, temp;
	cout << "Enter 2 numbers: ";
	cin >> a >> b;
	a = a+b;
	b = a-b;
	a = a-b;

	cout << "a becomes " << a << "\t b becomes " << b << endl;

	return 0;
}
