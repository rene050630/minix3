#include <unistd.h>
int main() {
    while(1) {

        for(volatile int i=0; i<10000; i++); 
        usleep(50000); 
    }
    return 0;
}
