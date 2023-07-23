#include "main.h"

int main(void)
{	
	char name = 'S';
	char *str = "My String";
	int ch; 
	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

	_putstr(str);
	_putchar('\n');
	_putchar('%');
	_putchar('\n');
	_printf("This is good for me");
	_printf("\n");
	/*for( ch = 75 ; ch <= 100; ch++ )
	{
	_printf("ASCII value = %d, Character = %c\n", ch , ch );
	}*/
	_printf("Greeting message: %s\n", str);
	_printf(" For printing %% we use %%%%");
	_putchar(name);
	_putchar('\n');

	return (0);
}
