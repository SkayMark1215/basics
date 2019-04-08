#include <iostream>
using namespace std;

int main()
{
	double d = 0;
	while (cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		cout << "d==" << d
			 << " double to int ==" << i
			 << " char to int==" << i2
			 << " char(" << c << ")\n";
	}
	cin >> d;	//screen freezing
	
    return 0;
}

