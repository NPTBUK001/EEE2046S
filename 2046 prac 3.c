#include <math.h>
#include <string.h>
int takenum()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    return num;
}

int takerad()
{
    int rad;
    printf("Enter a radix for the converter between 2 and 16: ");
    scanf("%d",&rad);
    printf("The radix you have entered is %d\n",rad);
    return rad;
}

void findlog(int num)
{
    float result;
    result = log(num)/log(2);
    printf("The log2 of the number is %.2f\n",result);
}

void dividebyradix(int num, int rad)
{
    int result,rem;
    result = num/rad;
    rem = num - rad*result;
    printf("The integer result of the number divided by %d is %d\n",rad,result);
    printf("The remainder is %d\n",rem);

}

int main() {
#define TITLE "DECIMAL TO RADIX-i converter"
#define NAME "Bukhulu Nopote"
#define DATE "Date: 10-04-2022"
#define SIZE 64
    int num,rad,k=0, i, rem;
    float log;
    char result[SIZE];
    char basechars[] = "0123456789ABCDEF";
    printf("***********\n");
    printf("%s\n", TITLE);
    printf("Written by: %s\n", NAME);
    printf("Date: %s\n", DATE);
    printf("***********\n");
    do {
        k=0;
        num = takenum();
        if (num < 0)
        {
            printf("EXIT");
            break;
        }
        printf("The number you have entered is %d\n", num);
        rad = takerad();
        findlog(num);
        dividebyradix(num,rad);

;

            while (num != 0) {
                rem = num % rad;
                num = num / rad;
                result[k++] = basechars[rem];
            }
            for (i = k - 1; i >= 0; --i) {
                printf("%c", result[i]);
            }
            printf("\n");
            memset(result,0,SIZE);
    }
    while (1==1);

    return 0;
}
