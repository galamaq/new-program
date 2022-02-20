#include <stdio.h>
#include <stdlib.h>

    int main() {
    int n;
    int end = 1;
    int count = 0;
    int *arr = (int*)malloc(sizeof(int));
    for (int i = 0; end; i++) {
    scanf("%d", &n);
    if (n == -1) {
        end = 0;
    }
    arr =  (int*)realloc(arr,sizeof(int) * (i + 1));
    arr[i] = n;
    count ++;
    }
    for (int i = 0; i < count - 2; i++) {
        printf("%d ", arr[i]);
    }
    int i = count - 2;
    printf("%d\n", arr[i]);
    free(arr);
    return 0;
}