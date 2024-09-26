#include <stdio.h>

int main(void) {
    char b[20];
    char a[20];
    printf("inserisci il nome");
    scanf("%s", &a);
    printf("inserisci il sesso M o F");
    scanf("%s", &b);
    if (b == "M") {
        printf("egregio signor %s",a);
    } else {
        printf("gentile signora %s",a);
    }


}
