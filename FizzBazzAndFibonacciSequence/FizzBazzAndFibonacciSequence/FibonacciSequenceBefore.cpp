#include <stdio.h>
#include <time.h>

/// FibonacciSequenceBefore.cppは最初に作ったフィボナッチ数列の表示処理です
/// 指定した回数分ループして、加算していった値を表示していく
/// Sn = Sn-1 + Sn-2の計算をするために、Sn,Sn-1,Sn-2の変数を
/// それぞれで用意して、計算をしています

void main(){
	long start;
	float back = 0;			// Sn-2の値を格納する
	float front = 1;		// Sn-1の値を格納する
	float tmp;				// 値を一時的に退避させる
	int	maxCount = 100;		// 表示回数

//	printf("表示数を入力して下さい。");
//	scanf("%d", &maxCount);

	start = clock();

	printf("%.0f ", back);							// 最初の0を表示する
	for (int count = 0; count <= maxCount;count++){	// 表示回数分ループ
		printf("%.0f ", front);						// Snを表示
		tmp = front;								// Sn-2の値を退避
		front = back + front;						// Sn-1の値を代入
		back = tmp;									// Sn-2の値を代入
	}
	printf("経過時間 : %f秒\n", (double)(clock() - start) / CLOCKS_PER_SEC);
}