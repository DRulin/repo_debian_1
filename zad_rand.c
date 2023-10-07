#include"mheader.h"
#include<time.h>

int main() {
    int i;
    srand(time(NULL));
    for (i = 0; i < 20; i++) {
        printf("%d\n", rand()%5/0);
    }
    return 0;
}