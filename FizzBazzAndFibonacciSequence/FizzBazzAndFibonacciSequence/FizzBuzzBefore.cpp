#include <stdio.h>
#include <time.h>

/// FizzBuzzBefore.cppは最初に作ったFizzBuzzの処理
/// 指定した回数分ループして、FizzBuzzの結果を表示する
/// if文で3と5の倍数の時、3の倍数の時、5の倍数の時を
/// それぞれ判定して処理をしています

void main(){
	long start;
	int maxCount = 1000 * 100;	// 表示回数

//	printf("表示数を入力して下さい。");
//	scanf("%d", &maxCount);

	start = clock();

	for (int count = 1; count <= maxCount;count++){					// 表示回数分ループ
		if (count % 3 == 0 && count % 5 == 0)printf("FizzBuzz\n");	// 3と5の倍数である時、FizzBuzzを表示
		else if (count % 3 == 0)printf("Fizz\n");					// 3の倍数である時、Fizzを表示
		else if (count % 5 == 0)printf("Buzz\n");					// 5の倍数である時、Buzzを表示
		else printf("%d\n", count);									// どの倍数でもない時、数値を表示
	}
	printf("経過時間 : %f秒\n", (double)(clock() - start) / CLOCKS_PER_SEC);
}