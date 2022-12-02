#include <stdio.h>

main()
{
    int n, m;

    printf("number of lines: ");
    scanf("%d", &n);

    printf("number of columns: ");
    scanf("%d", &m);

    int **mas = new int*[n];


    for (int j = 0; j < n; j++)
    {
        mas[j] = new int[m];
        for (int i = 0; i < m; i++)
        {
            scanf("%i", &mas[j][i]);
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%3i", mas[j][i]);
        }
        printf("\n\n");
    }


    for (int j = 0; j < n; j++)
    {
        delete[] mas[j];

    }

    delete[] mas;
}
