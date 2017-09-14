#include <stdio.h>
#include <time.h>

/// FizzBuzzAfter.cppはFizzBuzzBefore.cppの改良版
/// 指定した回数分ループして、FizzBuzzの結果を表示する
/// 結果表示用の配列を用意して、3項定理で配列番号を指定し
/// 結果表示をする
/// 
/// 改良内容
/// 3項定理を使う事で、1回の判定ごとで結果を表示している

void main(){
	long start;
	int maxCount = 1000 * 100;	// 表示回数
	// 結果表示のテキスト配列
	// 0:数値  1:Fizz  2:Buzz  3:FizzBuzz
	char *ans[] = { "%d\n","Fizz\n", "Buzz\n", "FizzBuzz\n" };

//	printf("表示数を入力して下さい。");
//	scanf("%d", &maxCount);

	start = clock();

	// 表示回数分ループ
	for (int count = 1; count <= maxCount;count++){
		// 計算結果によって配列内のテキストを取り出す
		// 0:数値  1:Fizz  2:Buzz  3:FizzBuzz
		printf(ans[((count % 3 == 0) ? 1 : 0) + ((count % 5 == 0) ? 2 : 0)], count);
	}
	printf("経過時間 : %f秒\n", (double)(clock() - start) / CLOCKS_PER_SEC);
}