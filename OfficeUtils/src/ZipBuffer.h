#ifndef _ZIPBUFFER_H_
#define _ZIPBUFFER_H_

#include <string>
#include <vector>

#include "../../Common/kernel_config.h"
#include "../../DesktopEditor/common/Types.h"

class KERNEL_DECL CZipBuffer
{
private:
    BYTE* m_zipFile;
    DWORD m_sizeZip;

    struct CFile
    {
        std::string m_sPath;
        BYTE* m_pData;
        DWORD m_nLength;
        CFile(const std::string& sPath, BYTE* pData, DWORD nLength) : m_sPath(sPath), m_pData(pData), m_nLength(nLength) {}
    };
    std::vector<CFile> m_arrFiles;
public:
    CZipBuffer()
    {
        create();
    }
    CZipBuffer(BYTE* buffer, DWORD size)
    {
        open(buffer, size);
    }
    ~CZipBuffer()
    {
        close();
    }

    void create();
    void open(BYTE* buffer, DWORD size);
    void close();

    std::vector<std::string> getPaths();
    void save(BYTE*& data, DWORD& length);
    void getFile(const std::string& sPath, BYTE*& data, DWORD& length);
    void addFile   (const std::string& sPath, BYTE* data, DWORD length);
    bool removeFile(const std::string& sPath);
};

#endif // _ZIPBUFFER_H_
