#include <stdio.h>
#include <arpa/inet.h>

int main() {
    uint16_t network_port = 0x1234; // Port number in network byte order

    // Convert to host byte order
    uint16_t host_port = ntohs(network_port);

    printf("Port number in host byte order: %d\n", host_port);

    return 0;
}