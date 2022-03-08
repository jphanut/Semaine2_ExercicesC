#include <stdio.h>
#include <stdlib.h>

int strcasecmp(const char *s1, const char *s2);
void test_strcasecmp(void);

int main()
{
    test_strcasecmp();
    return 0;
}

void test_strcasecmp(void) {
    printf("Exercice strcasecmp\n");
    printf("-------------------\n");
    char str1[] = "Hello World";
    char str2[] = "Hello World";
    int i = strcasecmp(str1, str2);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str1, str2, i);
    char str3[] = "Hello World";
    char str4[] = "Hello World Test";
    int j = strcasecmp(str3, str4);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str3, str4, j);
    char str5[] = "Hello World";
    char str6[] = "Hello";
    int k = strcasecmp(str5, str6);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str5, str6, k);
    char str7[] ="";
    char str8[] ="";
    int l = strcasecmp(str7, str8);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str7, str8, l);
    char str9[] ="hello WORLD";
    char str10[] ="hello world";
    int m = strcasecmp(str9, str10);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str9, str10, m);
    char str11[] ="hello world";
    char str12[] ="hello WORLD";
    int n = strcasecmp(str11, str12);
    printf("Comparaison de s1=\"%s\" et s2=\"%s\" valeur de retour = %d\n",str11, str12, n);
}

int strcasecmp(const char *s1, const char *s2)
{
    char *source=(char*)s1;
    char *comp=(char*)s2;
    if ( !*source &&  *comp) return -1;
    if ( !*source &&  !*comp) return 0;
    while (*source) {
        if (!*comp) return 1;
        if (*source < *comp) return -1;
        if (*source > *comp) return 1;
        source++;
        comp++;
    }
    if (*comp) return -1;
    return 0;
}
