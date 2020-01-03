#include<stdio.h>
int main()
{
	int a[2] = {4, 2};
	void *ptr = &a[0];
	ptr = ptr + sizeof(int*);
	printf("%d\n", *(int *)ptr);
	//return 0;

//type casting.....

    int b = 10;
	void *ptry = &b;
	printf("%d", *(int *)ptry);
	return 0;
}
