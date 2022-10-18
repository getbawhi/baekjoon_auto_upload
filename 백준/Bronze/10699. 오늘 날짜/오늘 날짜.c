#include <stdio.h>
#include <time.h>

int main() {

	struct tm* t;
	time_t base = time(NULL);



	t = localtime(&base);

	int year = t->tm_year + 1900;
	int month = t->tm_mon + 1;
	int date = t->tm_mday;

	if (date < 10 && month<10)
	{
		printf("%d-0%d-0%d", year, month, date);
		return 0;
	}

	else if(date<10)
	{
		printf("%d-%d-0%d", year, month, date);
		return 0;
	}
	
	else if(month<10)
	{
		printf("%d-0%d-%d", year, month, date);
		return 0;
	}

	else
	{
		printf("%d-%d-%d", year, month, date);
		return 0;
	}

	return 0;
}