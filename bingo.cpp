//#include <iostream>
//
//#include <ctime>
//
//using namespace std;
//
//
//
//void Init();   // 1~25���� ���� �غ�
//void Shuffle(int count);   // ���� ����
//void ShowNumbers();   // ȭ�鿡 ���� ���
//int GetInput();   // ���� �Է� �ޱ�
//void SetMarking(int num);   // �Է¹��� ���� ��ŷ
//void CountBingo();   // �ϼ��� �� �� ���
//
//const int Marking = 'x';
//int Numbers[25] = {};
//int BingoCount = 0;
//
//int main()
//{
//	Init();
//	Shuffle(100);
//
//	while (true)
//	{
//		ShowNumbers();
//		SetMarking(GetInput());
//		CountBingo();
//
//		if (BingoCount >= 5) break;
//	}
//
//	ShowNumbers();
//	cout << "!!! ���� Bingo !!! " << endl;
//}
//
//void Init()
//{
//	for (int i = 0; i < 25; i++)
//
//		Numbers[i] = i + 1;
//}
//
//
//
//void Shuffle(int count)
//{
//	srand(time(NULL));
//	for (int i = 0; i < count; i++)
//
//	{
//
//		int temp;
//
//		int nRandom1 = rand() % 25;
//
//		int nRandom2 = rand() % 25;
//
//
//
//		temp = Numbers[nRandom1];
//
//		Numbers[nRandom1] = Numbers[nRandom2];
//
//		Numbers[nRandom2] = temp;
//
//	}
//
//
