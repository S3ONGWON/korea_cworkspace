#include <stdio.h>


int main()
{
	int a[10];
	int i;	
	int oddTotal = 0;
	int Total = 0;


	for (i = 0; i < 10; i += 2)
	{
		a[i] = i + 1;
		oddTotal += a[i];	//oddTotal = oddTotal + a[i];
		printf("a[%d] = %d, oddTotal = %d\n", i, a[i], oddTotal);
	}
	printf("합계 : %d\n", oddTotal);

	for (i = 1; i < 10; i += 2)
	{
		a[i] = i + 1;
		Total += a[i];	//Total = Total + a[i];
		printf("a[%d] = %d, Total = %d\n", i, a[i], Total);
	}
	printf("합계 : %d\n", Total);
	return 0;
}