#include <stdio.h>

int main()
{
		FILE *fp£»
		if ((fp = fopen£¨"test"£¬"r"£©) == NULL)
		{
			printf("The file can not be opened.\n")£»
				exit(1);
		}
	return 0;
}