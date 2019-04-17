/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_env.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 03:39:01 by alan              #+#    #+#             */
/*   Updated: 2019/04/17 11:23:34 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "environment.h"
#include "ft_string.h"

int	validate_env(const char *command)
{
	char	*sign;

	sign = ft_strchr(command, '=');
	if (!sign)
		return (0);
	return (validate_envn_name(command, sign - command));
}
