//#include <stdio.h>
///*
//	�ڷ����� ����
//*/
//
//int main() {
//
//	/*
//		'A' - 65(�ƽ�Ű�ڵ�)
//		char : -128 ~ 127 (1Byte = 8bit)
//		unsigned char : 0 ~ 255 (��ȣ ���� �ڷ���)
//	*/
//
//	printf("===== char �ڷ��� =====\n");
//
//	char ch = 'A';
//	printf("%d %c\n", ch,ch); //�ƽ�Ű �ڵ尪
//
//	char value1 = -128;
//	printf("%d\n", value1);
//
//	char value2 = 128;	//overflow
//	printf("%d\n", value2);
//
//	unsigned value3 = 128;	//short value3 = 128;   //short - 16��Ʈ (-32768 ~ 32767)
//	printf("%d\n", value3);
//
//	/*
//		int�� 4Byte = 32bit
//		-21�� ~ 21��
//		long (������ - 4B) , (��Os - 8B)
//		long long - 8B
//	*/
//
//	printf("===== int �ڷ��� =====\n");
//
//	int inum = 2100000000;
//	printf("%d\n", inum);
//
//	int inum2 = 2200000000;	//���� �ʰ��� overflow
//	printf("%d\n", inum2);
//
//	long long llnum = 2200000000L;	//long���� ���� �ڿ� 'L' or 'l'�� ����
//	printf("%lld\n", llnum);
//
//	/*
//		�Ǽ��� - �Ҽ����� �ִ� ��
//		float - 4Byte, �Ҽ� 6�ڸ� ǥ��
//		double - 8Byte, �Ҽ� 15�ڸ�
//	*/
//
//	printf("===== float�� double �ڷ��� =====\n");
//
//	float fNum = 0.123456F;	//�ڸ��� �ʰ��� ����
//	printf("%f\n", fNum);
//
//	double dNum = 0.123456789012345;
//	printf("%.15f\n", dNum);
//
//	return 0;
//}