#include <stdio.h>
#include <time.h>

/// FibonacciSequenceAfter.cppはFibonacciSequenceBefore.cppの改良版
/// 指定した回数分ループして、加算していった値を表示していく
/// Sn = Sn-1 + Sn-2の計算をするために、Sn-1とSn-2を引数とした
/// 再帰的な関数を呼び出して加算をしています
/// 
/// 改良内容
/// Sn-1,Sn-2の値を引数で受け取る事で代入処理を無くし
/// 再帰的処理により、for文の使用を避ける事で数行の処理でまとめてみました

// フィボナッチ処理関数のプロトタイプ宣言
//	引数 ：Sn-2の値,　Sn-1の値,　残り回数
void Fibonacci(float firstNum, float secondNum, int count);

void main(){
	long start;
	int maxCount = 100;				// 表示回数

//	printf("表示数を入力して下さい。");
//	scanf("%d", &maxCount);

	start = clock();

	Fibonacci(0, 1, maxCount);		// フィボナッチ処理の関数呼び出し
	printf("経過時間 : %f秒\n", (double)(clock() - start) / CLOCKS_PER_SEC);
}

// フィボナッチ数列の表示処理
void  Fibonacci(float firstNum,float secondNum,int count){
	// Sn-2の値を表示させる事で、0～Snまでの表示をする
	printf("%.0f ", firstNum);
	// カウントが0以上の時、次のSn-2,Sn-1,残り回数の値を引数に送る
	if (count >= 0)	Fibonacci(secondNum, firstNum + secondNum, --count);
}