#include <stdio.h>
#include "verify.h"

int verify (char *number)
{
	int i=0;
	int error=0;
	while(number[i])
	{
		if('0'>number[i] || '9'<number[i])
		{
			error=1;
		}
		i++;
	}
	return error;
}
