﻿/*
 * (c) Copyright Ascensio System SIA 2010-2019
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at 20A-12 Ernesta Birznieka-Upisha
 * street, Riga, Latvia, EU, LV-1050.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */
#ifndef _PDF_READER_H
#define _PDF_READER_H

#ifndef PDFREADER_USE_DYNAMIC_LIBRARY
#define PDFREADER_DECL_EXPORT
#else
#include "../DesktopEditor/common/base_export.h"
#define PDFREADER_DECL_EXPORT Q_DECL_EXPORT
#endif
#include "../DesktopEditor/graphics/pro/officedrawingfile.h"
#include "../DesktopEditor/graphics/pro/Fonts.h"
#include "../PdfWriter/PdfRenderer.h"

namespace PdfReader
{
    typedef enum
    {
        errorNone          = 0, // Нет ошибок
        errorOpenFile      = 1, // Ошибка при открытии PDF файла
        errorBadCatalog    = 2, // couldn't read the page catalog
        errorDamaged       = 3, // PDF файл был поврежден и его невозможно восстановить
        errorEncrypted     = 4, // Файл зашифрован, авторизация не пройдена
        errorHighlightFile = 5, // nonexistent or invalid highlight file
        errorBadPrinter    = 6, // плохой принтер
        errorPrinting      = 7, // ошибка во время печати
        errorPermission    = 8, // Ошибка связанная с ограничениями наложенными на файл
        errorBadPageNum    = 9, // Неверное количество страниц
        errorFileIO        = 10, // Ошибка при чтении/записи
        errorMemory        = 11  // Memory exceed
    } EError;

    class CPdfReader_Private;
    class PDFREADER_DECL_EXPORT CPdfReader : public IOfficeDrawingFile
    {
    public:

        CPdfReader(NSFonts::IApplicationFonts* fonts);
        virtual ~CPdfReader();

        virtual bool LoadFromFile(const std::wstring& file, const std::wstring& options = L"",
                                        const std::wstring& owner_password = L"", const std::wstring& user_password = L"");
        virtual bool LoadFromMemory(BYTE* data, DWORD length, const std::wstring& options = L"",
                                        const std::wstring& owner_password = L"", const std::wstring& user_password = L"");

        virtual void Close();

        virtual NSFonts::IApplicationFonts* GetFonts();

        virtual OfficeDrawingFileType GetType();

        virtual std::wstring GetTempDirectory();
        virtual void SetTempDirectory(const std::wstring& directory);

        virtual int GetPagesCount();
        virtual void GetPageInfo(int nPageIndex, double* pdWidth, double* pdHeight, double* pdDpiX, double* pdDpiY);
        virtual void DrawPageOnRenderer(IRenderer* pRenderer, int nPageIndex, bool* pBreak);

        int          GetError();
        double       GetVersion();
        int          GetPermissions();
        std::wstring GetPageLabel(int nPageIndex);

        bool         ExtractAllImages(const wchar_t* wsDstPath, const wchar_t* wsPrefix = 0);
        int          GetImagesCount();

        void         SetCMapFolder(const wchar_t* wsCMapFolder);
        NSFonts::IFontManager* GetFontManager();

        std::wstring ToXml(const std::wstring& wsXmlPath);
        bool EditPdf(IRenderer* pPdfWriter);
        bool EditPage(int nPageIndex);
        bool EditClose(const std::wstring& wsPath);

    #ifdef BUILDING_WASM_MODULE
        virtual BYTE* GetStructure();
        virtual BYTE* GetLinks(int nPageIndex);
    #endif

    private:
        CPdfReader_Private* m_pInternal;
        CPdfRenderer*       m_pPdfWriter;
        int              m_eError;
    };
}

#endif // _PDF_READER_H
