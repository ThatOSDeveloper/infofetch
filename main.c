#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

void print_system_info() {
    struct utsname buffer;

    if (uname(&buffer) != 0) {
        perror("uname");
        return;
    }

    // Print system information
    printf("Operating System: %s\n", buffer.sysname);
    printf("Kernel Version: %s\n", buffer.release);
    printf("Hostname: %s\n", buffer.nodename);
    printf("CPU Arch: %s\n", buffer.machine);
    printf("Kernel Version: %s", buffer.version);
}

int main() {
    print_system_info();
    return 0;
}
