#include <stdio.h>
int main() {
    int i, j = 0;

    int arr[1000];
    int  count = 0;
    for (i = 1; i <= 1000; i++) {
        if (i % 12 == 0) {
            arr[count++] = i;
        }
    }
    for (i = 0; i < count; i++) {
        printf("%5d", arr[i]);
    }



    return 0;
}