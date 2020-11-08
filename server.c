#include <stdio.h>
#include <sys/socket.h> //Βιβλιοθήκη για τα sockets
#include <stdlib.h>
#include <netinet/in.h>
 //AF_INET (Οικογένεια διευθύνσεων)
struct sockaddr_in serv; //Η μεταβλητή socket.
int fd; //Το αρχείο socket περιγραφέας που θα χρησιμοποιήσει για να αναγνωρίζει το socket.
int conn; //Σύνδεση του αρχείου περιγραφής που θα χρησιμοποιηθεί για να διακρίνει της συνδέσεις πελατών.
char message[100] = "Hello World"; //Πίνακας τα αποθυκεύσει τα μηνύματα που στάλθηκαν από τον server.
serv.sin_family = AF_INET;
serv.sin_port = htons(8096); //Ορίζουμε την θύρα την οποία θα ακούει ο server για συνδέσεις.
server.sin_addr.s_addr = INADDR_ANY;
fd = socket(AF_INET, SOCK_STREAM, 0); //Δημιουργεί ένα νέο socket και επίσης επιστρέφει το αναγνωριστικό του socket fd.
// Για να χειριστεί τα λάθη, ελέγχει με συνθήκη αν το fd είναι >0 αλλιώς εμφανίζει λάθος
bind(fd, (struct sockaddr *)&serv, sizeof(serv)); //Αναθέτει την συγκεκριμένη διεύθυνση στον server από το socket
listen(fd,5); //Ακούει για την σύνδεση πελάτη. 5 μέγιστες συνδέσεις που επιτρέπει.
//Ξεκινάει να χειρίζεται της συνδέσεις.
while(conn = accept(fd, (struct sockaddr *)NULL, NULL)) {
    int pid;
    if((pid = fork()) == 0) {
        while (recv(conn, message, 100, 0)>0) {
            printf("Message Received: %s\n", message);
            //Έξτρα βρόγχος που μπορεί να προστεθεί(Για να τερματίσει την διεργασία του παιδιού)            
            message = "";
        }
        exit(0);
    }
}