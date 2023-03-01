/*
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
#include "RecordType.h"

using namespace PPT;

//#define RECORDNAME_BY_TYPE(RECORD_TYPE, RECORD_NAME)						\
//    case RECORD_TYPE: { name = RECORD_NAME; break;}			\

//std::string GetRecordName(RecordType dwType)
//{
//    std::string name;
//    switch (dwType) {
//        RECORDNAME_BY_TYPE ( RT_Document, "DocumentContainer" )
//        RECORDNAME_BY_TYPE ( RT_DocumentAtom, "DocumentAtom" )
//        RECORDNAME_BY_TYPE ( RT_EndDocumentAtom, "EndDocumentAtom" )
//        RECORDNAME_BY_TYPE ( RT_Slide, "SlideContainer" )
//        RECORDNAME_BY_TYPE ( RT_SlideAtom, "SlideAtom" )
//        RECORDNAME_BY_TYPE ( RT_Notes, "Notes" )
//        RECORDNAME_BY_TYPE ( RT_NotesAtom, "NotesAtom" )
//        RECORDNAME_BY_TYPE ( RT_Environment, "Environment" )
//        RECORDNAME_BY_TYPE ( RT_SlidePersistAtom, "SlidePersistAtom" )
//        RECORDNAME_BY_TYPE ( RT_MainMaster, "MainMaster" )
//        RECORDNAME_BY_TYPE ( RT_SlideShowSlideInfoAtom, "SlideShowSlideInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_SlideViewInfo, "SlideViewInfo" )
//        RECORDNAME_BY_TYPE ( RT_GuideAtom, "GuideAtom" )
//        RECORDNAME_BY_TYPE ( RT_ViewInfoAtom, "ViewInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_SlideViewInfoAtom, "SlideViewInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_VbaInfo, "VbaInfo" )
//        RECORDNAME_BY_TYPE ( RT_VbaInfoAtom, "VbaInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_SlideShowDocInfoAtom, "SlideShowDocInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_Summary, "Summary" )
//        RECORDNAME_BY_TYPE ( RT_DocRoutingSlipAtom, "DocRoutingSlipAtom" )
//        RECORDNAME_BY_TYPE ( RT_OutlineViewInfo, "OutlineViewInfo" )
//        RECORDNAME_BY_TYPE ( RT_SorterViewInfo, "SorterViewInfo" )
//        RECORDNAME_BY_TYPE ( RT_ExternalObjectList, "ExternalObjectList" )
//        RECORDNAME_BY_TYPE ( RT_ExternalObjectListAtom, "ExternalObjectListAtom" )
//        RECORDNAME_BY_TYPE ( RT_DrawingGroup, "DrawingGroup" )
//        RECORDNAME_BY_TYPE ( RT_Drawing, "Drawing" )
//        RECORDNAME_BY_TYPE ( RT_GridSpacing10Atom, "GridSpacing10Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripTheme12Atom, "RoundTripTheme12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripColorMapping12Atom, "RoundTripColorMapping12Atom" )
//        RECORDNAME_BY_TYPE ( RT_NamedShows, "NamedShows" )
//        RECORDNAME_BY_TYPE ( RT_NamedShow, "NamedShow" )
//        RECORDNAME_BY_TYPE ( RT_NamedShowSlidesAtom, "NamedShowSlidesAtom" )
//        RECORDNAME_BY_TYPE ( RT_NotesTextViewInfo9, "NotesTextViewInfo9" )
//        RECORDNAME_BY_TYPE ( RT_NormalViewSetInfo9, "NormalViewSetInfo9" )
//        RECORDNAME_BY_TYPE ( RT_NormalViewSetInfo9Atom, "NormalViewSetInfo9Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripOriginalMainMasterId12Atom, "RoundTripOriginalMainMasterId12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripCompositeMasterId12Atom, "RoundTripCompositeMasterId12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripContentMasterInfo12Atom, "RoundTripContentMasterInfo12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripShapeId12Atom, "RoundTripShapeId12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripHFPlaceholder12Atom, "RoundTripHFPlaceholder12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripContentMasterId12Atom, "RoundTripContentMasterId12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripOArtTextStyles12Atom, "RoundTripOArtTextStyles12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripHeaderFooterDefaults12Atom, "RoundTripHeaderFooterDefaults12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripDocFlags12Atom, "RoundTripDocFlags12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripShapeCheckSumForCL12Atom, "RoundTripShapeCheckSumForCL12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripNotesMasterTextStyles12Atom, "RoundTripNotesMasterTextStyles12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripCustomTableStyles12Atom, "RoundTripCustomTableStyles12Atom" )
//        RECORDNAME_BY_TYPE ( RT_List, "List" )
//        RECORDNAME_BY_TYPE ( RT_FontCollection, "FontCollection" )
//        RECORDNAME_BY_TYPE ( RT_FontCollection10, "FontCollection10" )
//        RECORDNAME_BY_TYPE ( RT_BookmarkCollection, "BookmarkCollection" )
//        RECORDNAME_BY_TYPE ( RT_SoundCollection, "SoundCollection" )
//        RECORDNAME_BY_TYPE ( RT_SoundCollectionAtom, "SoundCollectionAtom" )
//        RECORDNAME_BY_TYPE ( RT_Sound, "Sound" )
//        RECORDNAME_BY_TYPE ( RT_SoundDataBlob, "SoundDataBlob" )
//        RECORDNAME_BY_TYPE ( RT_BookmarkSeedAtom, "BookmarkSeedAtom" )
//        RECORDNAME_BY_TYPE ( RT_ColorSchemeAtom, "ColorSchemeAtom" )
//        RECORDNAME_BY_TYPE ( RT_BlipCollection9, "BlipCollection9" )
//        RECORDNAME_BY_TYPE ( RT_BlipEntity9Atom, "BlipEntity9Atom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalObjectRefAtom, "ExternalObjectRefAtom" )
//        RECORDNAME_BY_TYPE ( RT_PlaceholderAtom, "PlaceholderAtom" )
//        RECORDNAME_BY_TYPE ( RT_ShapeAtom, "ShapeAtom" )
//        RECORDNAME_BY_TYPE ( RT_ShapeFlags10Atom, "ShapeFlags10Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripNewPlaceholderId12Atom, "RoundTripNewPlaceholderId12Atom" )
//        RECORDNAME_BY_TYPE ( RT_OutlineTextRefAtom, "OutlineTextRefAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextHeaderAtom, "TextHeaderAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextCharsAtom, "TextCharsAtom" )
//        RECORDNAME_BY_TYPE ( RT_StyleTextPropAtom, "StyleTextPropAtom" )
//        RECORDNAME_BY_TYPE ( RT_MasterTextPropAtom, "MasterTextPropAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextMasterStyleAtom, "TextMasterStyleAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextCharFormatExceptionAtom, "TextCharFormatExceptionAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextParagraphFormatExceptionAtom, "TextParagraphFormatExceptionAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextRulerAtom, "TextRulerAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextBookmarkAtom, "TextBookmarkAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextBytesAtom, "TextBytesAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextSpecialInfoDefaultAtom, "TextSpecialInfoDefaultAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextSpecialInfoAtom, "TextSpecialInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_DefaultRulerAtom, "DefaultRulerAtom" )
//        RECORDNAME_BY_TYPE ( RT_StyleTextProp9Atom, "StyleTextProp9Atom" )
//        RECORDNAME_BY_TYPE ( RT_TextMasterStyle9Atom, "TextMasterStyle9Atom" )
//        RECORDNAME_BY_TYPE ( RT_OutlineTextProps9, "OutlineTextProps9" )
//        RECORDNAME_BY_TYPE ( RT_OutlineTextPropsHeader9Atom, "OutlineTextPropsHeader9Atom" )
//        RECORDNAME_BY_TYPE ( RT_TextDefaults9Atom, "TextDefaults9Atom" )
//        RECORDNAME_BY_TYPE ( RT_StyleTextProp10Atom, "StyleTextProp10Atom" )
//        RECORDNAME_BY_TYPE ( RT_TextMasterStyle10Atom, "TextMasterStyle10Atom" )
//        RECORDNAME_BY_TYPE ( RT_OutlineTextProps10, "OutlineTextProps10" )
//        RECORDNAME_BY_TYPE ( RT_TextDefaults10Atom, "TextDefaults10Atom" )
//        RECORDNAME_BY_TYPE ( RT_OutlineTextProps11, "OutlineTextProps11" )
//        RECORDNAME_BY_TYPE ( RT_StyleTextProp11Atom, "StyleTextProp11Atom" )
//        RECORDNAME_BY_TYPE ( RT_FontEntityAtom, "FontEntityAtom" )
//        RECORDNAME_BY_TYPE ( RT_FontEmbedDataBlob, "FontEmbedDataBlob" )
//        RECORDNAME_BY_TYPE ( RT_CString, "CString" )
//        RECORDNAME_BY_TYPE ( RT_MetaFile, "MetaFile" )
//        RECORDNAME_BY_TYPE ( RT_ExternalOleObjectAtom, "ExternalOleObjectAtom" )
//        RECORDNAME_BY_TYPE ( RT_Kinsoku, "Kinsoku" )
//        RECORDNAME_BY_TYPE ( RT_Handout, "Handout" )
//        RECORDNAME_BY_TYPE ( RT_ExternalOleEmbed, "ExternalOleEmbed" )
//        RECORDNAME_BY_TYPE ( RT_ExternalOleEmbedAtom, "ExternalOleEmbedAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalOleLink, "ExternalOleLink" )
//        RECORDNAME_BY_TYPE ( RT_BookmarkEntityAtom, "BookmarkEntityAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalOleLinkAtom, "ExternalOleLinkAtom" )
//        RECORDNAME_BY_TYPE ( RT_KinsokuAtom, "KinsokuAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalHyperlinkAtom, "ExternalHyperlinkAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalHyperlink, "ExternalHyperlink" )
//        RECORDNAME_BY_TYPE ( RT_SlideNumberMetaCharAtom, "SlideNumberMetaCharAtom" )
//        RECORDNAME_BY_TYPE ( RT_HeadersFooters, "HeadersFooters" )
//        RECORDNAME_BY_TYPE ( RT_HeadersFootersAtom, "HeadersFootersAtom" )
//        RECORDNAME_BY_TYPE ( RT_TextInteractiveInfoAtom, "TextInteractiveInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalHyperlink9, "ExternalHyperlink9" )
//        RECORDNAME_BY_TYPE ( RT_RecolorInfoAtom, "RecolorInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalOleControl, "ExternalOleControl" )
//        RECORDNAME_BY_TYPE ( RT_SlideListWithText, "SlideListWithText" )
//        RECORDNAME_BY_TYPE ( RT_AnimationInfoAtom, "AnimationInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_InteractiveInfo, "InteractiveInfo" )
//        RECORDNAME_BY_TYPE ( RT_InteractiveInfoAtom, "InteractiveInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_UserEditAtom, "UserEditAtom" )
//        RECORDNAME_BY_TYPE ( RT_CurrentUserAtom, "CurrentUserAtom" )
//        RECORDNAME_BY_TYPE ( RT_DateTimeMetaCharAtom, "DateTimeMetaCharAtom" )
//        RECORDNAME_BY_TYPE ( RT_GenericDateMetaCharAtom, "GenericDateMetaCharAtom" )
//        RECORDNAME_BY_TYPE ( RT_HeaderMetaCharAtom, "HeaderMetaCharAtom" )
//        RECORDNAME_BY_TYPE ( RT_FooterMetaCharAtom, "FooterMetaCharAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalOleControlAtom, "ExternalOleControlAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalMediaAtom, "ExternalMediaAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalVideo, "ExternalVideo" )
//        RECORDNAME_BY_TYPE ( RT_ExternalAviMovie, "ExternalAviMovie" )
//        RECORDNAME_BY_TYPE ( RT_ExternalMciMovie, "ExternalMciMovie" )
//        RECORDNAME_BY_TYPE ( RT_ExternalMidiAudio, "ExternalMidiAudio" )
//        RECORDNAME_BY_TYPE ( RT_ExternalCdAudio, "ExternalCdAudio" )
//        RECORDNAME_BY_TYPE ( RT_ExternalWavAudioEmbedded, "ExternalWavAudioEmbedded" )
//        RECORDNAME_BY_TYPE ( RT_ExternalWavAudioLink, "ExternalWavAudioLink" )
//        RECORDNAME_BY_TYPE ( RT_ExternalOleObjectStg, "ExternalOleObjectStg" )
//        RECORDNAME_BY_TYPE ( RT_ExternalCdAudioAtom, "ExternalCdAudioAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalWavAudioEmbeddedAtom, "ExternalWavAudioEmbeddedAtom" )
//        RECORDNAME_BY_TYPE ( RT_AnimationInfo, "AnimationInfo" )
//        RECORDNAME_BY_TYPE ( RT_RtfDateTimeMetaCharAtom, "RtfDateTimeMetaCharAtom" )
//        RECORDNAME_BY_TYPE ( RT_ExternalHyperlinkFlagsAtom, "ExternalHyperlinkFlagsAtom" )
//        RECORDNAME_BY_TYPE ( RT_ProgTags, "ProgTags" )
//        RECORDNAME_BY_TYPE ( RT_ProgStringTag, "ProgStringTag" )
//        RECORDNAME_BY_TYPE ( RT_ProgBinaryTag, "ProgBinaryTag" )
//        RECORDNAME_BY_TYPE ( RT_BinaryTagDataBlob, "BinaryTagDataBlob" )
//        RECORDNAME_BY_TYPE ( RT_PrintOptionsAtom, "PrintOptionsAtom" )
//        RECORDNAME_BY_TYPE ( RT_PersistDirectoryAtom, "PersistDirectoryAtom" )
//        RECORDNAME_BY_TYPE ( RT_PresentationAdvisorFlags9Atom, "PresentationAdvisorFlags9Atom" )
//        RECORDNAME_BY_TYPE ( RT_HtmlDocInfo9Atom, "HtmlDocInfo9Atom" )
//        RECORDNAME_BY_TYPE ( RT_HtmlPublishInfoAtom, "HtmlPublishInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_HtmlPublishInfo9, "HtmlPublishInfo9" )
//        RECORDNAME_BY_TYPE ( RT_BroadcastDocInfo9, "BroadcastDocInfo9" )
//        RECORDNAME_BY_TYPE ( RT_BroadcastDocInfo9Atom, "BroadcastDocInfo9Atom" )
//        RECORDNAME_BY_TYPE ( RT_EnvelopeFlags9Atom, "EnvelopeFlags9Atom" )
//        RECORDNAME_BY_TYPE ( RT_EnvelopeData9Atom, "EnvelopeData9Atom" )
//        RECORDNAME_BY_TYPE ( RT_VisualShapeAtom, "VisualShapeAtom" )
//        RECORDNAME_BY_TYPE ( RT_HashCodeAtom, "HashCodeAtom" )
//        RECORDNAME_BY_TYPE ( RT_VisualPageAtom, "VisualPageAtom" )
//        RECORDNAME_BY_TYPE ( RT_BuildList, "BuildList" )
//        RECORDNAME_BY_TYPE ( RT_BuildAtom, "BuildAtom" )
//        RECORDNAME_BY_TYPE ( RT_ChartBuild, "ChartBuild" )
//        RECORDNAME_BY_TYPE ( RT_ChartBuildAtom, "ChartBuildAtom" )
//        RECORDNAME_BY_TYPE ( RT_DiagramBuild, "DiagramBuild" )
//        RECORDNAME_BY_TYPE ( RT_DiagramBuildAtom, "DiagramBuildAtom" )
//        RECORDNAME_BY_TYPE ( RT_ParaBuild, "ParaBuild" )
//        RECORDNAME_BY_TYPE ( RT_ParaBuildAtom, "ParaBuildAtom" )
//        RECORDNAME_BY_TYPE ( RT_LevelInfoAtom, "LevelInfoAtom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripAnimationAtom12Atom, "RoundTripAnimationAtom12Atom" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripAnimationHashAtom12Atom, "RoundTripAnimationHashAtom12Atom" )
//        RECORDNAME_BY_TYPE ( RT_Comment10, "Comment10" )
//        RECORDNAME_BY_TYPE ( RT_Comment10Atom, "Comment10Atom" )
//        RECORDNAME_BY_TYPE ( RT_CommentIndex10, "CommentIndex10" )
//        RECORDNAME_BY_TYPE ( RT_CommentIndex10Atom, "CommentIndex10Atom" )
//        RECORDNAME_BY_TYPE ( RT_LinkedShape10Atom, "LinkedShape10Atom" )
//        RECORDNAME_BY_TYPE ( RT_LinkedSlide10Atom, "LinkedSlide10Atom" )
//        RECORDNAME_BY_TYPE ( RT_SlideFlags10Atom, "SlideFlags10Atom" )
//        RECORDNAME_BY_TYPE ( RT_SlideTime10Atom, "SlideTime10Atom" )
//        RECORDNAME_BY_TYPE ( RT_DiffTree10, "DiffTree10" )
//        RECORDNAME_BY_TYPE ( RT_Diff10, "Diff10" )
//        RECORDNAME_BY_TYPE ( RT_Diff10Atom, "Diff10Atom" )
//        RECORDNAME_BY_TYPE ( RT_SlideListTableSize10Atom, "SlideListTableSize10Atom" )
//        RECORDNAME_BY_TYPE ( RT_SlideListEntry10Atom, "SlideListEntry10Atom" )
//        RECORDNAME_BY_TYPE ( RT_SlideListTable10, "SlideListTable10" )
//        RECORDNAME_BY_TYPE ( RT_CryptSession10Container, "CryptSession10Container" )
//        RECORDNAME_BY_TYPE ( RT_FontEmbedFlags10Atom, "FontEmbedFlags10Atom" )
//        RECORDNAME_BY_TYPE ( RT_FilterPrivacyFlags10Atom, "FilterPrivacyFlags10Atom" )
//        RECORDNAME_BY_TYPE ( RT_DocToolbarStates10Atom, "DocToolbarStates10Atom" )
//        RECORDNAME_BY_TYPE ( RT_PhotoAlbumInfo10Atom, "PhotoAlbumInfo10Atom" )
//        RECORDNAME_BY_TYPE ( RT_SmartTagStore11Container, "SmartTagStore11Container" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripSlideSyncInfo12, "RoundTripSlideSyncInfo12" )
//        RECORDNAME_BY_TYPE ( RT_RoundTripSlideSyncInfoAtom12, "RoundTripSlideSyncInfoAtom12" )
//        RECORDNAME_BY_TYPE ( RT_TimeConditionContainer, "TimeConditionContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeNode, "TimeNode" )
//        RECORDNAME_BY_TYPE ( RT_TimeCondition, "TimeCondition" )
//        RECORDNAME_BY_TYPE ( RT_TimeModifier, "TimeModifier" )
//        RECORDNAME_BY_TYPE ( RT_TimeBehaviorContainer, "TimeBehaviorContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeAnimateBehaviorContainer, "TimeAnimateBehaviorContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeColorBehaviorContainer, "TimeColorBehaviorContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeEffectBehaviorContainer, "TimeEffectBehaviorContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeMotionBehaviorContainer, "TimeMotionBehaviorContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeRotationBehaviorContainer, "TimeRotationBehaviorContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeScaleBehaviorContainer, "TimeScaleBehaviorContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeSetBehaviorContainer, "TimeSetBehaviorContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeCommandBehaviorContainer, "TimeCommandBehaviorContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeBehavior, "TimeBehavior" )
//        RECORDNAME_BY_TYPE ( RT_TimeAnimateBehavior, "TimeAnimateBehavior" )
//        RECORDNAME_BY_TYPE ( RT_TimeColorBehavior, "TimeColorBehavior" )
//        RECORDNAME_BY_TYPE ( RT_TimeEffectBehavior, "TimeEffectBehavior" )
//        RECORDNAME_BY_TYPE ( RT_TimeMotionBehavior, "TimeMotionBehavior" )
//        RECORDNAME_BY_TYPE ( RT_TimeRotationBehavior, "TimeRotationBehavior" )
//        RECORDNAME_BY_TYPE ( RT_TimeScaleBehavior, "TimeScaleBehavior" )
//        RECORDNAME_BY_TYPE ( RT_TimeSetBehavior, "TimeSetBehavior" )
//        RECORDNAME_BY_TYPE ( RT_TimeCommandBehavior, "TimeCommandBehavior" )
//        RECORDNAME_BY_TYPE ( RT_TimeClientVisualElement, "TimeClientVisualElement" )
//        RECORDNAME_BY_TYPE ( RT_TimePropertyList, "TimePropertyList" )
//        RECORDNAME_BY_TYPE ( RT_TimeVariantList, "TimeVariantList" )
//        RECORDNAME_BY_TYPE ( RT_TimeAnimationValueList, "TimeAnimationValueList" )
//        RECORDNAME_BY_TYPE ( RT_TimeIterateData, "TimeIterateData" )
//        RECORDNAME_BY_TYPE ( RT_TimeSequenceData, "TimeSequenceData" )
//        RECORDNAME_BY_TYPE ( RT_TimeVariant, "TimeVariant" )
//        RECORDNAME_BY_TYPE ( RT_TimeAnimationValue, "TimeAnimationValue" )
//        RECORDNAME_BY_TYPE ( RT_TimeExtTimeNodeContainer, "TimeExtTimeNodeContainer" )
//        RECORDNAME_BY_TYPE ( RT_TimeSubEffectContainer, "TimeSubEffectContainer" )
//            default:
//            name = "UnknownRecord!";
//    }
//    return name;
//}
