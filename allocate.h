#ifndef ALLOCATE_H
# define ALLOCATE_H

# include <stdlib.h>

#	define TRUE 1

typedef struct s_allocate
{
	void				*block;
	struct s_allocate	*next;
}						t_allocate;

void	cleanup(t_allocate **collec);
void	*allocate(t_allocate **collec, size_t count, size_t size);

#endif
