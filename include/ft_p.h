/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 14:16:13 by rabougue          #+#    #+#             */
/*   Updated: 2017/11/04 05:15:40 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_P_H
# define FT_P_H

# include "../libft/includes/libft.h"
# include <sys/socket.h>
# include <netdb.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <errno.h>

# define FT_SOCKET_ERROR -1
# define FT_GET_PROTO_BY_NAME_ERROR -2
# define FT_BIND_ERROR -3
# define FT_LISTEN_ERROR -4

int	usage(char *argv);
int		create_server(int	port);

#endif
