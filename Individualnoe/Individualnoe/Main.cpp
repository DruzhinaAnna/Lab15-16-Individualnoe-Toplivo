#include "MyFormIndividualnoe.h"
#include <Windows.h>
using namespace Individualnoe; // �������� �������
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyFormIndividualnoe);
	return 0;
}