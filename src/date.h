#ifndef DATE_H
#define DATE_H

class Date
{
public:
	Date();
	Date(int aMonth, int aDate, int aYear);
	Date compareDate(Date aDate, Date anotherDate);
	void printDate();
	~Date();
private:
	int month;
	int date;
	int year;
	bool checkDate(int aMonth, int aDate, int aYear);
};

#endif // DATE_H
