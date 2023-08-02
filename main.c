#include "main.h"

int main(void)
{
	int n = 5;
	int *addr = &n;

	_printf("Address:[%p]\n", addr);
    	printf("Address:[%p]\n", addr);
	return 0;
}
