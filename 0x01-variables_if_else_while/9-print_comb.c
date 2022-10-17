#include <Mstdio.h>
/**
 * main-program entry point
 * Return: 0 sucess, non zero error
 */
int main(void)
{
	int num;
	
	for (num = '0'; num <= '9'; numm++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
