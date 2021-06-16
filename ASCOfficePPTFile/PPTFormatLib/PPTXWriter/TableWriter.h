/*
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
#pragma once

#include "../../../ASCOfficePPTXFile/PPTXFormat/Logic/GraphicFrame.h"
#include "../../../ASCOfficePPTXFile/Editor/Drawing/Elements.h"

namespace PPT_FORMAT
{
class TCell
{
public:
    TCell(CShapeElement *pShape, int row, int col, TCell* pParent = nullptr);

    void FillTc(PPTX::Logic::TableCell &oTc);

    enum eMergeDirection {
        none = 0b00,
        vert = 0b01,
        horz = 0b10,
        hove = (horz | vert)
    };

    enum eBorderPossition
    {
        lnL,
        lnR,
        lnT,
        lnB,
        lnTlToBr,
        lnBlToTr
    };
    void setBorder(eBorderPossition borderPos, CShapeElement *pBorder);

    eMergeDirection parentDirection() const;
    int getHeight()const;

    void setPParent(TCell *pParent);
    void setPShape(CShapeElement *pShape);

    void setRowSpan(int rowSpan);

    void setGridSpan(int gridSpan);

private:
    void FillTxBody(PPTX::Logic::TxBody &oTxBody);
    void FillTcPr(PPTX::Logic::TableCellProperties& oTcPr);

    void FillMergeDirection(PPTX::Logic::TableCell& oTc);
    void setParentDirection();

private:
    CShapeElement* m_pShape;

    std::map<UINT, CShapeElement*> m_mapBorders;

    // Proto table's coord
    int m_row, m_col;

    int m_rowSpan;
    int m_gridSpan;

    // Parent
    TCell* m_pParent;
    eMergeDirection m_parentDirection;
};


typedef std::vector<TCell> ProtoTableRow;
typedef std::vector<ProtoTableRow> MProtoTable;


class ProtoTable
{
public:
    ProtoTable(std::vector<CShapeElement *> &arrCells,
               std::vector<CShapeElement*>& arrSpliters);

    static std::vector<int> getWidth(std::vector<CShapeElement *> &arrCells, bool isWidth = true);
    static std::vector<int> getHeight(std::vector<CShapeElement *> &arrCells, bool isHeight = true);
    MProtoTable getTable() const;

private:
    void initProtoTable();
    bool fillProtoTable(std::vector<CShapeElement *> &arrCells, std::vector<CShapeElement *> &arrSpliters);
    bool fillCells(std::vector<CShapeElement *> &arrCells);
    void fillBorders(std::vector<CShapeElement *> &arrSpliters);
    bool findCellPos(const int top, const int left, UINT& posRow, UINT& posCol);
    std::list<TCell *> getParentCellFromTable(const UINT posFRow, const UINT posFCol, const UINT posLRow, const UINT posLCol);
    void setBorders(const UINT posFRow, const UINT posFCol, const UINT posLRow, const UINT posLCol, CShapeElement *pBorder);

    bool isDefaultBoard(const CShapeElement *pBorder);

    std::vector<std::vector<CShapeElement *> >
        getRows(std::vector<CShapeElement *> &arrCells);

private:
    std::vector<int> m_arrLeft;
    std::vector<int> m_arrTop;
    MProtoTable m_table;
};

class TableWriter
{
public:
    TableWriter(CTableElement *pTableElement);

    void Convert(PPTX::Logic::GraphicFrame& oGraphicFrame);

private:
    void FillNvGraphicFramePr(PPTX::Logic::NvGraphicFramePr& oNvGFPr);
    void FillXfrm(PPTX::Logic::Xfrm& oXFRM);
    void FillTable(PPTX::Logic::Table &oTable);

    void FillTblPr(PPTX::Logic::TableProperties& oTblPr);
    void FillTblGrid(std::vector<PPTX::Logic::TableCol>& tblGrid,
                     std::vector<CShapeElement *> &arrCells);
    void prepareShapes(std::vector<CShapeElement*> &arrCells,
                       std::vector<CShapeElement*>& arrSpliters);

    void FillRow(PPTX::Logic::TableRow& oRow, ProtoTableRow &arrCells);

private:
    CTableElement *m_pTableElement;
    nullable<ProtoTable> m_nPTable;
};
}
