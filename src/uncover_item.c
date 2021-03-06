/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uncover_item.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 20:07:20 by slisandr          #+#    #+#             */
/*   Updated: 2020/01/28 20:07:24 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	uncover_item(t_node **m_lst, t_node *hdr)
{
	t_node	*cur;
	int		n_item;

	cur = hdr;
	if (cur->c == 'h')
	{
		insert_node(cur);
		cur->c = 'H';
		cur = cur->s;
		while (cur->role != 'h')
		{
			uncover_option_of_node(m_lst, cur);
			cur = cur->s;
		}
	}
}
