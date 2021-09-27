//#include <iostream>
//#include <time.h>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//	//배열 초기화
//	int Number[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		Number[i] = i + 1;
//	}
//	//난수초기화
//	srand(time(NULL));
//	//숫자섞기
//	for (int i = 0; i < 10; i++)
//	{
//		re:
//		Number[i] = rand() % 10 +1;
//		for (int j = 0; j < i; j++)
//		{
//			if (Number[i] == Number[j])
//				goto re;
//		}
//	}
//	//출력
//	for (int i = 0; i < 10; i++)
//	{
//		cout << Number[i] << endl;
//
//
//	}
//	return 0;
//}
//
//
////// 순서 
////1.배열을 초기화 합니다. function
////2.배열을 섞습니다.
////3.배열을 출력합니다.