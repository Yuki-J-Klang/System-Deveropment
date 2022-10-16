# 使用言語：c言語
1. データ数を整数型変数nに入力

2. データ数分乱数を格納
```c
    for(i = 0; i < n; i++){
        a[i] = rand() % 10 + 1;
    }
```

3. 昇順か降順かを選択
```c
    printf("データのソートについて、昇順なら0、降順なら1を入れて下さい。\n");
    scanf("%d", &sort);
```
4. ソートの実行
```c
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
```
* if文(sort=0)では昇順、else文では降順(sort=1)
5. 実行結果の出力
