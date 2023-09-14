#include <stdio.h>

#include <math.h>

int main(){

    int x1, y1, x2, y2, dis;

    printf("veuillez saisir les valeurs x1 y1 x2 y2 : ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("la distance est : %d\n", dis);

    return 0;
}
