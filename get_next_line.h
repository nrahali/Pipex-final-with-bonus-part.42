/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 01:57:47 by nrahali           #+#    #+#             */
/*   Updated: 2022/03/22 02:00:24 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*ft_strjoin_1(char *s1, char *s2);
int		ft_strlen_1(char *s);
int		ft_strchr_1(char *str);
char	*ft_substr_1(char *s, int start, int len);
char	*get_next_line(int fd);
int		ft_strcmp(char *s1, char *s2);

#endif
