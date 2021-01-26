/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 10:32:37 by odhazzar          #+#    #+#             */
/*   Updated: 2020/05/23 10:38:10 by odhazzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	int				fd;
	char			*remain;
	struct s_list	*next;
}					t_list;

int					get_next_line(int fd, char **line);
void				ft_free_list(int fd, t_list **lst);
size_t				ft_strlen(const char *str);
char				*ft_strchr(const char *str, int c);
char				*ft_strdup(const char *str);
char				*ft_substr(char const *s, unsigned int start, size_t len);

#endif
