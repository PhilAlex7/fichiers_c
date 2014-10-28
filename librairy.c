#include "librairy.h"

int str_len(char *input)
{
    int i;
    for(i = 0; input[i] != '\0'; i++){}
    return i;
}

int str_cmp(char *input, int start, const char *sequense)
{
    int i = start;

    while(i = 0, input[i] != '\0')
    {
        if(*(input + start) == *sequense)
        {
            start++;
            sequense++;
        }
        else return 0;
    }

    return 1;
}

BOOL is_well_formated(char *input)
{
    if(str_cmp(input, str_len(input) - 4, ".css"))
        return TRUE;
    else return FALSE;
}

void addAttr(Attributs *attributs, AttributsRepere *attr_repere, char *attr)
{
    Attributs *newlist = malloc(sizeof(Attributs));
    newlist->attr = (char*)malloc(50 * sizeof(char));

    if(!newlist)
    {
        printf("Attributs struct error\n");
        return;
    }

    newlist->attr = attr;
    attr_repere->fin = newlist;
    newlist->next = NULL;

    attr_repere->taille++;
}

void addStyle(StyleRepere *style_repere, char *select, AttributsRepere *attributs_repere)
{
    Style *newlist = malloc(sizeof(Style));

    if(!newlist)
    {
        printf("Style struct error\n");
        return;
    }

    newlist->selector = select;
    newlist->attr = attributs_repere;
    style_repere->fin = newlist;
    newlist->next = NULL;

    style_repere->taille++;
}
