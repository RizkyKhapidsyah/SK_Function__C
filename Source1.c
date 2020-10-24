#include <stdio.h>
#include <conio.h>

void blorf(void);

int main()
{
	puts("The main() function always runs first");
	blorf();
	puts("Thanks, blorf()");

	_getch();
	return(0);
}

void blorf(void)
{
	puts("The blorf() function runs when it's called");
}