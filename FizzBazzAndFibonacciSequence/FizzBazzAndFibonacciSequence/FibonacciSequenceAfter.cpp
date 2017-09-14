#include <stdio.h>
#include <time.h>

/// FibonacciSequenceAfter.cpp��FibonacciSequenceBefore.cpp�̉��ǔ�
/// �w�肵���񐔕����[�v���āA���Z���Ă������l��\�����Ă���
/// Sn = Sn-1 + Sn-2�̌v�Z�����邽�߂ɁASn-1��Sn-2�������Ƃ���
/// �ċA�I�Ȋ֐����Ăяo���ĉ��Z�����Ă��܂�
/// 
/// ���Ǔ��e
/// Sn-1,Sn-2�̒l�������Ŏ󂯎�鎖�ő�������𖳂���
/// �ċA�I�����ɂ��Afor���̎g�p������鎖�Ő��s�̏����ł܂Ƃ߂Ă݂܂���

// �t�B�{�i�b�`�����֐��̃v���g�^�C�v�錾
//	���� �FSn-2�̒l,�@Sn-1�̒l,�@�c���
void Fibonacci(float firstNum, float secondNum, int count);

void main(){
	long start;
	int maxCount = 100;				// �\����

//	printf("�\��������͂��ĉ������B");
//	scanf("%d", &maxCount);

	start = clock();

	Fibonacci(0, 1, maxCount);		// �t�B�{�i�b�`�����̊֐��Ăяo��
	printf("�o�ߎ��� : %f�b\n", (double)(clock() - start) / CLOCKS_PER_SEC);
}

// �t�B�{�i�b�`����̕\������
void  Fibonacci(float firstNum,float secondNum,int count){
	// Sn-2�̒l��\�������鎖�ŁA0�`Sn�܂ł̕\��������
	printf("%.0f ", firstNum);
	// �J�E���g��0�ȏ�̎��A����Sn-2,Sn-1,�c��񐔂̒l�������ɑ���
	if (count >= 0)	Fibonacci(secondNum, firstNum + secondNum, --count);
}