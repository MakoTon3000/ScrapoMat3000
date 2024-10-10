
#include <windows.h>
#pragma comment(lib, "Urlmon.lib")
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    const wchar_t* srcURL = L"https://edition.cnn.com/2024/10/10/business/elon-musk-tesla-robotaxi-event/index.html";
    const wchar_t* filename = L"News.txt";

    if (S_OK == URLDownloadToFile(0, srcURL, filename, 0, 0))
    {
        std::cout<<"Saved to 'filename'" << std::endl;
    }
    else
    {
        printf("Failed!!!!!!");
    }

    std::string line = "10";
    ofstream myfile("example.bin", ios::out | ios::app | ios::binary);
    myfile.open("News.txt");
   

    myfile.close();
    return 0;
}

