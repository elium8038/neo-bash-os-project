#include <stdio.h>
#include <stdlib.h>

#define ONU_MEMBERS 193

typedef struct gdp {
    char country[16];
    __int64_t population;
    __uint128_t money;
} gdp_t;

int main(int argc, char **argv) {
    int xx,y,z = 0;

    char *x = malloc(sizeof(char));
    x = "test1234\n";
    printf("%s", x);

    gdp_t *onu = malloc(sizeof(ONU_MEMBERS));

    return 0;
}