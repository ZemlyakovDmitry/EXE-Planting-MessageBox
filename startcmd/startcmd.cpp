#include <iostream>
#include <windows.h>
#include <shlobj.h>

int main()
{
    if (IsUserAnAdmin()) {
        MessageBoxA(NULL, "poxeked, i have admin privileges", "poxek", MB_ICONWARNING);
    }
    else {
        MessageBoxA(NULL, "poxeked, but i don\'t have admin privileges", "poxek", MB_ICONERROR);
    }
}