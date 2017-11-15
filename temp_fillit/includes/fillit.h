/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akratavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:00:52 by akratavi          #+#    #+#             */
/*   Updated: 2017/11/14 17:35:12 by akratavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define USAGE "usage: ./fillit source_file"
# define ERROR "error"

typedef struct		s_list
{
	char			**block;
	s_list			*next;
}					t_list;

#endif
