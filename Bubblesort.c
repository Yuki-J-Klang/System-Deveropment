#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    int n = 0, i, m, j, k, r;
    int a[n];
    
    srand(1);

    printf("�f�[�^�������߂ĉ������B\n");
    scanf("%d", &n);
    printf("\n");
    
    for(i = 0; i < n; i++){
        a[i] = rand() % 10 + 1;
    }
    
    /*
    printf("�ȉ��̃f�[�^���\�[�g���Ă����܂��B\n");
    for(i = 0; i < n; i++){
        printf("%d, ", a[i]);
    }
    */
    
    printf("\n");
    
    int sort = 0, swap;
    
    printf("�f�[�^�̃\�[�g�ɂ��āA�����Ȃ�0�A�~���Ȃ�1�����ĉ������B\n");
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
    
    printf("���s����\n");
    for(r = 0; r < n; r++){
        printf("%d, ", a[r]);
    }
    
    return 0;
}