#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
  
int main(){  
    int a = 0;  
    char str[5];  
    scanf("%d",&a);  
    sprintf(str, "%d", a);   
    a = strlen(str);  
    for(int i = 0; i < 4-a; i++){  
        str[4] = str[3];  
        str[3] = str[2];  
        str[2] = str[1];  
        str[1] = str[0];  
        str[0] = '0';  
    }  
    //印出1-9,要判斷為第幾行跟數字多少所以有兩段switch
    char *ptr = str;  
    for(int i = 0; i < 5; i++){  
        for(int j = 0; j < 4; j++, ptr++){  
            switch (*ptr){  
                case '0':  
                    switch (i){  
                        case 0:  
                            printf("*****");  
                            break;  
                        case 1:  
                            printf("*   *");  
                            break;  
                        case 2:  
                            printf("*   *");  
                            break;  
                        case 3:  
                            printf("*   *");  
                            break;  
                        case 4:  
                            printf("*****");  
                            break;  
                        default:  
                            break;  
                    }  
                    break;  
  
                case '1':  
                    switch (i){  
                        case 0:  
                            printf("    *");  
                            break;  
                        case 1:  
                            printf("    *");  
                            break;  
                        case 2:  
                            printf("    *");  
                            break;  
                        case 3:  
                            printf("    *");  
                            break;  
                        case 4:  
                            printf("    *");  
                            break;  
                        default:  
                            break;  
                    }  
                    break;  
                case '2':  
                    switch (i){  
                        case 0:  
                            printf("*****");  
                            break;  
                        case 1:  
                            printf("    *");  
                            break;  
                        case 2:  
                            printf("*****");  
                            break;  
                        case 3:  
                            printf("*    ");  
                            break;  
                        case 4:  
                            printf("*****");  
                            break;  
                        default:  
                            break;  
                    }  
                    break;  
                case '3':  
                    switch (i){  
                        case 0:  
                            printf("*****");  
                            break;  
                        case 1:  
                            printf("    *");  
                            break;  
                        case 2:  
                            printf("*****");  
                            break;  
                        case 3:  
                            printf("    *");  
                            break;  
                        case 4:  
                            printf("*****");  
                            break;  
                        default:  
                            break;  
                    }  
                    break;  
                case '4':  
                    switch (i){  
                        case 0:  
                            printf("*   *");  
                            break;  
                        case 1:  
                            printf("*   *");  
                            break;  
                        case 2:  
                            printf("*****");  
                            break;  
                        case 3:  
                            printf("    *");  
                            break;  
                        case 4:  
                            printf("    *");  
                            break;  
                        default:  
                            break;  
                    }  
                    break;  
                case '5':  
                    switch (i){  
                        case 0:  
                            printf("*****");  
                            break;  
                        case 1:  
                            printf("*    ");  
                            break;  
                        case 2:  
                            printf("*****");  
                            break;  
                        case 3:  
                            printf("    *");  
                            break;  
                        case 4:  
                            printf("*****");  
                            break;  
                        default:  
                            break;  
                    }  
                    break;  
                case '6':  
                    switch (i){  
                        case 0:  
                            printf("*****");  
                            break;  
                        case 1:  
                            printf("*    ");  
                            break;  
                        case 2:  
                            printf("*****");  
                            break;  
                        case 3:  
                            printf("*   *");  
                            break;  
                        case 4:   
                            printf("*****");  
                            break;  
                        default:  
                            break;  
                    }  
                    break;  
                case '7':  
                    switch (i){  
                        case 0:  
                            printf("*****");  
                            break;  
                        case 1:  
                            printf("    *");  
                            break;  
                        case 2:  
                            printf("    *");  
                            break;  
                        case 3:  
                            printf("    *");  
                            break;  
                        case 4:  
                            printf("    *");  
                            break;  
                        default:  
                            break;;  
                    }  
                    break;  
                case '8':  
                    switch (i){  
                        case 0:  
                            printf("*****");  
                            break;  
                        case 1:  
                            printf("*   *");  
                            break;  
                        case 2:  
                            printf("*****");  
                            break;  
                        case 3:  
                            printf("*   *");  
                            break;  
                        case 4:  
                            printf("*****");  
                            break;  
                        default:  
                            break;  
                    }  
                    break;  
                case '9':  
                    switch (i){  
                        case 0:  
                            printf("*****");  
                            break;  
                        case 1:  
                            printf("*   *");  
                            break;  
                        case 2:  
                            printf("*****");  
                            break;  
                        case 3:  
                            printf("    *");  
                            break;  
                        case 4:  
                            printf("    *");  
                            break;  
                        default:  
                            break;  
                    }  
                    break;  
                default:  
                    break;  
            }  
            if(j < 3)  
                printf(" ");  
        }  
        ptr = str;  
        printf("\n");  
    }  
    return 0;  
}