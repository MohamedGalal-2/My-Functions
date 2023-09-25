#include "min.h"

/**
  * @brief  This function is used to find the minimum value of a list of numbers.
  * @param  num  The number of parameters.
  * @param  ...  The list of numbers.
  * @return The minimum value.
  */

int min(int num, ...) {
	va_list min_args;

	va_start(min_args, num);

	int min = 0;

	for (int i = 0; i < num; i++)
	{
		int x = va_arg(min_args, int);
		while (i == 0)
		{
			min = x;
			break;
		}
		if (min > x)
		{
			min = x;
		}

	}

	va_end(min_args);

	return min;
}