#include <stdio.h>
#include <time.h>

/// FizzBuzzAfter.cpp��FizzBuzzBefore.cpp�̉��ǔ�
/// �w�肵���񐔕����[�v���āAFizzBuzz�̌��ʂ�\������
/// ���ʕ\���p�̔z���p�ӂ��āA3���藝�Ŕz��ԍ����w�肵
/// ���ʕ\��������
/// 
/// ���Ǔ��e
/// 3���藝���g�����ŁA1��̔��育�ƂŌ��ʂ�\�����Ă���

void main(){
	long start;
	int maxCount = 1000 * 100;	// �\����
	// ���ʕ\���̃e�L�X�g�z��
	// 0:���l  1:Fizz  2:Buzz  3:FizzBuzz
	char *ans[] = { "%d\n","Fizz\n", "Buzz\n", "FizzBuzz\n" };

//	printf("�\��������͂��ĉ������B");
//	scanf("%d", &maxCount);

	start = clock();

	// �\���񐔕����[�v
	for (int count = 1; count <= maxCount;count++){
		// �v�Z���ʂɂ���Ĕz����̃e�L�X�g�����o��
		// 0:���l  1:Fizz  2:Buzz  3:FizzBuzz
		printf(ans[((count % 3 == 0) ? 1 : 0) + ((count % 5 == 0) ? 2 : 0)], count);
	}
	printf("�o�ߎ��� : %f�b\n", (double)(clock() - start) / CLOCKS_PER_SEC);
}