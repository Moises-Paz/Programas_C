#include <stdio.h>
int main(){
    printf("char: %ld\n", sizeof(char));
    printf("unsigned char: %ld\n",sizeof(unsigned char));
    printf("short int: %ld\n",sizeof(short int));
    printf("unsigned short int: %ld\n",sizeof(unsigned short int));
    printf("int: %ld\n",sizeof(int));
    printf("unsigned long int: %ld\n",sizeof(unsigned long int));
    printf("float: %ld\n",sizeof(float));
    printf("double: %ld",sizeof(double));
    return 0;
}
