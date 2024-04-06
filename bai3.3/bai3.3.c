#include<stdio.h>

enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

int main(){
    enum Company ten1 = GOOGLE;
    enum Company ten2 = FACEBOOK;
    enum Company ten3 = XEROX;
    enum Company ten4 = YAHOO;
    enum Company ten5 = EBAY;
    enum Company ten6 = MICROSOFT;


    printf("ten1: %d\n", ten1);
    printf("ten2: %d\n", ten2);
    printf("ten3: %d\n", ten3);
    printf("ten4: %d\n", ten4);
    printf("ten5: %d\n", ten5);
    printf("ten6: %d\n", ten6);

    ten1 = MICROSOFT;

    printf("ten1: %d\n", ten1);
    printf("ten2: %d\n", ten2);
    printf("ten3: %d\n", ten3);
    printf("ten4: %d\n", ten4);
    printf("ten5: %d\n", ten5);
    printf("ten6: %d\n", ten6);

    return 0;
}
