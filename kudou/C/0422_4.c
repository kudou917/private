#include <stdio.h>

void main() {

#if 1
    char numtbl[16];//int,charを切り替えて実行結果のアドレスを見る。
    char *ptr_numtbl_0;//アドレスを入れる箱
#else
    int numtbl[16];//値を入れる箱
    iny *ptr_numtbl_0;//アドレスを入れる箱

#endif
        //各テーブルの要素にそれぞれ3の倍数を入れていく。
    for(int wi = 0 ; wi< sizeof(numtbl); wi++){
        numtbl[wi]= wi * 3;
    }

  for(int wi = 0 ; wi< sizeof(numtbl); wi++){
    printf("%02d decimal = %02d hexadecimal = 0x%02x \n",wi,numtbl[wi],numtbl[wi]);
    }
    for(int wi = 0 ; wi< sizeof(numtbl); wi++){
    printf("numtble[%d]adress = %p \n",wi,&numtbl[wi]);
    }
    //ポインター変数にアドレスを代入
    ptr_numtbl_0 = &numtbl[0];

    //ポインターを使ってアドレスと値を表示
     for(int wi = 0 ; wi < sizeof(numtbl) / sizeof(numtbl[0]); wi++){
    printf("ptr_numtbl_0 = &numtbl[%p] value=[%d]\n", ptr_numtbl_0, *ptr_numtbl_0);
        ptr_numtbl_0++;

    }
}  