#include <iostream>
#include <windows.h>
#include <string>
#include <iostream>
#include <fstream>

int main()
{
    int launcher_num;
    std::string line;

    TCHAR szExeFileName[MAX_PATH];
    GetModuleFileName(NULL, szExeFileName, MAX_PATH);
    std::string path = szExeFileName;
    std::string exe = path.substr(path.find_last_of("\\") + 1, path.size()); //get programm name

    if (exe == "tanksblitz with nvidia.exe")
    {
        std::cout << "Where do you play?\n";
        std::cout << "1. Steam\n";
        std::cout << "2. Lesta\n";
        std::cout << "Enter the number\n";
        std::cin >> launcher_num;

        if (launcher_num == 1)
            rename("wotblitz.exe", "witcher3.exe");
        else
            rename("tanksblitz.exe", "witcher3.exe");

        if (launcher_num == 1)
            rename(exe.c_str(), "wotblitz.exe");
        else
            rename(exe.c_str(), "tanksblitz.exe");
    }


    std::cout << "Start blitz with nvidia filter\n";
    WinExec("witcher3.exe", 1);
    Sleep(5000);
    return 0;
}
