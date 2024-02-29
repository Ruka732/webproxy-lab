// [11.10] using HTML form to link cgi and compute result
#include "csapp.h"

int main(int argc, char *argv[]) {
    char *buffer, *ptr;             // in order to retrieve QUERY STRING from client
    char content[MAXLINE];
    long n1 = 0, n2 = 0;

    // retrieving argument to compute addition
    if((buffer = getenv("QUERY_STRING")) != NULL) {
        ptr = strchr(buffer, '&');
        *ptr = '\0';

        sscanf(buffer, "n1=%ld", &n1);
        sscanf(ptr + 1, "n2=%ld", &n2);
    }

    // RESPONSE : BODY
    sprintf(content, "%sTiny ADDER CGI\r\n<p>", content);
    sprintf(content, "%sInput Values : %ld and %ld\r\n<p>", content, n1, n2);
    sprintf(content, "%sAdded Value : %ld\r\n<p>", content, n1 + n2);

    // RESPONSE : HTTP
    printf("Connection: close\r\n");
    printf("Content-length: %d\r\n", (int)strlen(content));
    printf("Content-type: text/html\r\n\r\n");
    printf("%s", content);
    fflush(stdout);

    exit(0);
}