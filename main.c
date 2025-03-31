#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ONU_MEMBERS 193

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

// Gross Domestic Product (GDP)
// Market value of goods and services produced 
// in a specific time period by a country
typedef struct gdp {
    __int128_t water;
    __uint64_t flour;
    __uint32_t safran;
    __int16_t cows;
    __int32_t goats;
} gdp_t;

// Country's representation within 
typedef struct country {
    bool isVeto;
    char name[32];
    __uint128_t money;
    struct country *next;
} country_t;

typedef country_t *country_list;

int main(int argc, char **argv) {
    int xx,y,z = 0;

    char *x = malloc(sizeof(char));
    x = "test1234\n";
    printf("%s", x);
    
    // ONU Allocation
    country_t *onu_chart = malloc(sizeof(ONU_MEMBERS));

    // Beginning of country memory allocation 
    FILE *fp=fopen("./onu_members.txt", "r");
    unsigned char buffer[256];
    unsigned char count = 1;

    // Load country(s) into RAM
    size_t ret = fread(buffer, ARRAY_SIZE(buffer), sizeof(*buffer), fp);
    while (ret != '\n' && count != 0) {
        fprintf(stdout, buffer, "%s\n");
        count = count -= 1;
    }
    printf("===== Loading done ======\n");

    // Execute bash shell python scripts in order to acquire country cameras
    return 0;
}