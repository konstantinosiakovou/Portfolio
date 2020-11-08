#include <stdio.h>
#include <sys/socket.h> //Βιβλιοθήκη για τα sockets
#include <stdlib.h>
#include <netinet/in.h> 
//AF_INET (Οικογένεια διευθύνσεων)
fd = socket(AF_INET, SOCK_STREAM, 0);
server.sin_family = AF_INET;
server.sin_port = htons(8096);
inet_pton(AF_INET, "127.0.0.1", &serv.sin_addr); //Δεσμεύει τον πελάτι στο τοπικό φιλοξενητή
connect(fd, (struct sockaddr *)&serv, sizeof(serv))); //Συνδέει τον πελάτη στο server.
while(1) {
    printf("Enter a message: ");
    fgets(message, 100, stdin);
    send(fd, message, strlen(message), 0);
    //Έξτρα βρόγχος που μπορεί να προστεθεί(Για να τερματίσει την διεργασία του παιδιού)
}