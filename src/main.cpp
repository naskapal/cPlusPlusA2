#include <iostream>
#include <date.h>

using namespace std;
int main()
{
	Date newDate(13,1,1994);
	cout << "current date is";
	newDate.printDate();
	return 0;
}
