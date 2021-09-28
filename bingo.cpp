//#include <iostream>
//
//#include <ctime>
//
//using namespace std;
//
//
//
//void Init();   // 1~25까지 숫자 준비
//void Shuffle(int count);   // 숫자 섞기
//void ShowNumbers();   // 화면에 숫자 출력
//int GetInput();   // 숫자 입력 받기
//void SetMarking(int num);   // 입력받은 숫자 마킹
//void CountBingo();   // 완성된 줄 수 계산
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
//	cout << "!!! 빙고 Bingo !!! " << endl;
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
