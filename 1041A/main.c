#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    int v[1000];
    int min;
    int max;
    int nr_min = 0;

    scanf("%d",&n);

    scanf("%d",&v[1]);
    min = v[1];
    max = v[1];
    for( i = 2; i <= n; i++ ) {

        scanf("%d", &v[i]);
        if( v[i] < min ){
            min = v[i];
        }
        if( v[i] > max ){
            max = v[i];
        }
    }

    nr_min = max - min +1 -n;

    printf("%d",nr_min);

    return 0;
}