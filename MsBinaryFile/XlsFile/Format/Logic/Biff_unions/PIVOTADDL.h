﻿/*
 * (c) Copyright Ascensio System SIA 2010-2023
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
#pragma once

#include "../CompositeObject.h"

namespace XLS
{

class PIVOTADDL: public CompositeObject
{
	BASE_OBJECT_DEFINE_CLASS_NAME(PIVOTADDL)
public:
    struct _sxAddl
    {
        _sxAddl(std::vector<_sxAddl> *p, int l) : prev(p), level (l) {}

        std::vector<_sxAddl>*		prev = NULL;
        int							level = 0;
        std::vector<BaseObjectPtr>	elements;
        std::vector<_sxAddl>		levels;
    };	
	
	PIVOTADDL();
	~PIVOTADDL();

	BaseObjectPtr clone();

	virtual const bool loadContent(BinProcessor& proc);

	static const ElementType type = typePIVOTADDL;

	BiffStructurePtr	m_SXAddl_SXCView_SXDId;
	BiffStructurePtr	m_SXAddl_SXCView_SXDVer10Info;
	BiffStructurePtr	m_SXAddl_SXCView_SXDVer12Info;

	BiffStructurePtr	m_SXAddl_SXCView_SXDCompactRwHdr;
	BiffStructurePtr	m_SXAddl_SXCView_SXDCompactColHdr;
	BiffStructurePtr	m_SXAddl_SXCView_SXDTableStyleClient;

	std::vector<BiffStructurePtr>	m_arSXAddl_SXCView_SXDVerUpdInv;
	std::vector<BiffStructurePtr>	m_arSXAddl_SXCView_SXDSXPIIvmb;

	std::vector<_sxAddl> m_arSXADDLHIERARCHY;
	std::vector<_sxAddl> m_arSXADDLFIELD;
	std::vector<_sxAddl> m_arSXADDLCALCMEMBER;

	_sxAddl m_SXADDLCONDFMTS;
	std::vector<_sxAddl> m_arSXADDLCONDFMT;
	_sxAddl m_SXADDLSXFILTERS12;

//others
	std::vector<_sxAddl> content;
	std::vector<_sxAddl> *current;

};

} // namespace XLS

