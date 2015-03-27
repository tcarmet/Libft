# Libft
<img align="right"  src="http://i.imgur.com/sDChBOz.png" width="45%" />

This is a project of <a href="http://www.42.fr/" target="_blank" >Ecole 42</a>

libft is a _library_ for programming in C.

<br /><br /><br /><br /><br /><br /><br /><br /><br />

Examples
-------

```c
/* Example libft Program */

#include "libft.h"

int     main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (argv[i])
        {
            ft_putstr(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
    return (0);
}

```
	$> ./example "Hello World!"
	$> Hello World!
	$> ./example Toto Tata
	$> Toto
	   Tata

```c
/* Another Example libft Program */

#include "libft.h"

int     main(int argc, char **argv)
{
    char    *str;

    if (argc == 3)
    {
        if (argv[1] && argv[2])
        {
            str = ft_strjoin(argv[1], argv[2]);
            ft_putendl(str);
        }
    }
    else
        ft_putstr("Error\n");
    return (0);
}

```
	$> ./example "Hello " "World!"
	$> Hello World!