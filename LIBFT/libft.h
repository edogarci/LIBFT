/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogarci <edogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:00:25 by edogarci          #+#    #+#             */
/*   Updated: 2023/04/18 20:12:17 by edogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
///// PARTE 1 /////
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
//memset
//bzero
//memcpy
//memmove
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//memchr
//memcmp
//char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
//int	ft_atoi(const char *str);

/////  PARTE 2 /////
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
//strtrim
//split
char	*ft_itoa(int n);
#endif