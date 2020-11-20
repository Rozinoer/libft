#include "libft.h"
#include <stdio.h>
int main()
{
    char **str;
    int i = 0;

    str = ft_split("1 2 3 4 5 6 7 8 9 0", ' ');
    printf("%s","---test - 1---:\nInput data\n1 2 3 4 5 6 7 8 9 0, \'space\'\n");
    if(str) {
        while (str[i++])
            printf("%s\n", str[i++]);
    }
    else
        printf("%s","str is NULL");
    printf("\n-------1------\n");
//----------------------------------------------------------
    i = 0;
    str = ft_split(0, 0);
    printf("%s","---test - 2---:\nInput data\n0, 0\n");
    if(str) {
        while (str[i++])
            printf("%s\n", str[i++]);
    }
    else
        printf("%s","str is NULL");
    printf("\n-------2------\n");
//---------------------------------------------------------
    i = 0;
    str = ft_split("\0", '\n');
    printf("%s","---test - 3---:\nInput data\n\'\\0\', \'\\n\'\n");
    if(str) {
        while (str[i++])
            printf("%s\n", str[i++]);
    }
    else
        printf("%s","str is NULL");
    printf("\n-------3------\n");
//---------------------------------------------------------
    i = 0;
    str = ft_split("\n", '\0');
    printf("%s","---test - 4---:\nInput data\n\'\\n\', \'\\0\'\n");
    if(str) {
        while (str[i++])
            printf("%s\n", str[i++]);
    }
    else
        printf("%s","str is NULL");
    printf("\n-------4------\n");
//---------------------------------------------------------
    i = 0;
    str = ft_split("111111111111", '1');
    printf("%s","---test - 5---:\nInput data \"111111111111\", \'1\'\n");
    if(str) {
        while (str[i++])
            printf("%s\n", str[i++]);
    }
    else
        printf("%s","str is NULL");
    printf("\n-------5------\n");
//---------------------------------------------------------
    i = 0;
    str = ft_split("111111111111", 0);
    printf("%s","---test - 6---:\nInput data \"111111111111\", 0\n");
    if(str) {
        while (str[i++])
            printf("%s\n", str[i++]);
    }
    else
        printf("%s","str is NULL");
    printf("\n-------6------\n");
//---------------------------------------------------------
    i = 0;
    str = ft_split(0, '1');
    printf("%s","---test - 7---:\nInput data 0, \'1\'\n");
    if(str) {
        while (str[i++])
            printf("%s\n", str[i++]);
    }
    else
        printf("%s","str is NULL");
    printf("\n-------7------\n");
//---------------------------------------------------------
}

