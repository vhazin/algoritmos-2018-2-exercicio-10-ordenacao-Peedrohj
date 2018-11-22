#include <stdio.h>
#include <string.h>

void sort(char name[][20], int num)
{
    char aux[20];
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j < num; j++)
        {
            if (strcmp(name[j - 1], name[j]) > 0)
            {
                strcpy(aux, name[j - 1]);
                strcpy(name[j - 1], name[j]);
                strcpy(name[j], aux);
            }
        }
    }
}

int main()
{
    int mais = 0, menos = 0, quant;

    scanf("%d", &quant);

    char name[quant][20];
    char carac;

    for (int i = 0; i < quant; i++)
    {
        scanf(" %c %s", &carac, name[i]);

        if (carac == '+')
        {
            mais++;
        }
        else if (carac == '-')
        {
            menos++;
        }
    }

    sort(name, quant);

    for (int i = 0; i < quant; i++)
    {
        printf("%s\n", name[i]);
    }
    printf("Se comportaram: %d | Não se comportaram: %d\n", mais, menos);
    return 0;
}