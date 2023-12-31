/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:59:07 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/06/19 18:54:43 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include <stdlib.h>
# include <stdio.h>
# include "types.h"

t_args	*new_args_node(char	*content);
void	add_args_node_back(t_args **args, t_args *new_node);

t_redir	*new_redir_node(char *file, int type, int ambiguous);
void	add_redir_node_back(t_redir **redir, t_redir *new_node);
t_cmd	*fill_struct_cmd(t_list *lst);
void	ft_heredoc(t_cmd *cmd);

#endif