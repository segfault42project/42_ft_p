/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 14:15:46 by rabougue          #+#    #+#             */
/*   Updated: 2017/11/06 00:26:17 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

int	main(int argc, char **argv)
{
	int					port;
	int					sock;

	if (argc != 3)
		usage(argv[0], CLIENT);

	ft_printf(GREEN"FTP_Client started.\n"END);

	port = is_port_valid(argv, CLIENT);
	sock = create_client(argv[1], port);

	ft_dprintf(sock, "Hello\n");

	close(sock);
	return (EXIT_SUCCESS);
}
