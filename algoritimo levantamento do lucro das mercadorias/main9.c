#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l10=0, l20=0, lmais20=0;
    float compra=0.0, totalcompra=0.0, venda=0.0, totalvenda=0.0, lucro=0.0, totallucro=0.0;
    scanf("%f%f", &compra, &venda);
    while(compra!=0.0)
    {
        lucro = venda - compra;
        if(lucro < compra*0.10)
        {
            l10++;
        }
        else if(lucro >= compra*0.10 && lucro <= compra*0.20)
        {
            l20++;
        }
        else
        {
            lmais20++;
        }
        totalcompra+=compra;
        totalvenda+=venda;
        totallucro+=lucro;
        scanf("%f%f", &compra, &venda);
    }
    printf("%i\n%i\n%i\n%.2f\n%.2f\n%.2f\n", l10,l20,lmais20, totalcompra, totalvenda, totallucro);
    return 0;
}
