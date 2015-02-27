********************************************************************************
                                                                                
                                                          :::      ::::::::     
     README.md                                          :+:      :+:    :+:     
                                                      +:+ +:+         +:+       
     By: tcarmet <marvin@42.fr>                     +#+  +:+       +#+          
                                                  +#+#+#+#+#+   +#+             
     Created: 2015/02/27 18:04:50 by tcarmet           #+#    #+#               
     Updated: 2015/02/27 18:24:44 by tcarmet          ###   ########.fr         
                                                                                
********************************************************************************

# Libft
<img align="right"  src="http://i.imgur.com/sDChBOz.png" width="45%" />

This is a project of [Ecole 42](http://www.42.fr)

libft is a _library_ for programming in C.


Example
-------

```c
/* Example libft Program */

#include "libft.h"

int     main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 0)
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

