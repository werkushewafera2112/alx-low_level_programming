#include "main.h"
/**
	*swap_int	-	switches	values oof first input
	*with the value of the second input.
	*@a:First value to swap.
	*&b: second value to swap.
	*/
void	swap_int(int	*a,	int	*b)
{
			int temp;
			temp = *a;
			*a = *b;
			*b = temp;
}
