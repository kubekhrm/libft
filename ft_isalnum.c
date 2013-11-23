/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 00:04:52 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/11/23 00:06:34 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
	{
		return (1);
	}
	return (0);
}
