/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:04:26 by yel-moun          #+#    #+#             */
/*   Updated: 2024/04/23 17:23:03 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <stdlib.h>
# include "./get_nex_line/get_next_line.h"

int		ft_strlen(char *c);
int		is_space(char c);
char	*ft_substr(char *str, int start);
int		ft_is_nbr(char c);
int		ft_is_sign(char sign);
int		ft_get_sign(char sign);
int		ft_strncmp(char *s1, char *s2, int n);
#endif