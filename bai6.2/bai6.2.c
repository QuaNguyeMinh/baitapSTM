#include <stdio.h>
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a;


    while (1) {
    	scanf("%d", &a);
        if (a == n) {
            printf("xin chuc mung, ban da doan dung\n");
            break;
        } else {
            printf("so ban doan da sai, vui long nhap lai\n");
        }
    }

    return 0;
}
