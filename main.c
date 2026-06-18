/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaunina <asaunina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:06:38 by asaunina          #+#    #+#             */
/*   Updated: 2026/06/18 15:34:43 by asaunina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	len;
	int	len1;

	len = 0;
	len1 = 0;
	len  = ft_printf("%d %d %d\n", 1, 2, 3);
	printf("%d\n", len);
	len1 = printf("%d %d %d\n", 1, 2, 3);
	printf("%d\n", len1);
}
