#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdlib.h>
#define SA struct sockaddr


struct sockaddr_in{
	uint8_t		sin_len;
	sa_family_t sin_family;
	in_port_t sin_port;

	struct in_addr sin_addr;	
	char   sin_zero[8];
}

int main()
{
 	int meusocket, resposta_server;
 	pid_t  criacao_filhos;
 	int tamanho_cliente;
 	int vinculo, escuta; 	
 	struct sockaddr_in cliaddr, servaddr;

 	meusocket = socket(AF_INET, SOCK_STREAM, 0);
 	bzero(&servaddr, sizeof(servaddr));
 	servaddr.sin_family = AF_INET;
 	servaddr.sin.addr.s_addr = htonl(INADDR_ANY);
 	servaddr.sin_port = htons(9502);

 	vinculo = bind(meusocket, (SA*)&servaddr, sizeof(servaddr));
 	escuta = listen(meusocket, 1024);
 	for(;;)
 	{
 		tamanho_cliente = sizeof(cliaddr);
 		resposta_server = accept(meusocket(SA*)&cliaddr, tamanho_cliente);
 		if(criacao_filhos==fork()==0)
 		{
 			close(meusocket);
 			srt_echo(resposta_server);
 			exit(0);
 		}
 		close(resposta_server);




 	}

	return 0;
}