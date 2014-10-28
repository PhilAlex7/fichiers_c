#include <stdio.h>
#include <stdlib.h>

#include "librairy.h"

int main(int argc, char **argv)
{
    if(argc < 4)
    {
        printf("Not enough arguments\n");
        return 1;
    }

    if(!is_well_formated(argv[2]))
    {
        printf("The first input file is not well-formated\n");
        return 2;
    }

    if(!is_well_formated(argv[3]))
    {
        printf("The second input file is not well-formated\n");
        return 2;
    }

    Attributs *attributs = malloc(sizeof(*attributs));
    AttributsRepere *attributs_repere = malloc(sizeof(*attributs_repere));
    addAttr(attributs, attributs_repere, "div");

    while(attributs_repere != NULL)
    {
        printf("%p -> %s", attributs, attributs->attr);
        attributs = attributs->next;
    }

    return 0;
}
