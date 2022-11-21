#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       -= core gui

TARGET = OdfFormatLib
TEMPLATE = lib
CONFIG += staticlib

CORE_ROOT_DIR = $$PWD/../../..
PWD_ROOT_DIR = $$PWD

CONFIG += core_x2t
include(../../../Common/base.pri)

#BOOST
include($$PWD/../../../Common/3dParty/boost/boost.pri)

DEFINES +=  UNICODE \
            _UNICODE \
            DONT_WRITE_EMBEDDED_FONTS

INCLUDEPATH += ../../DataTypes
INCLUDEPATH += ../../Common

CONFIG(debug, debug|release){
DEFINES +=  _DEBUG
}

core_release {
SOURCES += \
	odf_converter.cpp \
	odf_datatypes.cpp \
	odf_reader.cpp \
	odf_writer.cpp
}

core_debug {
SOURCES += \    
	../../DataTypes/mathvariant.cpp \
	../../DataTypes/anchortype.cpp \
	../../DataTypes/backgroundcolor.cpp \
	../../DataTypes/bool.cpp \
	../../DataTypes/bordermodel.cpp \
	../../DataTypes/borderstyle.cpp \
	../../DataTypes/borderwidths.cpp \
	../../DataTypes/calcext_type.cpp \
	../../DataTypes/chartdatalabelnumber.cpp \
	../../DataTypes/charterrorcategory.cpp \
	../../DataTypes/chartinterpolation.cpp \
	../../DataTypes/chartlabelarrangement.cpp \
	../../DataTypes/chartregressiontype.cpp \
	../../DataTypes/chartseriessource.cpp \
	../../DataTypes/chartsolidtype.cpp \
	../../DataTypes/chartclass.cpp \
	../../DataTypes/chartsymbol.cpp \
	../../DataTypes/clockvalue.cpp \
	../../DataTypes/color.cpp \
	../../DataTypes/common_attlists.cpp \
	../../DataTypes/direction.cpp \
	../../DataTypes/drawfill.cpp \
	../../DataTypes/dropcaplength.cpp \
	../../DataTypes/fillimagerefpoint.cpp \
	../../DataTypes/fobreak.cpp \
	../../DataTypes/fontfamilygeneric.cpp \
	../../DataTypes/fontpitch.cpp \
	../../DataTypes/fontrelief.cpp \
	../../DataTypes/fontsize.cpp \
	../../DataTypes/fontstretch.cpp \
	../../DataTypes/fontstyle.cpp \
	../../DataTypes/fontvariant.cpp \
	../../DataTypes/fontweight.cpp \
	../../DataTypes/gradientstyle.cpp \
	../../DataTypes/hatchstyle.cpp \
	../../DataTypes/hyphenationkeep.cpp \
	../../DataTypes/hyphenationladdercount.cpp \
	../../DataTypes/iconset_type.cpp \
	../../DataTypes/keeptogether.cpp \
	../../DataTypes/layoutgridmode.cpp \
	../../DataTypes/length.cpp \
	../../DataTypes/lengthorpercent.cpp \
	../../DataTypes/letterspacing.cpp \
	../../DataTypes/linebreak.cpp \
	../../DataTypes/linemode.cpp \
	../../DataTypes/linestyle.cpp \
	../../DataTypes/linetype.cpp \
	../../DataTypes/linewidth.cpp \
	../../DataTypes/markerstyle.cpp \
	../../DataTypes/noteclass.cpp \
	../../DataTypes/officevaluetype.cpp \
	../../DataTypes/pageusage.cpp \
	../../DataTypes/percent.cpp \
	../../DataTypes/percentorscale.cpp \
	../../DataTypes/presentationclass.cpp \
	../../DataTypes/punctuationwrap.cpp \
	../../DataTypes/rotationalign.cpp \
	../../DataTypes/runthrough.cpp \
	../../DataTypes/scripttype.cpp \
	../../DataTypes/shadowtype.cpp \
	../../DataTypes/smil_transitiontype.cpp \
	../../DataTypes/stylefamily.cpp \
	../../DataTypes/stylehorizontalpos.cpp \
	../../DataTypes/stylehorizontalrel.cpp \
	../../DataTypes/styleleadercolor.cpp \
	../../DataTypes/styleposition.cpp \
	../../DataTypes/style_ref.cpp \
	../../DataTypes/stylerepeat.cpp \
	../../DataTypes/styletype.cpp \
	../../DataTypes/styleverticalpos.cpp \
	../../DataTypes/styleverticalrel.cpp \
	../../DataTypes/stylewrap.cpp \
	../../DataTypes/stylewrapcontourmode.cpp \
	../../DataTypes/stylenumformat.cpp \
	../../DataTypes/tablealign.cpp \
	../../DataTypes/tablecentering.cpp \
	../../DataTypes/tablemode.cpp \
	../../DataTypes/tablevisibility.cpp \
	../../DataTypes/targetframename.cpp \
	../../DataTypes/textalign.cpp \
	../../DataTypes/textalignsource.cpp \
	../../DataTypes/textautospace.cpp \
	../../DataTypes/textcombine.cpp \
	../../DataTypes/textdisplay.cpp \
	../../DataTypes/textemphasize.cpp \
	../../DataTypes/textposition.cpp \
	../../DataTypes/textrotationscale.cpp \
	../../DataTypes/texttransform.cpp \
	../../DataTypes/underlinecolor.cpp \
	../../DataTypes/verticalalign.cpp \
	../../DataTypes/wrapoption.cpp \
	../../DataTypes/writingmode.cpp \
	../../DataTypes/xlink.cpp \
	../../DataTypes/chartlabelposition.cpp \
	../../DataTypes/grandtotal.cpp \
	../../DataTypes/membertype.cpp \
	../../DataTypes/tabletype.cpp \
	../../DataTypes/tableorientation.cpp \
	../../DataTypes/tablefunction.cpp \
	../../DataTypes/tableorder.cpp \
	../../DataTypes/dategroup.cpp \
	../../DataTypes/bibliography.cpp \
	../../DataTypes/commandtype.cpp \
	../../DataTypes/styleprint.cpp \
	../../DataTypes/charttimeunit.cpp \
	../../DataTypes/drawangle.cpp \
	../../DataTypes/timeperiod.cpp \
	../../DataTypes/messagetype.cpp \
	../../DataTypes/stylecellprotect.cpp \
        ../../Reader/Format/abstract_xml.cpp \
        ../../Reader/Format/anim_elements.cpp \
        ../../Reader/Format/calcs_styles.cpp \
        ../../Reader/Format/chart_build_oox.cpp \
        ../../Reader/Format/createandread.cpp \
        ../../Reader/Format/documentcontext.cpp \
        ../../Reader/Format/draw_common.cpp \
        ../../Reader/Format/draw_frame.cpp \
        ../../Reader/Format/draw_frame_docx.cpp \
        ../../Reader/Format/draw_frame_pptx.cpp \
        ../../Reader/Format/draw_frame_xlsx.cpp \
        ../../Reader/Format/draw_page.cpp \
        ../../Reader/Format/draw_shapes.cpp \
        ../../Reader/Format/draw_shapes_docx.cpp \
        ../../Reader/Format/draw_shapes_pptx.cpp \
        ../../Reader/Format/draw_shapes_xlsx.cpp \
        ../../Reader/Format/font_face.cpp \
        ../../Reader/Format/header_footer.cpp \
        ../../Reader/Format/list.cpp \
        ../../Reader/Format/note.cpp \
        ../../Reader/Format/number_style.cpp \
        ../../Reader/Format/odf_content_xml.cpp \
        ../../Reader/Format/odfcontext.cpp \
        ../../Reader/Format/odf_document.cpp \
        ../../Reader/Format/odf_document_impl.cpp \
        ../../Reader/Format/office_annotation.cpp \
        ../../Reader/Format/office_binary_data.cpp \
        ../../Reader/Format/office_body.cpp \
        ../../Reader/Format/office_chart.cpp \
        ../../Reader/Format/office_document.cpp \
        ../../Reader/Format/office_elements_create.cpp \
        ../../Reader/Format/office_event_listeners.cpp \
        ../../Reader/Format/office_presentation.cpp \
        ../../Reader/Format/office_scripts.cpp \
        ../../Reader/Format/office_forms.cpp \
        ../../Reader/Format/office_settings.cpp \
        ../../Reader/Format/office_spreadsheet.cpp \
        ../../Reader/Format/office_text.cpp \
        ../../Reader/Format/office_meta.cpp \
        ../../Reader/Format/paragraph_elements.cpp \
        ../../Reader/Format/ruby.cpp \
        ../../Reader/Format/search_table_cell.cpp \
        ../../Reader/Format/skipelement.cpp \
        ../../Reader/Format/style_chart_properties.cpp \
        ../../Reader/Format/style_graphic_properties.cpp \
        ../../Reader/Format/style_map.cpp \
        ../../Reader/Format/style_properties.cpp \
        ../../Reader/Format/style_paragraph_properties.cpp \
        ../../Reader/Format/style_paragraph_properties_docx.cpp \
        ../../Reader/Format/style_paragraph_properties_pptx.cpp \
        ../../Reader/Format/style_presentation.cpp \
        ../../Reader/Format/style_regions.cpp \
        ../../Reader/Format/styles.cpp \
        ../../Reader/Format/styles_list.cpp \
        ../../Reader/Format/styles_lite_container.cpp \
        ../../Reader/Format/style_table_properties.cpp \
        ../../Reader/Format/style_text_properties.cpp \
        ../../Reader/Format/svg_parser.cpp \
        ../../Reader/Format/table.cpp \
        ../../Reader/Format/table_calculation_settings.cpp \
        ../../Reader/Format/table_docx.cpp \
        ../../Reader/Format/table_named_expressions.cpp \
        ../../Reader/Format/table_data_pilot_tables.cpp \
        ../../Reader/Format/table_pptx.cpp \
        ../../Reader/Format/table_xlsx.cpp \
        ../../Reader/Format/templates.cpp \
        ../../Reader/Format/text_content.cpp \
        ../../Reader/Format/text_elements.cpp \
        ../../Reader/Format/math_elementaries.cpp \
        ../../Reader/Format/math_layout_elements.cpp \
        ../../Reader/Format/math_limit_elements.cpp \
        ../../Reader/Format/math_table_elements.cpp \
        ../../Reader/Format/math_token_elements.cpp \
        ../../Reader/Format/calcext_elements.cpp \
        ../../Reader/Format/table_database_ranges.cpp \
        ../../Reader/Format/math_elements.cpp \
	../../Reader/Converter/xlsx_conditionalFormatting.cpp \
        ../../Reader/Converter/ConvertOO2OOX.cpp \
        ../../Reader/Converter/conversionelement.cpp \
        ../../Reader/Converter/xlsx_dxfs.cpp \
	../../Reader/Converter/docx_content_type.cpp \
	../../Reader/Converter/docx_conversion_context.cpp \
	../../Reader/Converter/docx_drawing.cpp \
	../../Reader/Converter/docx_package.cpp \
	../../Reader/Converter/docx_table_context.cpp \
	../../Reader/Converter/headers_footers.cpp \
	../../Reader/Converter/hyperlinks.cpp \
	../../Reader/Converter/measuredigits.cpp \
	../../Reader/Converter/mediaitems.cpp \
	../../Reader/Converter/namespaces.cpp \
	../../Reader/Converter/oox_chart_axis.cpp \
	../../Reader/Converter/oox_chart_context.cpp \
	../../Reader/Converter/oox_chart_legend.cpp \
	../../Reader/Converter/oox_chart_series.cpp \
	../../Reader/Converter/oox_chart_shape.cpp \
	../../Reader/Converter/oox_conversion_context.cpp \
	../../Reader/Converter/oox_data_labels.cpp \
	../../Reader/Converter/oox_drawing.cpp \
	../../Reader/Converter/oox_drawing_fills.cpp \
	../../Reader/Converter/oox_layout.cpp \
	../../Reader/Converter/oox_package.cpp \
	../../Reader/Converter/oox_plot_area.cpp \
	../../Reader/Converter/oox_title.cpp \
	../../Reader/Converter/oox_types_chart.cpp \
	../../Reader/Converter/oox_rels.cpp \
	../../Reader/Converter/pptx_comments.cpp \
	../../Reader/Converter/pptx_comments_context.cpp \
	../../Reader/Converter/pptx_conversion_context.cpp \
	../../Reader/Converter/pptx_drawing.cpp \
	../../Reader/Converter/pptx_drawings.cpp \
	../../Reader/Converter/pptx_output_xml.cpp \
	../../Reader/Converter/pptx_package.cpp \
	../../Reader/Converter/pptx_slide_context.cpp \
	../../Reader/Converter/pptx_table_context.cpp \
	../../Reader/Converter/pptx_text_context.cpp \
	../../Reader/Converter/xlsx_alignment.cpp \
	../../Reader/Converter/xlsx_border.cpp \
	../../Reader/Converter/xlsx_borders.cpp \
	../../Reader/Converter/xlsx_cell_format.cpp \
	../../Reader/Converter/xlsx_cell_style.cpp \
	../../Reader/Converter/xlsx_cell_styles.cpp \
	../../Reader/Converter/xlsx_color.cpp \
	../../Reader/Converter/xlsx_comments.cpp \
	../../Reader/Converter/xlsx_comments_context.cpp \
	../../Reader/Converter/xlsx_complex_number_format.cpp \
	../../Reader/Converter/xlsxconversioncontext.cpp \
	../../Reader/Converter/xlsx_defined_names.cpp \
	../../Reader/Converter/xlsx_drawing.cpp \
	../../Reader/Converter/xlsx_drawing_context.cpp \
	../../Reader/Converter/xlsx_drawings.cpp \
	../../Reader/Converter/xlsx_fill.cpp \
	../../Reader/Converter/xlsx_fills.cpp \
	../../Reader/Converter/xlsx_font.cpp \
	../../Reader/Converter/xlsx_fonts.cpp \
	../../Reader/Converter/xlsx_hyperlinks.cpp \
	../../Reader/Converter/xlsx_merge_cells.cpp \
	../../Reader/Converter/xlsx_numFmts.cpp \
	../../Reader/Converter/xlsx_num_format_context.cpp \
	../../Reader/Converter/xlsx_output_xml.cpp \
	../../Reader/Converter/xlsx_package.cpp \
	../../Reader/Converter/xlsx_protection.cpp \
	../../Reader/Converter/xlsx_sharedstrings.cpp \
	../../Reader/Converter/xlsx_styles.cpp \
	../../Reader/Converter/xlsx_tablecontext.cpp \
	../../Reader/Converter/xlsx_table_metrics.cpp \
	../../Reader/Converter/xlsx_table_state.cpp \
	../../Reader/Converter/xlsx_textcontext.cpp \
	../../Reader/Converter/xlsx_pivots_context.cpp \
	../../Reader/Converter/xlsx_data_validation.cpp \
	../../Reader/Converter/xlsx_utils.cpp \
	../../Reader/Converter/xlsx_xf.cpp \
	\
        ../../Writer/Format/office_document.cpp \
	../../Writer/Format/office_forms.cpp \
	../../Writer/Format/abstract_xml.cpp \
	../../Writer/Format/calcext_elements.cpp \
	../../Writer/Format/draw_base.cpp \
	../../Writer/Format/draw_frame.cpp \
	../../Writer/Format/draw_shapes.cpp \
	../../Writer/Format/header_footer.cpp \
	../../Writer/Format/list.cpp \
	../../Writer/Format/mediaitems.cpp \
	../../Writer/Format/number_style.cpp \
	../../Writer/Format/object_package.cpp \
	../../Writer/Format/odf_chart_context.cpp \
	../../Writer/Format/odf_comment_context.cpp \
	../../Writer/Format/odf_notes_context.cpp \
	../../Writer/Format/odf_conversion_context.cpp \
	../../Writer/Format/odf_drawing_context.cpp \
	../../Writer/Format/odf_lists_styles_context.cpp \
	../../Writer/Format/odf_number_styles_context.cpp \
	../../Writer/Format/odf_page_layout_context.cpp \
	../../Writer/Format/odf_page_layout_state.cpp \
	../../Writer/Format/odf_rels.cpp \
	../../Writer/Format/odf_style_context.cpp \
	../../Writer/Format/odf_style_state.cpp \
	../../Writer/Format/odf_table_context.cpp \
	../../Writer/Format/odf_table_styles_context.cpp \
	../../Writer/Format/odf_text_context.cpp \
	../../Writer/Format/odf_controls_context.cpp \
	../../Writer/Format/ods_conversion_context.cpp \
	../../Writer/Format/ods_table_context.cpp \
	../../Writer/Format/ods_table_state.cpp \
	../../Writer/Format/odt_conversion_context.cpp \
	../../Writer/Format/office_annotation.cpp \
	../../Writer/Format/office_body.cpp \
	../../Writer/Format/office_chart.cpp \
	../../Writer/Format/office_elements_create.cpp \
	../../Writer/Format/office_spreadsheet.cpp \
	../../Writer/Format/office_text.cpp \
	../../Writer/Format/oox_shape_defines.cpp \
	../../Writer/Format/paragraph_elements.cpp \
	../../Writer/Format/style_chart_properties.cpp \
	../../Writer/Format/style_graphic_properties.cpp \
	../../Writer/Format/style_map.cpp \
	../../Writer/Format/style_page_layout_properties.cpp \
	../../Writer/Format/style_paragraph_properties.cpp \
	../../Writer/Format/styles.cpp \
	../../Writer/Format/style_section_properties.cpp \
	../../Writer/Format/styles_list.cpp \
	../../Writer/Format/styles_lite_container.cpp \
	../../Writer/Format/style_table_properties.cpp \
	../../Writer/Format/style_text_properties.cpp \
	../../Writer/Format/svg_creator.cpp \
	../../Writer/Format/table.cpp \
	../../Writer/Format/table_database_ranges.cpp \
	../../Writer/Format/table_data_pilot_tables.cpp \
	../../Writer/Format/table_named_expressions.cpp \
	../../Writer/Format/text_elements.cpp \
	../../Writer/Format/odf_settings_context.cpp \
	../../Writer/Format/office_settings.cpp \
	../../Writer/Format/mediaitems_utils.cpp \
	../../Writer/Format/office_scripts.cpp \
	../../Writer/Format/office_event_listeners.cpp \
	../../Writer/Format/anim_elements.cpp \
	../../Writer/Format/draw_page.cpp \
	../../Writer/Format/odp_conversion_context.cpp \
	../../Writer/Format/odp_page_state.cpp \
	../../Writer/Format/odp_slide_context.cpp \
	../../Writer/Format/office_presentation.cpp \
	../../Writer/Format/style_presentation.cpp \
	../../Writer/Format/odf_math_context.cpp \
	../../Writer/Format/math_elementaries.cpp \
	../../Writer/Format/math_elements.cpp \
	../../Writer/Format/math_layout_elements.cpp \
	../../Writer/Format/math_limit_elements.cpp \
	../../Writer/Format/math_table_elements.cpp \
	../../Writer/Format/math_token_elements.cpp
}

SOURCES += \
	../../Formulas/formulasconvert_oox.cpp \
	../../Formulas/formulasconvert_odf.cpp \
	../../Common/xml/attributes.cpp \
	../../Common/xml/sax.cpp \
	../../Common/xml/sax_xmllite.cpp \
	../../Common/xml/utils.cpp \
	../../Common/xml/xmlchar.cpp \
        ../../Common/CPColorUtils.cpp \
        ../../Common/CPString.cpp \
        ../../Common/readdocelement.cpp \
        ../../Common/utils.cpp \
        ../../Common/logging.cpp \
        \
	../../Writer/Converter/Converter.cpp \
	../../Writer/Converter/ConverterChart.cpp \
	../../Writer/Converter/ConvertVml.cpp \
	../../Writer/Converter/DocxConverter.cpp \
	../../Writer/Converter/MathConverter.cpp \
	../../Writer/Converter/XlsxConverter.cpp \
	../../Writer/Converter/ConvertDrawing.cpp \
	../../Writer/Converter/PptxConverter.cpp


HEADERS += \
        ../../Reader/Format/odf_document.h \
        ../../Reader/Format/abstract_xml.h \
	../../Reader/Format/all_elements.h \
	../../Reader/Format/anim_elements.h \
	../../Reader/Format/calcs_styles.h \
	../../Reader/Format/chart_build_oox.h \
	../../Reader/Format/chart_objects.h \
	../../Reader/Format/documentcontext.h \
	../../Reader/Format/draw_common.h \
	../../Reader/Format/draw_frame.h \
	../../Reader/Format/draw_page.h \
	../../Reader/Format/draw_shapes.h \
	../../Reader/Format/font_face.h \
	../../Reader/Format/header_footer.h \
	../../Reader/Format/list.h \
	../../Reader/Format/note.h \
	../../Reader/Format/number_style.h \
	../../Reader/Format/odf_content_xml.h \
	../../Reader/Format/odfcontext.h \
	../../Reader/Format/odf_document_impl.h \
	../../Reader/Format/office_annotation.h \
	../../Reader/Format/office_binary_data.h \
	../../Reader/Format/office_body.h \
	../../Reader/Format/office_chart.h \
	../../Reader/Format/office_document.h \
	../../Reader/Format/office_elements.h \
	../../Reader/Format/office_elements_create.h \
	../../Reader/Format/office_elements_type.h \
	../../Reader/Format/office_event_listeners.h \
	../../Reader/Format/office_presentation.h \
	../../Reader/Format/office_scripts.h \
	../../Reader/Format/office_forms.h \
	../../Reader/Format/office_settings.h \
	../../Reader/Format/office_spreadsheet.h \
	../../Reader/Format/office_text.h \
	../../Reader/Format/office_meta.h \
	../../Reader/Format/paragraph_elements.h \
	../../Reader/Format/ruby.h \
	../../Reader/Format/search_table_cell.h \
	../../Reader/Format/serialize_elements.h \
	../../Reader/Format/skipelement.h \
	../../Reader/Format/style_chart_properties.h \
	../../Reader/Format/style_graphic_properties.h \
	../../Reader/Format/style_map.h \
	../../Reader/Format/style_paragraph_properties.h \
	../../Reader/Format/style_presentation.h \
	../../Reader/Format/style_regions.h \
	../../Reader/Format/styles.h \
	../../Reader/Format/styles_list.h \
	../../Reader/Format/styles_lite_container.h \
	../../Reader/Format/style_table_properties.h \
	../../Reader/Format/style_text_properties.h \
	../../Reader/Format/svg_parser.h \
	../../Reader/Format/table.h \
	../../Reader/Format/table_calculation_settings.h \
	../../Reader/Format/table_named_expressions.h \
	../../Reader/Format/templates.h \
	../../Reader/Format/text_content.h \
	../../Reader/Format/text_elements.h \
	../../Reader/Format/visitor.h \
	../../Reader/Format/math_elements.h \
	../../Reader/Format/math_elementaries.h \
	../../Reader/Format/math_layout_elements.h \
	../../Reader/Format/math_limit_elements.h \
	../../Reader/Format/math_table_elements.h \
	../../Reader/Format/math_token_elements.h \
	../../Reader/Format/calcext_elements.h \
	../../Reader/Format/table_database_ranges.h \
	../../DataTypes/mathvariant.h \
	../../DataTypes/anchortype.h \
	../../DataTypes/backgroundcolor.h \
	../../DataTypes/bool.h \
	../../DataTypes/bordermodel.h \
	../../DataTypes/borderstyle.h \
	../../DataTypes/borderwidths.h \
	../../DataTypes/calcext_type.h \
	../../DataTypes/chartdatalabelnumber.h \
	../../DataTypes/charterrorcategory.h \
	../../DataTypes/chartinterpolation.h \
	../../DataTypes/chartlabelarrangement.h \
	../../DataTypes/chartregressiontype.h \
	../../DataTypes/chartseriessource.h \
	../../DataTypes/chartsolidtype.h \
	../../DataTypes/chartsymbol.h \
	../../DataTypes/clockvalue.h \
	../../DataTypes/color.h \
	../../DataTypes/common_attlists.h \
	../../DataTypes/custom_shape_types_convert.h \
	../../DataTypes/direction.h \
	../../DataTypes/drawfill.h \
	../../DataTypes/dropcaplength.h \
	../../DataTypes/fillimagerefpoint.h \
	../../DataTypes/fobreak.h \
	../../DataTypes/fontfamilygeneric.h \
	../../DataTypes/fontpitch.h \
	../../DataTypes/fontrelief.h \
	../../DataTypes/fontsize.h \
	../../DataTypes/fontstretch.h \
	../../DataTypes/fontstyle.h \
	../../DataTypes/fontvariant.h \
	../../DataTypes/fontweight.h \
	../../DataTypes/gradientstyle.h \
	../../DataTypes/hatchstyle.h \
	../../DataTypes/hyphenationkeep.h \
	../../DataTypes/hyphenationladdercount.h \
	../../DataTypes/iconset_type.h \
	../../DataTypes/keeptogether.h \
	../../DataTypes/layoutgridmode.h \
	../../DataTypes/length.h \
	../../DataTypes/lengthorpercent.h \
	../../DataTypes/letterspacing.h \
	../../DataTypes/linebreak.h \
	../../DataTypes/linemode.h \
	../../DataTypes/linestyle.h \
	../../DataTypes/linetype.h \
	../../DataTypes/linewidth.h \
	../../DataTypes/markerstyle.h \
	../../DataTypes/noteclass.h \
	../../DataTypes/odfattributes.h \
	../../DataTypes/officevaluetype.h \
	../../DataTypes/pageusage.h \
	../../DataTypes/percent.h \
	../../DataTypes/percentorscale.h \
	../../DataTypes/presentationclass.h \
	../../DataTypes/punctuationwrap.h \
	../../DataTypes/rotationalign.h \
	../../DataTypes/runthrough.h \
	../../DataTypes/scripttype.h \
	../../DataTypes/shadowtype.h \
	../../DataTypes/smil_transitiontype.h \
	../../DataTypes/stylefamily.h \
	../../DataTypes/stylehorizontalpos.h \
	../../DataTypes/stylehorizontalrel.h \
	../../DataTypes/styleleadercolor.h \
	../../DataTypes/styleposition.h \
	../../DataTypes/style_ref.h \
	../../DataTypes/stylerepeat.h \
	../../DataTypes/styletype.h \
	../../DataTypes/styleverticalpos.h \
	../../DataTypes/styleverticalrel.h \
	../../DataTypes/stylewrap.h \
	../../DataTypes/stylenumformat.h \
	../../DataTypes/stylewrapcontourmode.h \
	../../DataTypes/tablealign.h \
	../../DataTypes/tablecentering.h \
	../../DataTypes/tablemode.h \
	../../DataTypes/tablevisibility.h \
	../../DataTypes/targetframename.h \
	../../DataTypes/textalign.h \
	../../DataTypes/textalignsource.h \
	../../DataTypes/textautospace.h \
	../../DataTypes/textcombine.h \
	../../DataTypes/textdisplay.h \
	../../DataTypes/textemphasize.h \
	../../DataTypes/textposition.h \
	../../DataTypes/textrotationscale.h \
	../../DataTypes/texttransform.h \
	../../DataTypes/underlinecolor.h \
	../../DataTypes/verticalalign.h \
	../../DataTypes/wrapoption.h \
	../../DataTypes/writingmode.h \
	../../DataTypes/xlink.h \
	../../DataTypes/chartlabelposition.h \
	../../DataTypes/grandtotal.h \
	../../DataTypes/styleprint.h \
	../../DataTypes/drawangle.h \
	../../DataTypes/charttimeunit.h \
	../../DataTypes/timeperiod.h \
	../../DataTypes/messagetype.h \
	../../DataTypes/stylecellprotect.h \
	../../Reader/Converter/docx_content_type.h \
	../../Reader/Converter/docx_conversion_context.h \
	../../Reader/Converter/docx_conversion_state.h \
	../../Reader/Converter/docx_drawing.h \
	../../Reader/Converter/docx_package.h \
	../../Reader/Converter/docx_table_context.h \
	../../Reader/Converter/xlsx_conditionalFormatting.h \
	../../Reader/Converter/xlsx_dxfs.h \
	../../Reader/Converter/drawing_object_description.h \
	../../Reader/Converter/headers_footers.h \
	../../Reader/Converter/hyperlinks.h \
	../../Reader/Converter/measuredigits.h \
	../../Reader/Converter/mediaitems.h \
	../../Reader/Converter/namespaces.h \
	../../Reader/Converter/oox_chart_axis.h \
	../../Reader/Converter/oox_chart_context.h \
	../../Reader/Converter/oox_chart_legend.h \
	../../Reader/Converter/oox_chart_series.h \
	../../Reader/Converter/oox_chart_shape.h \
	../../Reader/Converter/oox_chart_values.h \
	../../Reader/Converter/oox_conversion_context.h \
	../../Reader/Converter/oox_data_labels.h \
	../../Reader/Converter/oox_drawing.h \
	../../Reader/Converter/oox_drawing_fills.h \
	../../Reader/Converter/oox_layout.h \
	../../Reader/Converter/oox_package.h \
	../../Reader/Converter/oox_plot_area.h \
	../../Reader/Converter/ooxtablerowspanned.h \
	../../Reader/Converter/oox_title.h \
	../../Reader/Converter/oox_types_chart.h \
	../../Reader/Converter/oox_rels.h \
	../../Reader/Converter/pptx_comments.h \
	../../Reader/Converter/pptx_comments_context.h \
	../../Reader/Converter/pptx_conversion_context.h \
	../../Reader/Converter/pptx_default_serializes.h \
	../../Reader/Converter/pptx_drawing.h \
	../../Reader/Converter/pptx_drawings.h \
	../../Reader/Converter/pptx_output_xml.h \
	../../Reader/Converter/pptx_package.h \
	../../Reader/Converter/pptx_slide_context.h \
	../../Reader/Converter/pptx_table_context.h \
	../../Reader/Converter/pptx_text_context.h \
	../../Reader/Converter/xlsx_alignment.h \
	../../Reader/Converter/xlsx_border.h \
	../../Reader/Converter/xlsx_borders.h \
	../../Reader/Converter/xlsx_cell_format.h \
	../../Reader/Converter/xlsx_cell_style.h \
	../../Reader/Converter/xlsx_cell_styles.h \
	../../Reader/Converter/xlsx_color.h \
	../../Reader/Converter/xlsx_comments.h \
	../../Reader/Converter/xlsx_comments_context.h \
	../../Reader/Converter/xlsx_complex_number_format.h \
	../../Reader/Converter/xlsxconversioncontext.h \
	../../Reader/Converter/xlsx_defined_names.h \
	../../Reader/Converter/xlsx_drawing.h \
	../../Reader/Converter/xlsx_drawing_context.h \
	../../Reader/Converter/xlsx_drawings.h \
	../../Reader/Converter/xlsx_fill.h \
	../../Reader/Converter/xlsx_fills.h \
	../../Reader/Converter/xlsx_font.h \
	../../Reader/Converter/xlsx_fonts.h \
	../../Reader/Converter/xlsx_formula.h \
	../../Reader/Converter/xlsx_hyperlinks.h \
	../../Reader/Converter/xlsx_merge_cells.h \
	../../Reader/Converter/xlsx_numFmts.h \
	../../Reader/Converter/xlsx_num_format_context.h \
	../../Reader/Converter/xlsx_output_xml.h \
	../../Reader/Converter/xlsx_package.h \
	../../Reader/Converter/xlsx_protection.h \
	../../Reader/Converter/xlsx_row_spanned.h \
	../../Reader/Converter/xlsx_sharedstrings.h \
	../../Reader/Converter/xlsx_styles.h \
	../../Reader/Converter/xlsx_tablecontext.h \
	../../Reader/Converter/xlsx_table_metrics.h \
	../../Reader/Converter/xlsx_table_position.h \
	../../Reader/Converter/xlsx_table_state.h \
	../../Reader/Converter/xlsx_textcontext.h \
	../../Reader/Converter/xlsx_data_validation.h \
	../../Reader/Converter/xlsx_utils.h \
	../../Reader/Converter/xlsx_xf.h \
        ../../Formulas/formulasconvert.h \
        ../../Reader/Converter/conversionelement.h \
        ../../Reader/Converter/ConvertOO2OOX.h \
        ../../Common/xml/sax_xmllite.h \
        ../../Common/errors.h \
        ../../Common/logging.h \
        ../../Common/CPColorUtils.h \
        ../../Common/CPNoncopyable.h \
        ../../Common/CPOptional.h \
        ../../Common/CPScopedPtr.h \
        ../../Common/CPSharedPtr.h \
        ../../Common/CPString.h \
        ../../Common/CPWeakPtr.h \
        ../../Common/readdocelement.h \
        ../../Common/readstring.h \
        ../../Common/writedocelement.h \
        ../../Common/utf8cpp/utf8/checked.h \
        ../../Common/utf8cpp/utf8/core.h \
        ../../Common/utf8cpp/utf8/unchecked.h \
        ../../Common/utf8cpp/utf8.h \
	../../Common/xml/attributes.h \
	../../Common/xml/nodetype.h \
	../../Common/xml/sax.h \
	../../Common/xml/simple_xml_writer.h \
	../../Common/xml/utils.h \
	../../Common/xml/xmlchar.h \
	../../Common/xml/xmlelement.h \
	\
	../../Writer/Format/math_elementaries.h \
	../../Writer/Format/math_elements.h \
	../../Writer/Format/math_layout_elements.h \
	../../Writer/Format/math_limit_elements.h \
	../../Writer/Format/math_table_elements.h \
	../../Writer/Format/math_token_elements.h \
	../../Writer/Format/odf_math_context.h \
	../../Writer/Format/office_document.h \
	../../Writer/Format/abstract_xml.h \
	../../Writer/Format/calcext_elements.h \
	../../Writer/Format/draw_base.h \
	../../Writer/Format/draw_frame.h \
	../../Writer/Format/draw_shapes.h \
	../../Writer/Format/header_footer.h \
	../../Writer/Format/list.h \
	../../Writer/Format/mediaitems.h \
	../../Writer/Format/number_style.h \
	../../Writer/Format/object_package.h \
	../../Writer/Format/odf_chart_context.h \
	../../Writer/Format/odf_comment_context.h \
	../../Writer/Format/odf_notes_context.h \
	../../Writer/Format/odf_conversion_context.h \
	../../Writer/Format/odf_drawing_context.h \
	../../Writer/Format/odf_lists_styles_context.h \
	../../Writer/Format/odf_number_styles_context.h \
	../../Writer/Format/odf_page_layout_context.h \
	../../Writer/Format/odf_page_layout_state.h \
	../../Writer/Format/odf_rels.h \
	../../Writer/Format/odf_style_context.h \
	../../Writer/Format/odf_style_state.h \
	../../Writer/Format/odf_table_context.h \
	../../Writer/Format/odf_table_styles_context.h \
	../../Writer/Format/odf_text_context.h \
	../../Writer/Format/odf_controls_context.h \
	../../Writer/Format/ods_conversion_context.h \
	../../Writer/Format/ods_table_context.h \
	../../Writer/Format/ods_table_state.h \
	../../Writer/Format/odt_conversion_context.h \
	../../Writer/Format/office_annotation.h \
	../../Writer/Format/office_body.h \
	../../Writer/Format/office_chart.h \
	../../Writer/Format/office_forms.h \
	../../Writer/Format/office_elements.h \
	../../Writer/Format/office_elements_create.h \
	../../Writer/Format/office_elements_type.h \
	../../Writer/Format/office_spreadsheet.h \
	../../Writer/Format/office_text.h \
	../../Writer/Format/oox_shape_defines.h \
	../../Writer/Format/paragraph_elements.h \
	../../Writer/Format/style_chart_properties.h \
	../../Writer/Format/style_graphic_properties.h \
	../../Writer/Format/style_map.h \
	../../Writer/Format/style_page_layout_properties.h \
	../../Writer/Format/style_paragraph_properties.h \
	../../Writer/Format/styles.h \
	../../Writer/Format/style_section_properties.h \
	../../Writer/Format/styles_list.h \
	../../Writer/Format/styles_lite_container.h \
	../../Writer/Format/style_table_properties.h \
	../../Writer/Format/style_text_properties.h \
	../../Writer/Format/svg_creator.h \
	../../Writer/Format/table.h \
	../../Writer/Format/table_database_ranges.h \
	../../Writer/Format/table_named_expressions.h \
	../../Writer/Format/table_data_pilot_tables.h \
	../../Writer/Format/text_elements.h \
	../../Writer/Format/visitor.h \
	../../Writer/Format/Shapes/odf_shape_mapping.h \
	../../Writer/Format/Shapes/oox_shapeAccentCallouts.h \
	../../Writer/Format/Shapes/oox_shapeActionButtons.h \
	../../Writer/Format/Shapes/oox_shapeArrows.h \
	../../Writer/Format/Shapes/oox_shapeBents.h \
	../../Writer/Format/Shapes/oox_shapeCallouts.h \
	../../Writer/Format/Shapes/oox_shapeCharts.h \
	../../Writer/Format/Shapes/oox_shapeConnectors.h \
	../../Writer/Format/Shapes/oox_shapeCurvedArrows.h \
	../../Writer/Format/Shapes/oox_shapeCurvedConnectors.h \
	../../Writer/Format/Shapes/oox_shapeCustoms.h \
	../../Writer/Format/Shapes/oox_shapeMaths.h \
	../../Writer/Format/Shapes/oox_shapePrimitives.h \
	../../Writer/Format/Shapes/oox_shapeRibbons.h \
	../../Writer/Format/Shapes/oox_shapeSnipRoundRects.h \
	../../Writer/Format/Shapes/oox_shapeStars.h \
	../../Writer/Format/Shapes/oox_shapeWordArt.h \
	../../Writer/Format/odf_settings_context.h \
	../../Writer/Format/office_settings.h \
	../../Writer/Format/anim_elements.h \
	../../Writer/Format/draw_page.h \
	../../Writer/Format/mediaitems_utils.h \
	../../Writer/Format/odp_conversion_context.h \
	../../Writer/Format/odp_page_state.h \
	../../Writer/Format/odp_slide_context.h \
	../../Writer/Format/office_presentation.h \
	../../Writer/Format/style_presentation.h \
	../../Writer/Format/anim_elements.h \
	../../Writer/Format/office_event_listeners.h \
	../../Writer/Format/office_scripts.h \
	../../Writer/Format/style_presentation.h \
	../../Writer/Converter/Converter.h \
	../../Writer/Converter/DocxConverter.h \
	../../Writer/Converter/Oox2OdfConverter.h \
	../../Writer/Converter/VmlShapeTypes2Oox.h \
	../../Writer/Converter/XlsxConverter.h \
	../../Writer/Converter/PptxConverter.h

