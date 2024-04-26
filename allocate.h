#ifndef ALLOCATE_H
# define ALLOCATE_H

# include <stdlib.h>

# define TRUE 1

typedef struct s_allocate
{
	void				*block;
	struct s_allocate	*next;
}						t_allocate;

#endif
