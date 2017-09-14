#include <stdio.h>
#include <time.h>

/// FibonacciSequenceBefore.cpp�͍ŏ��ɍ�����t�B�{�i�b�`����̕\�������ł�
/// �w�肵���񐔕����[�v���āA���Z���Ă������l��\�����Ă���
/// Sn = Sn-1 + Sn-2�̌v�Z�����邽�߂ɁASn,Sn-1,Sn-2�̕ϐ���
/// ���ꂼ��ŗp�ӂ��āA�v�Z�����Ă��܂�

void main(){
	long start;
	float back = 0;			// Sn-2�̒l���i�[����
	float front = 1;		// Sn-1�̒l���i�[����
	float tmp;				// �l���ꎞ�I�ɑޔ�������
	int	maxCount = 100;		// �\����

//	printf("�\��������͂��ĉ������B");
//	scanf("%d", &maxCount);

	start = clock();

	printf("%.0f ", back);							// �ŏ���0��\������
	for (int count = 0; count <= maxCount;count++){	// �\���񐔕����[�v
		printf("%.0f ", front);						// Sn��\��
		tmp = front;								// Sn-2�̒l��ޔ�
		front = back + front;						// Sn-1�̒l����
		back = tmp;									// Sn-2�̒l����
	}
	printf("�o�ߎ��� : %f�b\n", (double)(clock() - start) / CLOCKS_PER_SEC);
}