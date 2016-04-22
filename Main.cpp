#include <iostream>
#include "SceneManager.h"
#include "TitleScene.h"
using namespace std;



int main()
{
	SceneManager* sm = new SceneManager();

	sm->Initialize();

	sm->ChangeScene(TitleScene::GetInstance());

	while (true)
	{
		sm->Update();

	}



	//cout << "A" << endl;

	return 0;
}