#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    int n = 0, i, m, j, k, r;
    int a[n];
    
    srand(1);

    printf("データ数を決めて下さい。\n");
    scanf("%d", &n);
    printf("\n");
    
    for(i = 0; i < n; i++){
        a[i] = rand() % 10 + 1;
    }
    
    /*
    printf("以下のデータをソートしていきます。\n");
    for(i = 0; i < n; i++){
        printf("%d, ", a[i]);
    }
    */
    
    printf("\n");
    
    int sort = 0, swap;
    
    printf("データのソートについて、昇順なら0、降順なら1を入れて下さい。\n");
    scanf("%d", &sort);
    printf("\n");
    
    if(sort == 0){
        for (k = 0; k < n; k++){
            for (j = k + 1; j < n; j++){
                if (a[k] > a[j]){
                    swap = a[k];
                    a[k] = a[j];
                    a[j] = swap;
                }
            }
        }
    }
    else {
        for (k = 0; k < n; k++){
            for (j = k + 1; j < n; j++){
                if (a[k] < a[j]){
                    swap = a[k];
                    a[k] = a[j];
                    a[j] = swap;
                }
            }
        }
    }
    
    printf("実行結果\n");
    for(r = 0; r < n; r++){
        printf("%d, ", a[r]);
    }
    
    return 0;
}