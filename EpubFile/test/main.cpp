
#include "../CEpubFile.h"
#include "../../DesktopEditor/common/File.h"
#include "../../DesktopEditor/common/Directory.h"

#include <time.h>

int main(int argc, char *argv[])
{
    std::vector<std::wstring> arFiles = NSDirectory::GetFiles(NSFile::GetProcessDirectory() + L"/../../../Files");
    std::wstring sTmp = NSFile::GetProcessDirectory() + L"/tmp";
    std::wstring sOutputDirectory = NSFile::GetProcessDirectory() + L"/OutputFiles";
    NSDirectory::CreateDirectory(sOutputDirectory);
    NSDirectory::CreateDirectory(sTmp);

    clock_t tTime1 = clock();
    //Русские символы в консоль не выводятся
    for (std::wstring sFileName : arFiles)
    {
        clock_t tTimeBegin = clock();

        CEpubFile oEpub;

        if (oEpub.IsEpubFile(sFileName) == S_OK)
        {
            std::wstring sFile = NSFile::GetFileName(sFileName);
            sFile = sFile.substr(0, sFile.find_last_of(L'.'));

            std::wcout << L"|----------|" << sFile << L"|----------|" << std::endl;

            oEpub.SetTempDirectory(sTmp);
            oEpub.Convert(sFileName, sOutputDirectory + L"/" + sFile + L".docx");
            NSDirectory::DeleteDirectory(sTmp + L"/res/word/media");
//            oEpub.ShowMap();
        }
        else
            std::wcout << sFileName << L" this is not an epub format!" << std::endl;
        clock_t tTimeEnd = clock();

        std::wcout << (double)(tTimeEnd - tTimeBegin) / CLOCKS_PER_SEC << std::endl;
    }

    clock_t tTime2 = clock();

    std::wcout << (double)(tTime2 - tTime1) / CLOCKS_PER_SEC << std::endl;
    NSDirectory::DeleteDirectory(sTmp);

    return 0;
}
