#define no_init_all
#include<Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	MessageBox(NULL, "Hello World!", "This is a title", MB_OKCANCEL | MB_ICONEXCLAMATION);
	return 0;
}