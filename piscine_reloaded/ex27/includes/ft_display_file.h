/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:28:52 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/07 12:35:07 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# define ERR_MISS "File name missing.\n"
# define ERR_MANY "Too many arguments.\n"

void	ft_putchar(char c);
void	ft_puterrmsg(char *msg);
void	ft_display_file(char *fname);

#endif
