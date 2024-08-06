#include "ft_printf.h"

int	main()
{
	const char	*s = "Soy %s %c %d %i %u %x %X %p %%";
	// const char	*s = "%d";
	ft_printf(s, "Jean", 'B', -2147483648, 1, 123, 17, -255, "hola");
	// ft_printf(s, -1);

	return (0);
}
