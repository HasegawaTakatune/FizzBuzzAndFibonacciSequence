#include <stdio.h>
#include <time.h>

/// FizzBuzzBefore.cpp�͍ŏ��ɍ����FizzBuzz�̏���
/// �w�肵���񐔕����[�v���āAFizzBuzz�̌��ʂ�\������
/// if����3��5�̔{���̎��A3�̔{���̎��A5�̔{���̎���
/// ���ꂼ�ꔻ�肵�ď��������Ă��܂�

void main(){
	long start;
	int maxCount = 1000 * 100;	// �\����

//	printf("�\��������͂��ĉ������B");
//	scanf("%d", &maxCount);

	start = clock();

	for (int count = 1; count <= maxCount;count++){					// �\���񐔕����[�v
		if (count % 3 == 0 && count % 5 == 0)printf("FizzBuzz\n");	// 3��5�̔{���ł��鎞�AFizzBuzz��\��
		else if (count % 3 == 0)printf("Fizz\n");					// 3�̔{���ł��鎞�AFizz��\��
		else if (count % 5 == 0)printf("Buzz\n");					// 5�̔{���ł��鎞�ABuzz��\��
		else printf("%d\n", count);									// �ǂ̔{���ł��Ȃ����A���l��\��
	}
	printf("�o�ߎ��� : %f�b\n", (double)(clock() - start) / CLOCKS_PER_SEC);
}