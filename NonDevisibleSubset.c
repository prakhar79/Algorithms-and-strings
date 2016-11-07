#include <stdio.h>

void main () {
    int div,ent;
    int i,j,k;
    int count=0,max=0;

    scanf("%d %d", &ent, &div);
    int arr[ent];

    for (i = 0; i < ent; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < ent; i++) {
        for (j = 0; j < ent; j++) {
            if ((arr[i] + arr[j]) % div > 0 && i != j) {
                count++;
            }
        }
        max = (count > max ? count : max);
        count = 0;
    }
    printf("%d \n", ++max);
}