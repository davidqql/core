// PDFWriter.h : Declaration of the CPDFWriter

#pragma once

#include "resource.h"       // main symbols

class CPdfWriterLib;

#include "../../ASCImageStudio3/ASCGraphics/Interfaces/ASCRenderer.h"

#include "../../desktopeditor/graphics/irenderer.h"

// IPDFWriter
[
	object,
	uuid("BDA96253-29C4-4C62-98DC-D9718695883C"),
	dual,	helpstring("IPDFWriter Interface"),
	pointer_default(unique)
]
__interface IPDFWriter : IDispatch
{
	//----- Основные функции для работы с документом ---------------------------------------------------

	[id(11)]HRESULT CreatePDF();
	[id(12)]HRESULT DeletePDF();
	[id(13)]HRESULT SaveToFile([in] BSTR bsPath);

	[id(21)]HRESULT SetPDFPageMode([in]long nMode);
	[id(22)]HRESULT GetPDFPageMode([out, retval]long *pnMode);
	[id(23)]HRESULT SetPDFPageLayout([in]long nLayout);
	[id(24)]HRESULT GetPDFPageLayout([out, retval]long *pnLayout);
	[id(25)]HRESULT SetPDFViewerPreference([in]long nValue );
	[id(26)]HRESULT GetPDFViewerPreference([out, retval]long *pnValue);

	[id(30)]HRESULT SetPDFCompressionMode([in]long nMode);
	[id(31)]HRESULT SetPDFOpenAction([in]long nAction);

	[id(50)]HRESULT GetLastErrorCode([out, retval]long *pnErrorCode);
	[id(51)]HRESULT GetLastErrorString([out, retval]BSTR *pbsErrorString);


	//----- Функции для работы со страницами -----------------------------------------------------------

	[id(101)]HRESULT AddNewPage();
	[id(102)]HRESULT GetPagesCount([out, retval] long *pnCount);
	[id(103)]HRESULT SetCurrentPage([in] long nIndex);
	[id(104)]HRESULT GetCurrentPageIndex([out, retval] long *pnIndex);

	[id(105)]HRESULT SetPageWidth([in]float fValue);
	[id(106)]HRESULT SetPageHeight([in]float fValue);
	[id(107)]HRESULT GetWidth([out, retval]float *pfValue);
	[id(108)]HRESULT GetHeight([out, retval]float *pfValue);
	[id(109)]HRESULT SetSize([in]long nSize, [in]long nDirection);
	[id(110)]HRESULT SetRotate([in]long nAngle);

	[id(120)]HRESULT AddLabel([in]long nPageNum, [in]long nNumStyle, [in]long nFirstPage, [in]BSTR bsPrefix );



	//----- Функции рисования и вывода текста ----------------------------------------------------------

	[id(201)]HRESULT SetLineWidth([in] float fLineWidth );
	[id(202)]HRESULT GetLineWidth([out, retval] float *pfLineWidth);

	[id(203)]HRESULT SetLineCap([in] long nLineCap);
	[id(204)]HRESULT GetLineCap([out, retval] long *pnLineCap);

	[id(205)]HRESULT SetLineJoin([in]long nLineJoin);
	[id(206)]HRESULT GetLineJoin([out, retval]long *pnLineJoin);

	[id(207)]HRESULT SetMiterLimit([in]float fMiterLimit);
	[id(208)]HRESULT GetMiterLimit([out, retval]float *pfMiterLimit);

	[id(209)]HRESULT SetDash([in,  satype("float")] SAFEARRAY** ppnDashPtn, [in] long  nNumParam,  [in] float   fPhase);
	[id(210)]HRESULT GetDash([out, satype("float")] SAFEARRAY** ppnDashPtn, [out]long *pnNumParam, [out]float *pfPhase);

	[id(211)]HRESULT SetFlat([in]         float   fFlatness);
	[id(212)]HRESULT GetFlat([out, retval]float *pfFlatness);

	[id(213)]HRESULT NewExtGraphicsState();
	[id(214)]HRESULT ExtGraphicsStateSetAlphaStroke([in]float fValue);
	[id(215)]HRESULT ExtGraphicsStateSetAlphaFill([in]float fValue);
	[id(216)]HRESULT ExtGraphicsStateSetBlendMode([in]long nBlendMode);
	[id(217)]HRESULT ExtGraphicsStateSetStrokeAdjustment([in]int nFlag);
	[id(218)]HRESULT SetExtGraphicsState();
	[id(219)]HRESULT GSave();
	[id(220)]HRESULT GRestore();

	[id(221)]HRESULT GetGStateDepth([out, retval]long *pnDepth);
	[id(222)]HRESULT GetGMode([out, retval]long *pnGMode);

	[id(223)]HRESULT Concat([in]float fA, [in]float fB, [in]float fC, [in]float fD, [in]float fX, [in]float fY);

	[id(224)]HRESULT MoveTo([in]float fX, [in]float fY);
	[id(225)]HRESULT GetCurrentPosition([out] float *pfX, [out] float *pfY);

	[id(226)]HRESULT LineTo([in]float fX, [in]float fY);
	[id(227)]HRESULT CurveTo ([in]float fX1, [in]float fY1, [in]float fX2, [in]float fY2, [in]float fX3, [in]float fY3);
	[id(228)]HRESULT CurveTo2([in]float fX2, [in]float fY2, [in]float fX3, [in]float fY3);
	[id(229)]HRESULT CurveTo3([in]float fX1, [in]float fY1, [in]float fX3, [in]float fY3);
	[id(230)]HRESULT ClosePath();
	[id(231)]HRESULT AppendRectangle([in]float fX, [in]float fY, [in]float fWidth, [in]float fHeight);

	[id(232)]HRESULT Stroke();
	[id(233)]HRESULT GetStrokingColorSpace([out, retval]long *pnColorSpace);

	[id(234)]HRESULT ClosePathStroke();

	[id(235)]HRESULT Fill();
	[id(236)]HRESULT GetFillingColorSpace([out, retval]long *pnColorSpace);
	[id(237)]HRESULT EoFill();
	[id(238)]HRESULT FillStroke();
	[id(239)]HRESULT EoFillStroke();
	[id(240)]HRESULT ClosePathFillStroke();
	[id(241)]HRESULT ClosePathEoFillStroke();
	[id(242)]HRESULT EndPath();
	[id(243)]HRESULT Clip();
	[id(244)]HRESULT EoClip();
	[id(245)]HRESULT BeginText();
	[id(246)]HRESULT EndText();

	[id(247)]HRESULT SetCharSpace([in]         float   fValue);
	[id(248)]HRESULT GetCharSpace([out, retval]float *pfValue);

	[id(249)]HRESULT SetWordSpace([in]float fValue);
	[id(250)]HRESULT GetWordSpace([out, retval]float *pfValue);

	[id(251)]HRESULT SetHorizontalScalling([in]float fValue);
	[id(252)]HRESULT GetHorizontalScalling([out, retval]float *pfValue);

	[id(253)]HRESULT SetTextLeading([in]float fValue);
	[id(254)]HRESULT GetTextLeading([out, retval]float *pfValue);

	[id(255)]HRESULT SetFontAndSizeToGState([in]float fSize);
	[id(256)]HRESULT GetCurrentFontFromGState([out]BSTR *pbsFontName, [out]BSTR *pbsEncodingName);
	[id(257)]HRESULT GetCurrentFontSizeFromGState([out, retval]float *pfSize);

	[id(258)]HRESULT SetTextRenderingMode([in]long nMode);
	[id(259)]HRESULT GetTextRenderingMode([out, retval]long *pnMode);

	[id(260)]HRESULT SetTextRise([in]float fValue);
	[id(261)]HRESULT GetTextRise([out, retval]float *pfValue);

	[id(262)]HRESULT MoveTextPos([in]float fX, [in]float fY);
	[id(263)]HRESULT MoveTextPos2([in]float fX, [in]float fY);
	[id(264)]HRESULT GetCurrentTextPosition([out] float *pfX, [out] float *pfY);

	[id(265)]HRESULT SetTextMatrix([in] float   fA, [in] float   fB, [in] float   fC, [in] float   fD, [in]  float   fX, [in] float   fY);
	[id(266)]HRESULT GetTextMatrix([out]float* pfA, [out]float* pfB, [out]float* pfC, [out]float* pfD, [out] float* pfX, [out]float* pfY);

	[id(267)]HRESULT MoveToNextLine();

	[id(268)]HRESULT ShowText([in] BSTR bsText);
	[id(269)]HRESULT ShowTextNextLine([in] BSTR bsText);
	[id(270)]HRESULT ShowTextNextLineEx([in]float fWordSpace, [in]float fCharSpace, [in]BSTR bsText);

	[id(271)]HRESULT SetGrayStroke([in]         float   fGray);
	[id(272)]HRESULT GetGrayStroke([out, retval]float *pfGray);

	[id(273)]HRESULT SetGrayFill([in]         float   fGray);
	[id(274)]HRESULT GetGrayFill([out, retval]float *pfGray);

	[id(275)]HRESULT SetRGBStroke([in ]float   fR, [in] float   fG, [in] float   fB);
	[id(276)]HRESULT GetRGBStroke([out]float *pfR, [out]float *pfG, [out]float *pfB);

	[id(277)]HRESULT SetRGBFill([in] float   fR, [in] float   fG, [in] float   fB);
	[id(278)]HRESULT GetRGBFill([out]float *pfR, [out]float *pfG, [out]float *pfB);

	[id(279)]HRESULT SetCMYKStroke([in] float   fC, [in] float   fM, [in] float   fY, [in] float   fK);
	[id(280)]HRESULT GetCMYKStroke([out]float *pfC, [out]float *pfM, [out]float *pfY, [out]float *pfK);

	[id(281)]HRESULT SetCMYKFill([in] float   fC, [in] float   fM, [in] float   fY, [in] float   fK);
	[id(282)]HRESULT GetCMYKFill([out]float *pfC, [out]float *pfM, [out]float *pfY, [out]float *pfK);

	[id(283)]HRESULT ExecuteXObject();

	[id(284)]HRESULT AppendCircle    ([in]float fX, [in]float fY, [in]float fRay);
	[id(285)]HRESULT AppendEllipse   ([in]float fX, [in]float fY, [in]float fXRad, [in]float fYRad);
	[id(286)]HRESULT AppendArc       ([in]float fX, [in]float fY, [in]float fRad,  [in]float fAngle1, [in]float fAngle2);
	[id(287)]HRESULT AppendEllipseArc([in]float fX, [in]float fY, [in]float fXRad, [in]float fYRad, [in]float fAngle1, [in]float fAngle2, [in]BOOL bClockDirection = FALSE);
	[id(288)]HRESULT TextOut([in]float fXPos, [in]float fYPos, [in] BSTR bsText);
	[id(289)]HRESULT TextRect([in]float fLeft, [in]float fTop, [in]float fRight, [in]float fBottom, [in] BSTR bsText, [in]long nAlign, [in, out]unsigned int *pnLen);
	[id(290)]HRESULT SetSlideShow(long nType, float fDispTime, float fTransTime);
	[id(291)]HRESULT GetTextWidth([in]BSTR bsText, [out, retval] float *pfResult);
	[id(292)]HRESULT MeasureText([in]BSTR bsText, [in]float fWidth, [in]BOOL bWordWrap, [in, out]float *pfRealWidth, [out, retval]long *pnLength);

	[id(293)]HRESULT SetExtGraphicsState2(BSTR bsXmlOptions);

	//----- Функции для работы с фонтами ---------------------------------------------------------------

	[id(301)]HRESULT LoadT1FFromFile([in]BSTR bsAFMFileName, [in]BSTR bsDataFileName, [out, retval]BSTR *bsFontName);
	[id(302)]HRESULT LoadTTFFromFile([in]BSTR bsFileName, [in]BOOL bEmbedding, [in] BSTR bsEncodingName, [out, retval] BSTR *bsFontName);
	[id(303)]HRESULT LoadTTCFromFile([in]BSTR bsFileName, [in]long nIndex, [in] BOOL bEmbedding, [out, retval] BSTR *bsFontName);
	[id(304)]HRESULT SetCurrentFont([in] BSTR bsFontName, [in] BSTR bsEncodingName, [in]BOOL bNameIsUnicodeArray, [in]BSTR bsToUnicodeName);
	[id(305)]HRESULT GetCurrentFont([out]BSTR *pbsFontName, [out]BSTR *pbsEncodingName);
	[id(306)]HRESULT GetFontUnicodeWidth ([in]long nCode, [out, retval]long *pnUnicode);
	[id(307)]HRESULT GetFontBBox         ([out]float *pfLeft, [out]float *pfBottom, [out]float *pfRight, [out]float *pfTop);
	[id(308)]HRESULT GetFontAscent       ([out, retval]long *pnAscent);
	[id(309)]HRESULT GetFontDescent      ([out, retval]long *pnDescent);
	[id(310)]HRESULT GetFontXHeight      ([out, retval]long *pnXHeight);
	[id(311)]HRESULT GetFontCapHeight    ([out, retval]long *pnCapHeight);

	//----- Функции для работы с кодировкой -----------------------------------------------------------

	[id(401)]HRESULT SetCurrentEncoder([in]BSTR bsEncodingName);
	[id(402)]HRESULT GetCurrentEncoder([out, retval]BSTR *pbsEncodingName);
	[id(403)]HRESULT GetEncoderUnicode([in]long nCode, [out, retval]long *pnUnicode);
	[id(404)]HRESULT GetEncoderByteType([in]BSTR bsText, [in]long nIndex, [out, retval]long *pnByteType);
	[id(405)]HRESULT GetEncoderType([out, retval]long *pnEncoderType);
	[id(406)]HRESULT GetEncoderWritingMode([out, retval]long *pnWritingMode);

	//----- Функции для работы с Annotation ------------------------------------------------------------

	[id(501)]HRESULT CreateTextAnnot      ([in]float fLeft, [in]float fBottom, [in]float fRight, [in]float fTop, [in]BSTR bsText, [in]BSTR bsEncoder);
	[id(502)]HRESULT CreateLinkAnnot      ([in]float fLeft, [in]float fBottom, [in]float fRight, [in]float fTop);
	[id(503)]HRESULT CreateUriLinkAnnot   ([in]float fLeft, [in]float fBottom, [in]float fRight, [in]float fTop, [in]BSTR bsUrl);
	[id(504)]HRESULT ArbAnnotationSetBorderStyle   ([in]long nSubtype, [in]float fWidth, [in]long nDashOn, [in]long nDashOff, [in]long nDashPhase);
	[id(505)]HRESULT LinkAnnotationSetBorderStyle  ([in]float fWidth, [in]long nDashOn, [in]long nDashOff );
	[id(506)]HRESULT LinkAnnotationSetHighlightMode([in]long nMode);
	[id(507)]HRESULT TextAnnotationSetIcon         ([in]long nIcon);
	[id(508)]HRESULT TextAnnotationSetOpened       ([in]BOOL bOpened);
	[id(509)]HRESULT SetCurrentAnnot([in]long nIndex);
	[id(510)]HRESULT GetCurrentAnnotIndex([out, retval]long *pnIndex);
	[id(511)]HRESULT MakeAnnotationFromXml([in]BSTR bsXML);

	//----- Функции для работы с Destination -----------------------------------------------------------

	[id(601)]HRESULT CreateNewDestination();
	[id(602)]HRESULT DestSetXYZ  ([in]float fLeft, [in]float fTop, [in]float fZoom);
	[id(603)]HRESULT DestSetFit  ();
	[id(604)]HRESULT DestSetFitH ([in]float fTop);
	[id(605)]HRESULT DestSetFitV ([in]float fLeft);
	[id(606)]HRESULT DestSetFitR ([in]float fLeft, [in]float fBottom, [in]float fRight, [in]float fTop);
	[id(607)]HRESULT DestSetFitB ();
	[id(608)]HRESULT DestSetFitBH([in]float fTop);
	[id(609)]HRESULT DestSetFitBV([in]float fLeft);
	[id(610)]HRESULT SetCurrentDest([in]long nIndex);
	[id(611)]HRESULT GetCurrentDestIndex([out, retval]long *pnIndex);

	//----- Функции для работы с Outline ---------------------------------------------------------------

	[id(701)]HRESULT CreateNewOutline( [in]long nParentIndex, [in]BSTR bsTitle, [in]BSTR bsEncoder);
	[id(702)]HRESULT OutlineSetCurrentDestination();
	[id(703)]HRESULT SetOutlineOpened([in]BOOL bOpened);
	[id(704)]HRESULT SetCurrentOutline([in]long nIndex);
	[id(705)]HRESULT GetCurrentOutlineIndex([out, retval]long *pnIndex);
	[id(706)]HRESULT MakeOutlineFromXml([in]BSTR bsXML);

	//----- Функции для работы с картинками -----------------------------------------------------------

	[id(801)]HRESULT LoadJpegFromFile([in]BSTR bsFileName);
	[id(802)]HRESULT LoadJpxFromFile([in]BSTR bsFileName, [in]long nFlag);
	[id(803)]HRESULT LoadImageFromFile ([in]BSTR bsFileName,                     [in]long nWidth, [in]long nHeight, [in]long nColorSpace);
	[id(804)]HRESULT LoadImageFromArray([in, satype("byte")]SAFEARRAY **ppImage, [in]long nWidth, [in]long nHeight, [in]long nColorSpace, [in]long nBitsPerComponent);
	[id(805)]HRESULT LoadImageFromInterface([in]IUnknown **pInterface, [in] BOOL bAlpha = FALSE);
	[id(806)]HRESULT DrawCurrentImage([in]float fX, [in]float fY, [in]float fWidth, [in]float fHeight);
	[id(807)]HRESULT GetImageBitsPerComponent([out, retval]long *pnBitsPerComponent);
	[id(808)]HRESULT GetImageColorSpace([out, retval]long *pnColorSpace);
	[id(809)]HRESULT GetImageHeight([out, retval]long *pnHeight);
	[id(810)]HRESULT GetImageWidth([out, retval]long *pnWidth);
	[id(811)]HRESULT SetImageColorMask([in]long nRMin, [in]long nRMax, [in]long nGMin, [in]long nGMax, [in]long nBMin, [in]long nBMax);
	[id(812)]HRESULT SetImageMaskImage([in]long nMaskImageIndex);
	[id(813)]HRESULT SetCurrentImage([in]long nIndex);
	[id(814)]HRESULT GetCurrentImageIndex([out, retval]long *pnIndex);


	//----- Функции для работы с шифрованием ----------------------------------------------------------

	[id(901)]HRESULT SetEncryptOn         ();
	[id(902)]HRESULT SetPDFPassword       ([in]BSTR bsOwnerPassword, [in]BSTR bsUserPassword);
	[id(903)]HRESULT SetPDFPermission     ([in]long nPermission);
	[id(904)]HRESULT SetPDFEncryptionMode ([in]long nMode, [in]long nKeyLen);
	[id(905)]HRESULT SetEncryptOff        ();

	//----- Функции для работы с метаданными ----------------------------------------------------------

	[id(1001)]HRESULT GetInfoItem([in]long nDataType, [out, retval]BSTR *pbsItem);
	[id(1002)]HRESULT SetInfoItem([in]long nDataType, [in]BSTR bsData);
	[id(1003)]HRESULT SetInfoDateItem([in]long nType, [in]long nYear, [in]long nMonth, [in]long nDay, [in]long nHour, [in]long nMinutes, [in]long nSeconds, [in]long nInd, [in]long nOffHour, [in]long nOffMinutes);

	//----- Для дополнительных функций ----------------------------------------------------------------

	[id(10001)]	HRESULT SetAdditionalParam([in] BSTR ParamName, [in] VARIANT	ParamValue);
	[id(10002)]	HRESULT GetAdditionalParam([in] BSTR ParamName, [out] VARIANT *	ParamValue);

};

// IPDFRenderer
[
	object,
	uuid("D08C792F-6989-4a55-8F78-C962FE895BA6"),
	dual,	helpstring("IPDFRenderer Interface"),
	pointer_default(unique)
]
__interface IPDFRenderer : IASCRenderer
{
};

// IOnlineWordToPDFWriter
[
	object,
	uuid("3B5E1A55-58E8-4458-A5D2-6709F4BC3E99"),
	dual,	helpstring("IOnlineWordToPDFWriter Interface"),
	pointer_default(unique)
]
__interface IOnlineWordToPDFWriter: IDispatch
{
	[id(10101)] HRESULT OnlineWordToPdf (BSTR sPathXml, BSTR sDstFile, BSTR sHtmlPlace, LONG nReg);
};


// CPDFWriter

[
	coclass,
	default(IPDFWriter),
	threading(apartment),
	vi_progid("AVSOfficePDFWriter.PDFWriter"),
	progid("AVSOfficePDFWriter.PDFWriter.1"),
	version(1.0),
	uuid("D2F0543F-2CEC-4A57-A579-8059EBF71EE0"),
	helpstring("PDFWriter Class")
]
class ATL_NO_VTABLE CPDFWriter 
	: public IPDFWriter
	, public IPDFRenderer
	, public IOnlineWordToPDFWriter
{

private:

	CPdfWriterLib *m_oPdfWriter;

public:
	CPDFWriter(){}
	~CPDFWriter(){}

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();

	void FinalRelease();

private:

public:
	//-----------------------------------------------------------------------------------------------------
	//
	// Интерфейс IPDFWriter
	//
	//-----------------------------------------------------------------------------------------------------
	STDMETHOD(CreatePDF)();
	STDMETHOD(DeletePDF)();
	STDMETHOD(SaveToFile)(BSTR bsPath);
	STDMETHOD(SetPDFPageMode)(long nMode);
	STDMETHOD(GetPDFPageMode)(long *pnMode);
	STDMETHOD(SetPDFPageLayout)(long nLayout);
	STDMETHOD(GetPDFPageLayout)(long *pnLayout);
	STDMETHOD(SetPDFViewerPreference)(long nValue );
	STDMETHOD(GetPDFViewerPreference)(long *pnValue);
	STDMETHOD(SetPDFCompressionMode)(long nMode);
	STDMETHOD(SetPDFOpenAction)(long nAction);
	STDMETHOD(GetLastErrorCode)(long *pnErrorCode);
	STDMETHOD(GetLastErrorString)(BSTR *pbsErrorString);
	//-----------------------------------------------------------------------------------------------------
	STDMETHOD(AddNewPage)();
	STDMETHOD(GetPagesCount)(long *pnCount );
	STDMETHOD(SetCurrentPage)(long nIndex);
	STDMETHOD(GetCurrentPageIndex)(long *pnIndex);
	STDMETHOD(SetPageWidth)(float fWidth);
	STDMETHOD(SetPageHeight)(float fHeight);
	STDMETHOD(GetWidth)(float *pfWidth);
	STDMETHOD(GetHeight)(float *pfHeight);
	STDMETHOD(SetSize)(long nSize, long nDirection);
	STDMETHOD(SetRotate)(long nAngle);
	STDMETHOD(AddLabel)(long nPageNum, long nNumStyle, long nFirstPage, BSTR bsPrefix );
	//-----------------------------------------------------------------------------------------------------
	STDMETHOD(SetLineWidth)(float fLineWidth);
	STDMETHOD(GetLineWidth)(float *pfLineWidth);
	STDMETHOD(SetLineCap)(long nLineCap);
	STDMETHOD(GetLineCap)(long *pnLineCap);
	STDMETHOD(SetLineJoin)(long nLineJoin);
	STDMETHOD(GetLineJoin)(long *pnLineJoin);
	STDMETHOD(SetMiterLimit)(float fMiterLimit);
	STDMETHOD(GetMiterLimit)(float *pfMiterLimit);
	STDMETHOD(SetDash)(SAFEARRAY **ppnDashPtn, long   nNumParam, float   fPhase);
	STDMETHOD(GetDash)(SAFEARRAY **ppnDashPtn, long *pnNumParam, float *pfPhase);
	STDMETHOD(SetFlat)(float   fFlatness);
	STDMETHOD(GetFlat)(float *pfFlatness);
	STDMETHOD(NewExtGraphicsState)();
	STDMETHOD(ExtGraphicsStateSetAlphaStroke)(float fValue);
	STDMETHOD(ExtGraphicsStateSetAlphaFill)(float fValue);
	STDMETHOD(ExtGraphicsStateSetBlendMode)(long nBlendMode);
	STDMETHOD(ExtGraphicsStateSetStrokeAdjustment)(int nFlag);
	STDMETHOD(SetExtGraphicsState)();
	STDMETHOD(GSave)();
	STDMETHOD(GRestore)();
	STDMETHOD(GetGStateDepth)(long *pnDepth);
	STDMETHOD(GetGMode)(long *pnGMode);
	STDMETHOD(Concat)(float fA, float fB, float fC, float fD, float fX, float fY);
	STDMETHOD(MoveTo)(float fX, float fY);
	STDMETHOD(GetCurrentPosition)(float *pfX, float *pfY);
	STDMETHOD(LineTo)(float fX, float fY);
	STDMETHOD(CurveTo)(float fX1, float fY1, float fX2, float fY2, float fX3, float fY3);
	STDMETHOD(CurveTo2)(float fX2, float fY2, float fX3, float fY3);
	STDMETHOD(CurveTo3)(float fX1, float fY1, float fX3, float fY3);
	STDMETHOD(ClosePath)();
	STDMETHOD(AppendRectangle)(float fX, float fY, float fWidth, float fHeight);
	STDMETHOD(Stroke)();
	STDMETHOD(GetStrokingColorSpace)(long *pnColorSpace);
	STDMETHOD(ClosePathStroke)();
	STDMETHOD(Fill)();
	STDMETHOD(GetFillingColorSpace)(long *pnColorSpace);
	STDMETHOD(EoFill)();
	STDMETHOD(FillStroke)();
	STDMETHOD(EoFillStroke)();
	STDMETHOD(ClosePathFillStroke)();
	STDMETHOD(ClosePathEoFillStroke)();
	STDMETHOD(EndPath)();
	STDMETHOD(Clip)();
	STDMETHOD(EoClip)();
	STDMETHOD(BeginText)();
	STDMETHOD(EndText)();
	STDMETHOD(SetCharSpace)(float fValue);
	STDMETHOD(GetCharSpace)(float *pfValue);
	STDMETHOD(SetWordSpace)(float fValue);
	STDMETHOD(GetWordSpace)(float *pfValue);
	STDMETHOD(SetHorizontalScalling)(float fValue);
	STDMETHOD(GetHorizontalScalling)(float *pfValue);
	STDMETHOD(SetTextLeading)(float fValue);
	STDMETHOD(GetTextLeading)(float *pfValue);
	STDMETHOD(SetFontAndSizeToGState)(float fSize);
	STDMETHOD(GetCurrentFontFromGState)(BSTR *pbsFontName, BSTR *pbsEncodingName);
	STDMETHOD(GetCurrentFontSizeFromGState)(float *pfSize);
	STDMETHOD(SetTextRenderingMode)(long nMode);
	STDMETHOD(GetTextRenderingMode)(long *pnMode);
	STDMETHOD(SetTextRise)(float fValue);
	STDMETHOD(GetTextRise)(float *pfValue);
	STDMETHOD(MoveTextPos)(float fX, float fY);
	STDMETHOD(MoveTextPos2)(float fX, float fY);
	STDMETHOD(GetCurrentTextPosition)(float *pfX, float *pfY);
	STDMETHOD(SetTextMatrix)(float   fA, float   fB, float   fC, float   fD, float   fX, float   fY);
	STDMETHOD(GetTextMatrix)(float *pfA, float *pfB, float *pfC, float *pfD, float *pfX, float *pfY);
	STDMETHOD(MoveToNextLine)();
	STDMETHOD(ShowText)(BSTR bsText);
	STDMETHOD(ShowTextNextLine)(BSTR bsText);
	STDMETHOD(ShowTextNextLineEx)(float fWordSpace, float fCharSpace, BSTR bsText);
	STDMETHOD(SetGrayStroke)(float fGray);
	STDMETHOD(GetGrayStroke)(float *pfGray);
	STDMETHOD(SetGrayFill)(float fGray);
	STDMETHOD(GetGrayFill)(float *pfGray);
	STDMETHOD(SetRGBStroke)(float   fR, float   fG, float   fB);
	STDMETHOD(GetRGBStroke)(float *pfR, float *pfG, float *pfB);
	STDMETHOD(SetRGBFill)(float fR, float fG, float fB);
	STDMETHOD(GetRGBFill)(float *pfR, float *pfG, float *pfB);
	STDMETHOD(SetCMYKStroke)(float   fC, float   fM, float   fY, float   fK);
	STDMETHOD(GetCMYKStroke)(float *pfC, float *pfM, float *pfY, float *pfK);
	STDMETHOD(SetCMYKFill)(float   fC, float   fM, float   fY, float   fK);
	STDMETHOD(GetCMYKFill)(float *pfC, float *pfM, float *pfY, float *pfK);
	STDMETHOD(ExecuteXObject)();

	STDMETHOD(SetExtGraphicsState2)(BSTR bsXmlOptions);;
	STDMETHOD(AppendCircle)(float fX, float fY, float fRad);
	STDMETHOD(AppendEllipse)(float fX, float fY, float fXRad, float fYRad);
	STDMETHOD(AppendArc)(float fX, float fY, float fRad, float fAngle1, float fAngle2);
	STDMETHOD(AppendEllipseArc)(float fX, float fY, float fXRad, float fYRad, float fAngle1, float fAngle2, BOOL bClockDirection = FALSE);
	STDMETHOD(TextOut)(float fXPos, float fYPos, BSTR bsText);
	STDMETHOD(TextRect)(float fLeft, float fTop, float fRight, float fBottom, BSTR bsText, long nAlign, unsigned int *pnLen);
	STDMETHOD(SetSlideShow)(long nType, float fDispTime, float fTransTime);
	STDMETHOD(GetTextWidth)(BSTR bsText, float *pfResult);
	STDMETHOD(MeasureText)(BSTR bsText, float fWidth, BOOL bWordWrap, float *pfRealWidth, long *pnLength);
	STDMETHOD(LoadT1FFromFile)( BSTR bsAFMFileName, BSTR bsDataFileName, BSTR *bsFontName);
	STDMETHOD(LoadTTFFromFile)( BSTR bsFileName, BOOL bEmbedding, BSTR bsEncodingName, BSTR *bsFontName);
	STDMETHOD(LoadTTCFromFile)( BSTR bsFileName, long nIndex, BOOL bEmbedding, BSTR *bsFontName);
	STDMETHOD(SetCurrentFont)( BSTR bsFontName, BSTR bsEncodingName, BOOL bNameIsUnicodeArray, BSTR bsToUnicodeName);
	STDMETHOD(GetCurrentFont)( BSTR *pbsFontName, BSTR *pbsEncodingName );
	STDMETHOD(GetFontUnicodeWidth)(long nCode, long *pnUnicode);
	STDMETHOD(GetFontBBox        )(float *pfLeft, float *pfBottom, float *pfRight, float *pfTop);
	STDMETHOD(GetFontAscent      )(long *pnAscent)	;
	STDMETHOD(GetFontDescent     )(long *pnDescent);
	STDMETHOD(GetFontXHeight     )(long *pnXHeight);
	STDMETHOD(GetFontCapHeight   )(long *pnCapHeight);
	//-----------------------------------------------------------------------------------------------------
	STDMETHOD(SetCurrentEncoder)( BSTR bsEncodingName );
	STDMETHOD(GetCurrentEncoder)( BSTR *pbsEncodingName );

	STDMETHOD(GetEncoderUnicode)    (long nCode, long *pnUnicode);
	STDMETHOD(GetEncoderByteType) (BSTR bsText, long nIndex, long *pnByteType);
	STDMETHOD(GetEncoderType)       (long *pnEncoderType);
	STDMETHOD(GetEncoderWritingMode)(long *pnWritingMode);
	STDMETHOD(CreateNewDestination)();
	STDMETHOD(DestSetXYZ)(float fLeft, float fTop, float fZoom);
	STDMETHOD(DestSetFit)();
	STDMETHOD(DestSetFitH)(float fTop);
	STDMETHOD(DestSetFitV)(float fLeft);
	STDMETHOD(DestSetFitR) (float fLeft, float fBottom, float fRight, float fTop);
	STDMETHOD(DestSetFitB)();
	STDMETHOD(DestSetFitBH)(float fTop);
	STDMETHOD(DestSetFitBV)(float fLeft);
	STDMETHOD(SetCurrentDest)(long nIndex);

	STDMETHOD(GetCurrentDestIndex)(long *pnIndex);
	STDMETHOD(CreateTextAnnot)(float fLeft, float fBottom, float fRight, float fTop, BSTR bsText, BSTR bsEncoder);
	STDMETHOD(CreateLinkAnnot)(float fLeft, float fBottom, float fRight, float fTop);
	STDMETHOD(CreateUriLinkAnnot)(float fLeft, float fBottom, float fRight, float fTop, BSTR bsUrl);
	STDMETHOD(ArbAnnotationSetBorderStyle)(long nSubtype, float fWidth, long nDashOn, long nDashOff, long nDashPhase);
	STDMETHOD(LinkAnnotationSetBorderStyle)(float fWidth, long nDashOn, long nDashOff );
	STDMETHOD(LinkAnnotationSetHighlightMode)(long nMode);
	STDMETHOD(TextAnnotationSetIcon)(long nIcon);
	STDMETHOD(TextAnnotationSetOpened)(BOOL bOpened);
	STDMETHOD(SetCurrentAnnot)(long nIndex);
	STDMETHOD(GetCurrentAnnotIndex)(long *pnIndex);
	STDMETHOD(MakeAnnotationFromXml)(BSTR bsXML);
	STDMETHOD(CreateNewOutline)(long nParentIndex, BSTR bsTitle, BSTR bsEncoder);
	STDMETHOD(OutlineSetCurrentDestination)();
	STDMETHOD(SetOutlineOpened)(BOOL bOpened);
	STDMETHOD(SetCurrentOutline)(long nIndex);
	STDMETHOD(GetCurrentOutlineIndex)(long *pnIndex);
	STDMETHOD(MakeOutlineFromXml)(BSTR bsXML);
	//------------------------------------------------------------------------------------------------
	STDMETHOD(LoadJpegFromFile)(BSTR bsFileName);
	STDMETHOD(LoadJpxFromFile)(BSTR bsFileName, long nFlag);
	STDMETHOD(LoadImageFromFile)(BSTR bsFileName,     long nWidth, long nHeight, long nColorSpace);
	STDMETHOD(LoadImageFromArray)(SAFEARRAY **ppImage, long nWidth, long nHeight, long nColorSpace, long nBitsPerComponent);
	STDMETHOD(LoadImageFromInterface)(IUnknown **pInterface, BOOL bAlpha = FALSE);
	STDMETHOD(DrawCurrentImage)(float fX, float fY, float fWidth, float fHeight);
	STDMETHOD(GetImageBitsPerComponent)(long *pnBitsPerComponent);
	STDMETHOD(GetImageColorSpace)(long *pnColorSpace);
	STDMETHOD(GetImageHeight)(long *pnHeight);
	STDMETHOD(GetImageWidth)(long *pnWidth);
	STDMETHOD(SetImageColorMask)(long nRMin, long nRMax, long nGMin, long nGMax, long nBMin, long nBMax);
	STDMETHOD(SetImageMaskImage)(long nMaskImageIndex);
	STDMETHOD(SetCurrentImage)(long nIndex);
	STDMETHOD(GetCurrentImageIndex)(long *pnIndex);
	//------------------------------------------------------------------------------------------------
	STDMETHOD(SetEncryptOn)();
	STDMETHOD(SetPDFPassword)(BSTR bsOwnerPassword, BSTR bsUserPassword);
	STDMETHOD(SetPDFPermission)(long nPermission);
	STDMETHOD(SetPDFEncryptionMode)(long nMode, long nKeyLen);
	STDMETHOD(SetEncryptOff) ();
	//------------------------------------------------------------------------------------------------
	STDMETHOD(GetInfoItem)(long nDataType, BSTR *pbsItem);
	STDMETHOD(SetInfoItem)(long nDataType, BSTR bsData);
	STDMETHOD(SetInfoDateItem)(long nType, long nYear, long nMonth, long nDay, long nHour, long nMinutes, long nSeconds, long nInd, long nOffHour, long nOffMinutes);
	//------------------------------------------------------------------------------------------------
	STDMETHOD(SetAdditionalParam)(BSTR ParamName, VARIANT	ParamValue);
	STDMETHOD(GetAdditionalParam)(BSTR ParamName, VARIANT *	ParamValue);

	//-----------------------------------------------------------------------------------------------------
	//
	// Интерфейс IAVSOfficeRendererTemplate (IPDFRenderer) IAVSRenderer
	//
	//-----------------------------------------------------------------------------------------------------
	//-------- Тип рендерера--------------------------------------------------------------------------
	STDMETHOD(get_Type)(LONG *plType);
	//-------- Функции для работы со страницей -------------------------------------------------------
	STDMETHOD(NewPage)();
	STDMETHOD(put_Height)(double   dHeight);
	STDMETHOD(get_Height)(double *pdHeight);
	STDMETHOD(put_Width)(double dWidth);
	STDMETHOD(get_Width)(double *pdWidth);
	STDMETHOD(get_DpiX)(double *pdDpiX);
	STDMETHOD(get_DpiY)(double *pdDpiY);
	//-------- Функции для работы с Pen --------------------------------------------------------------
	STDMETHOD(SetPen)(BSTR bsXML);
	STDMETHOD(get_PenColor)(LONG *plColor);
	STDMETHOD(put_PenColor)(LONG lColor);
	STDMETHOD(get_PenAlpha)(LONG *plAlpha);
	STDMETHOD(put_PenAlpha)(LONG lAlpha);
	STDMETHOD(get_PenSize)(double *pdSize);
	STDMETHOD(put_PenSize)(double dSize);
	STDMETHOD(get_PenDashStyle)(BYTE *pnStyle);
	STDMETHOD(put_PenDashStyle)(BYTE nStyle);
	STDMETHOD(get_PenLineStartCap)(BYTE *pnStartCap);
	STDMETHOD(put_PenLineStartCap)(BYTE nStartCap);
	STDMETHOD(get_PenLineEndCap)(BYTE *pnEndCap);
	STDMETHOD(put_PenLineEndCap)(BYTE nEndCap);
	STDMETHOD(get_PenLineJoin)(BYTE *pnJointStyle);
	STDMETHOD(put_PenLineJoin)(BYTE nJointStyle);
	STDMETHOD(get_PenDashOffset)(double *pdOffset);
	STDMETHOD(put_PenDashOffset)(double dOffset);
	STDMETHOD(get_PenAlign)(LONG *plAlign);
	STDMETHOD(put_PenAlign)(LONG lAlign);
	STDMETHOD(get_PenMiterLimit)(double *pdMiterLimit);
	STDMETHOD(put_PenMiterLimit)(double dMiterLimit);
	STDMETHOD(PenDashPattern)(SAFEARRAY* pPattern);
	//-------- Функции для работы с Brush ------------------------------------------------------------
	STDMETHOD(SetBrush)(BSTR bsXML);
	STDMETHOD(get_BrushType)(LONG *plType);
	STDMETHOD(put_BrushType)(LONG lType);
	STDMETHOD(get_BrushColor1)(LONG *plColor);
	STDMETHOD(put_BrushColor1)(LONG lColor);
	STDMETHOD(get_BrushAlpha1)(LONG *plAlpha);
	STDMETHOD(put_BrushAlpha1)(LONG lAlpha);
	STDMETHOD(get_BrushColor2)(LONG *plColor);
	STDMETHOD(put_BrushColor2)(LONG lColor);
	STDMETHOD(get_BrushAlpha2)(LONG *plAlpha);
	STDMETHOD(put_BrushAlpha2)(LONG lAlpha);
	STDMETHOD(get_BrushTexturePath)(BSTR *pbsPath);
	STDMETHOD(put_BrushTexturePath)(BSTR bsPath);
	STDMETHOD(get_BrushTextureMode)(LONG *plMode);
	STDMETHOD(put_BrushTextureMode)(LONG lMode);
	STDMETHOD(get_BrushTextureAlpha)(LONG *plTxAlpha);
	STDMETHOD(put_BrushTextureAlpha)(LONG lTxAlpha);
	STDMETHOD(get_BrushLinearAngle)(double *pdAngle);
	STDMETHOD(put_BrushLinearAngle)(double pdAngle);
	STDMETHOD(BrushRect)(BOOL bVal, double dLeft, double dTop, double dWidth, double dHeight);
	//-------- Функции для работы с Шрифтом ----------------------------------------------------------
	STDMETHOD(SetFont)(BSTR bsXML);
	STDMETHOD(get_FontName)(BSTR *pbsName);
	STDMETHOD(put_FontName)(BSTR bsName);
	STDMETHOD(get_FontPath)(BSTR *pbsPath);
	STDMETHOD(put_FontPath)(BSTR bsName);
	STDMETHOD(get_FontSize)(double *pdSize);
	STDMETHOD(put_FontSize)(double dSize);
	STDMETHOD(get_FontStyle)(LONG *plStyle);
	STDMETHOD(put_FontStyle)(LONG lStyle);
	STDMETHOD(get_FontStringGID)(BOOL *pbGID);
	STDMETHOD(put_FontStringGID)(BOOL bGID);
	STDMETHOD(get_FontCharSpace)(double *pdSpace);
	STDMETHOD(put_FontCharSpace)(double dSpace);
	//-------- Функции для работы с Shadow -----------------------------------------------------------
	STDMETHOD(SetShadow)(BSTR bsXML);
	STDMETHOD(get_ShadowDistanceX)(double *pdX);
	STDMETHOD(put_ShadowDistanceX)(double dX);
	STDMETHOD(get_ShadowDistanceY)(double *pdY);
	STDMETHOD(put_ShadowDistanceY)(double dY);
	STDMETHOD(get_ShadowBlurSize)(double *pdSize);
	STDMETHOD(put_ShadowBlurSize)(double dSize);
	STDMETHOD(get_ShadowColor)(LONG *plColor);
	STDMETHOD(put_ShadowColor)(LONG lColor);
	STDMETHOD(get_ShadowAlpha)(LONG *plAlpha);
	STDMETHOD(put_ShadowAlpha)(LONG lAlpha);
	STDMETHOD(get_ShadowVisible)(BOOL *pbVisible);
	STDMETHOD(put_ShadowVisible)(BOOL bVisible);
	//-------- Функции для работы с Edge Text --------------------------------------------------------
	STDMETHOD(SetEdgeText)(BSTR bsXML);
	STDMETHOD(get_EdgeVisible)(LONG *plVisible);
	STDMETHOD(put_EdgeVisible)(LONG lVisible);
	STDMETHOD(get_EdgeColor)(LONG *plColor);
	STDMETHOD(put_EdgeColor)(LONG lColor);
	STDMETHOD(get_EdgeAlpha)(LONG *plAlpha);
	STDMETHOD(put_EdgeAlpha)(LONG lAlpha);
	STDMETHOD(get_EdgeDist)(double *pdDist);
	STDMETHOD(put_EdgeDist)(double dDist);
	//--------- Функции для вывода текста ------------------------------------------------------------
	STDMETHOD(CommandDrawText)  (BSTR bsText, double fX, double fY, double fWidth, double fHeight, double fBaseLineOffset);
	STDMETHOD(CommandDrawTextEx)(BSTR bsUnicodeText, BSTR bsGidText, BSTR bsSrcCodeText, double fX, double fY, double fWidth, double fHeight, double fBaseLineOffset, DWORD nFlags);
	//--------- Маркеры для команд -------------------------------------------------------------------
	STDMETHOD(BeginCommand)(DWORD nFlag);
	STDMETHOD(EndCommand)(DWORD nFlag);
	//--------- Функции для работы с Graphics Path ---------------------------------------------------
	STDMETHOD(PathCommandStart)();
	STDMETHOD(PathCommandEnd)();
	//
	STDMETHOD(PathCommandMoveTo) (double fX,  double fY);
	STDMETHOD(PathCommandLineTo) (double fX,  double fY);
	STDMETHOD(PathCommandLinesTo) (SAFEARRAY *pPoints);
	STDMETHOD(PathCommandCurveTo)(double fX1, double fY1, double fX2, double fY2, double fX3, double fY3);
	STDMETHOD(PathCommandCurvesTo)(SAFEARRAY *pPoints);
	STDMETHOD(PathCommandArcTo) (double fX, double fY, double fWidth, double fHeight, double fStartAngle, double fSweepAngle);
	STDMETHOD(PathCommandClose)();
	//
	STDMETHOD(DrawPath)(long nType);

	STDMETHOD(PathCommandGetCurrentPoint)(double *pfX, double *pfY);
	STDMETHOD(PathCommandText)  (BSTR bsText, double fX, double fY, double fWidth, double fHeight, double fBaseLineOffset );

	STDMETHOD(PathCommandTextEx)(BSTR bsUnicodeText, BSTR bsGidText, BSTR bsSrcCodeText, double fX, double fY, double fWidth, double fHeight, double fBaseLineOffset, DWORD nFlags );

	//--------- Функции для вывода изображений -------------------------------------------------------
	STDMETHOD(DrawImage)(IUnknown *pInterface, double fX, double fY, double fWidth, double fHeight);
	STDMETHOD(DrawImageFromFile)(BSTR bsFilePath, double fX, double fY, double fWidth, double fHeight);
	//--------- Transform ----------------------------------------------------------------------------
	STDMETHOD(GetCommandParams)(double *pdAngle, double *pdLeft, double *pdTop, double *pdWidth, double *pdHeight, DWORD *pnFlags );
	STDMETHOD(SetCommandParams)(double   dAngle, double   dLeft, double   dTop, double   dWidth, double   dHeight, DWORD   nFlags );

	STDMETHOD(SetTransform)(double   dA, double   dB, double   dC, double   dD, double   dE, double   dF);

	STDMETHOD(GetTransform)(double *pdA, double *pdB, double *pdC, double *pdD, double *pdE, double *pdF);
	STDMETHOD(ResetTransform)(void);

	//--------- Clip ---------------------------------------------------------------------------------
	STDMETHOD(get_ClipMode)(LONG* plMode);
	STDMETHOD(put_ClipMode)(LONG lMode);

	STDMETHOD (OnlineWordToPdf) (BSTR sPathXml, BSTR sDstFile, BSTR sHtmlPlace, LONG nReg);

};
