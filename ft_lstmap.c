/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:53:52 by yachehbo          #+#    #+#             */
/*   Updated: 2021/11/11 12:49:46 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newelm;
	t_list	*newlst;

	newlst = 0;
	while (lst)
	{
		newelm = ft_lstnew(f(lst->content));
		if (newelm == 0)
		{
			ft_lstclear(&newlst, del);
			break ;
		}
		else
			ft_lstadd_back(&newlst, newelm);
		lst = lst->next;
	}
	return (newlst);
}
