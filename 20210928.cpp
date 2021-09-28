#include <iostream>
#include <windows.h> //windows 헤더파일 include

using namespace std;

//엔진개발자
char Input(); //사용자의 입력을 받는다. input  
void Process(char Key); //가상공간에 오브젝트를 배치한다. process
void Render(); //그림을 그린다.(가상공간에서 사진 찍는다.) render

//개발자가 구현하는 프로세스
void CustomProcess(char Key);
//개발자가 구현하는 랜더
void CustomRender();

bool bGameState = true;

int Gold = 0;

int main()
{
	
	//Game Engine
	while (bGameState)
	{
		char Key = Input();
		Process(Key);
		Render();
		
	}


	return 0;
}

char Input()
{
	char Key;
	cin >> Key;

	return Key;
}
void Process(char Key)
{
	cout << Key << endl;

	if (Key == 'Q' || Key == 'q')
	{
		bGameState = false;
	}
	CustomProcess(Key);

}
void Render()
{
	//수업이라서 쓰는거지 상용 프로그램에서 사용하면 바로 해킹당함.
	system("cls"); //콘솔창 clear
	cout << "그린다." << endl;
	
	CustomRender();
	

}
void CustomProcess(char Key)
{
	if (Key == 'g' || Key == 'G')
	{
		Gold++;
	}
}
void CustomRender()
{
	cout << "Gold : " << Gold << endl;
}