#include "max.h"

/**
  * @brief  This function is used to find the maximum value of a list of numbers
  * @param  num  The number of parameters
  * @param  ...  The list of numbers
  * @return The maximum value
  */

int max(int num, ...) {
	va_list max_args;
	int max = 0;

	va_start(max_args, num);

	for (int i = 0; i < num; i++)
	{
		int x = va_arg(max_args, int);
		if (x > max)
		{
			max = x;
		}
	}

	va_end(max_args);

	return max;
}