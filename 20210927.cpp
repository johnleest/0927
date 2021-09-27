//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*int Number = 0;
//	cout << "숫자를 입력하세요." << endl;
//	cin >> Number;
//
//
//	if (Number % 2 == 1)
//	{
//		cout << "홀수입니다." << endl;
//	}
//
//	else
//	{
//		cout << "짝수입니다." << endl;
//	}*/
//
//
//	/*int Number = 0;
//	cout << "성적을 입력하세요." << endl;
//	cin >> Number;
//
//	cout << "당신의 성적은 : ";
//
//	if (90 <= Number && Number <= 100)
//	{
//		cout << " A " << endl;
//	}
//
//	else if (80 <= Number && Number <= 89)
//	{
//		cout << "B" << endl;
//	}
//
//	else if (70 <= Number && Number <= 79)
//	{
//		cout << "C" << endl;
//	}
//
//	else if (60 <= Number && Number <= 69)
//	{
//		cout << "D" << endl;
//	}
//
//	else if (50 <= Number && Number <= 59)
//	{
//		cout << "E" << endl;
//	}
//
//	else if (0 <= Number && Number <= 49)
//	{
//		cout << "F" << endl;
//	}
//	else 
//	{
//		cout << "정확한 입력값이 아닙니다." << endl;
//	}*/
//	
//
//	//성적처리
//	int score = 0;
//	char grade = 'F';
//
//	cout << "성적을 입력하세요." << endl;
//	cin >> score;
//	
//	
//	switch (score / 10)
//	{
//
//		case 10:
//		case 9:
//		{
//			grade = 'A';
//			break;
//		}
//
//		case 8:
//		{
//			grade = 'B';
//			break;
//		}
//		case 7:
//		{
//			grade = 'C';
//			break;
//		}
//		case 6:
//		{
//			grade = 'D';
//			break;
//		}
//		default:
//		{
//			grade = 'F';
//		}
//	}
//
//	return 0;
//}