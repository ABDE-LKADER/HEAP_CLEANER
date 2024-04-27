# include "allocate.h"
# include <stdio.h>
# include <limits.h>

int main(){
	int			i = -1;
	int			*num;
	char		*str;
	char		**string;
	t_allocate	*allocated;

	allocated = NULL;
	num = allocate(&allocated, 1, sizeof(int));
	*num = INT_MAX;
	printf("%d\n", *num);
	str = allocate(&allocated, 11, sizeof(char));
	while (++i < 10)
		str[i] = '#';
	str[i] = '\0';
	printf("||||||||||||||||||||||| %s ||||||||||||||||||||\n", str);
	cleanup(&allocated);
	string = allocate(&allocated, 1, sizeof(char *));
	*string = NULL;
	printf("||||||||||||||||||||||| %s ||||||||||||||||||||\n", *string);
	cleanup(&allocated);
}
