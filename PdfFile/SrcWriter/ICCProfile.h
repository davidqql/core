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
 /*
 *  Licensing ICC v2 sRGB profile
 *
 * The copyright owner and terms of use of an ICC profile are normally identified 
 * in the Creator field in the profile header and in the Copyright tag. Where ICC 
 * is the copyright owner, the following license terms apply:
 *
 * "This profile is made available by the International Color Consortium, and may 
 * be copied, distributed, embedded, made, used, and sold without restriction. 
 * Altered versions of this profile shall have the original identification and 
 * copyright information removed and shall not be misrepresented as the original 
 * profile."
 *
 * http://www.color.org/profiles2.xalter#license
 */
 
#ifndef _PDF_WRITER_SRC_ICCPROFILE_H
#define _PDF_WRITER_SRC_ICCPROFILE_H
namespace PdfWriter
{
static const char c_arrICCsRGB[] = {0, 0, 11, -48, 0, 0, 0, 0, 2, 0, 0, 0, 109, 110, 116, 114, 82, 71, 66, 32, 88, 89, 90, 32, 7, -33, 0, 2, 0, 15, 0, 0, 0, 0, 0, 0, 97, 99, 115, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -10, -42, 0, 1, 0, 0, 0, 0, -45, 45, 0, 0, 0, 0, 61, 14, -78, -34, -82, -109, -105, -66, -101, 103, 38, -50, -116, 10, 67, -50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 100, 101, 115, 99, 0, 0, 1, 68, 0, 0, 0, 99, 98, 88, 89, 90, 0, 0, 1, -88, 0, 0, 0, 20, 98, 84, 82, 67, 0, 0, 1, -68, 0, 0, 8, 12, 103, 84, 82, 67, 0, 0, 1, -68, 0, 0, 8, 12, 114, 84, 82, 67, 0, 0, 1, -68, 0, 0, 8, 12, 100, 109, 100, 100, 0, 0, 9, -56, 0, 0, 0, -120, 103, 88, 89, 90, 0, 0, 10, 80, 0, 0, 0, 20, 108, 117, 109, 105, 0, 0, 10, 100, 0, 0, 0, 20, 109, 101, 97, 115, 0, 0, 10, 120, 0, 0, 0, 36, 98, 107, 112, 116, 0, 0, 10, -100, 0, 0, 0, 20, 114, 88, 89, 90, 0, 0, 10, -80, 0, 0, 0, 20, 116, 101, 99, 104, 0, 0, 10, -60, 0, 0, 0, 12, 118, 117, 101, 100, 0, 0, 10, -48, 0, 0, 0, -121, 119, 116, 112, 116, 0, 0, 11, 88, 0, 0, 0, 20, 99, 112, 114, 116, 0, 0, 11, 108, 0, 0, 0, 55, 99, 104, 97, 100, 0, 0, 11, -92, 0, 0, 0, 44, 100, 101, 115, 99, 0, 0, 0, 0, 0, 0, 0, 9, 115, 82, 71, 66, 50, 48, 49, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 90, 32, 0, 0, 0, 0, 0, 0, 36, -96, 0, 0, 15, -124, 0, 0, -74, -49, 99, 117, 114, 118, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 10, 0, 15, 0, 20, 0, 25, 0, 30, 0, 35, 0, 40, 0, 45, 0, 50, 0, 55, 0, 59, 0, 64, 0, 69, 0, 74, 0, 79, 0, 84, 0, 89, 0, 94, 0, 99, 0, 104, 0, 109, 0, 114, 0, 119, 0, 124, 0, -127, 0, -122, 0, -117, 0, -112, 0, -107, 0, -102, 0, -97, 0, -92, 0, -87, 0, -82, 0, -78, 0, -73, 0, -68, 0, -63, 0, -58, 0, -53, 0, -48, 0, -43, 0, -37, 0, -32, 0, -27, 0, -21, 0, -16, 0, -10, 0, -5, 1, 1, 1, 7, 1, 13, 1, 19, 1, 25, 1, 31, 1, 37, 1, 43, 1, 50, 1, 56, 1, 62, 1, 69, 1, 76, 1, 82, 1, 89, 1, 96, 1, 103, 1, 110, 1, 117, 1, 124, 1, -125, 1, -117, 1, -110, 1, -102, 1, -95, 1, -87, 1, -79, 1, -71, 1, -63, 1, -55, 1, -47, 1, -39, 1, -31, 1, -23, 1, -14, 1, -6, 2, 3, 2, 12, 2, 20, 2, 29, 2, 38, 2, 47, 2, 56, 2, 65, 2, 75, 2, 84, 2, 93, 2, 103, 2, 113, 2, 122, 2, -124, 2, -114, 2, -104, 2, -94, 2, -84, 2, -74, 2, -63, 2, -53, 2, -43, 2, -32, 2, -21, 2, -11, 3, 0, 3, 11, 3, 22, 3, 33, 3, 45, 3, 56, 3, 67, 3, 79, 3, 90, 3, 102, 3, 114, 3, 126, 3, -118, 3, -106, 3, -94, 3, -82, 3, -70, 3, -57, 3, -45, 3, -32, 3, -20, 3, -7, 4, 6, 4, 19, 4, 32, 4, 45, 4, 59, 4, 72, 4, 85, 4, 99, 4, 113, 4, 126, 4, -116, 4, -102, 4, -88, 4, -74, 4, -60, 4, -45, 4, -31, 4, -16, 4, -2, 5, 13, 5, 28, 5, 43, 5, 58, 5, 73, 5, 88, 5, 103, 5, 119, 5, -122, 5, -106, 5, -90, 5, -75, 5, -59, 5, -43, 5, -27, 5, -10, 6, 6, 6, 22, 6, 39, 6, 55, 6, 72, 6, 89, 6, 106, 6, 123, 6, -116, 6, -99, 6, -81, 6, -64, 6, -47, 6, -29, 6, -11, 7, 7, 7, 25, 7, 43, 7, 61, 7, 79, 7, 97, 7, 116, 7, -122, 7, -103, 7, -84, 7, -65, 7, -46, 7, -27, 7, -8, 8, 11, 8, 31, 8, 50, 8, 70, 8, 90, 8, 110, 8, -126, 8, -106, 8, -86, 8, -66, 8, -46, 8, -25, 8, -5, 9, 16, 9, 37, 9, 58, 9, 79, 9, 100, 9, 121, 9, -113, 9, -92, 9, -70, 9, -49, 9, -27, 9, -5, 10, 17, 10, 39, 10, 61, 10, 84, 10, 106, 10, -127, 10, -104, 10, -82, 10, -59, 10, -36, 10, -13, 11, 11, 11, 34, 11, 57, 11, 81, 11, 105, 11, -128, 11, -104, 11, -80, 11, -56, 11, -31, 11, -7, 12, 18, 12, 42, 12, 67, 12, 92, 12, 117, 12, -114, 12, -89, 12, -64, 12, -39, 12, -13, 13, 13, 13, 38, 13, 64, 13, 90, 13, 116, 13, -114, 13, -87, 13, -61, 13, -34, 13, -8, 14, 19, 14, 46, 14, 73, 14, 100, 14, 127, 14, -101, 14, -74, 14, -46, 14, -18, 15, 9, 15, 37, 15, 65, 15, 94, 15, 122, 15, -106, 15, -77, 15, -49, 15, -20, 16, 9, 16, 38, 16, 67, 16, 97, 16, 126, 16, -101, 16, -71, 16, -41, 16, -11, 17, 19, 17, 49, 17, 79, 17, 109, 17, -116, 17, -86, 17, -55, 17, -24, 18, 7, 18, 38, 18, 69, 18, 100, 18, -124, 18, -93, 18, -61, 18, -29, 19, 3, 19, 35, 19, 67, 19, 99, 19, -125, 19, -92, 19, -59, 19, -27, 20, 6, 20, 39, 20, 73, 20, 106, 20, -117, 20, -83, 20, -50, 20, -16, 21, 18, 21, 52, 21, 86, 21, 120, 21, -101, 21, -67, 21, -32, 22, 3, 22, 38, 22, 73, 22, 108, 22, -113, 22, -78, 22, -42, 22, -6, 23, 29, 23, 65, 23, 101, 23, -119, 23, -82, 23, -46, 23, -9, 24, 27, 24, 64, 24, 101, 24, -118, 24, -81, 24, -43, 24, -6, 25, 32, 25, 69, 25, 107, 25, -111, 25, -73, 25, -35, 26, 4, 26, 42, 26, 81, 26, 119, 26, -98, 26, -59, 26, -20, 27, 20, 27, 59, 27, 99, 27, -118, 27, -78, 27, -38, 28, 2, 28, 42, 28, 82, 28, 123, 28, -93, 28, -52, 28, -11, 29, 30, 29, 71, 29, 112, 29, -103, 29, -61, 29, -20, 30, 22, 30, 64, 30, 106, 30, -108, 30, -66, 30, -23, 31, 19, 31, 62, 31, 105, 31, -108, 31, -65, 31, -22, 32, 21, 32, 65, 32, 108, 32, -104, 32, -60, 32, -16, 33, 28, 33, 72, 33, 117, 33, -95, 33, -50, 33, -5, 34, 39, 34, 85, 34, -126, 34, -81, 34, -35, 35, 10, 35, 56, 35, 102, 35, -108, 35, -62, 35, -16, 36, 31, 36, 77, 36, 124, 36, -85, 36, -38, 37, 9, 37, 56, 37, 104, 37, -105, 37, -57, 37, -9, 38, 39, 38, 87, 38, -121, 38, -73, 38, -24, 39, 24, 39, 73, 39, 122, 39, -85, 39, -36, 40, 13, 40, 63, 40, 113, 40, -94, 40, -44, 41, 6, 41, 56, 41, 107, 41, -99, 41, -48, 42, 2, 42, 53, 42, 104, 42, -101, 42, -49, 43, 2, 43, 54, 43, 105, 43, -99, 43, -47, 44, 5, 44, 57, 44, 110, 44, -94, 44, -41, 45, 12, 45, 65, 45, 118, 45, -85, 45, -31, 46, 22, 46, 76, 46, -126, 46, -73, 46, -18, 47, 36, 47, 90, 47, -111, 47, -57, 47, -2, 48, 53, 48, 108, 48, -92, 48, -37, 49, 18, 49, 74, 49, -126, 49, -70, 49, -14, 50, 42, 50, 99, 50, -101, 50, -44, 51, 13, 51, 70, 51, 127, 51, -72, 51, -15, 52, 43, 52, 101, 52, -98, 52, -40, 53, 19, 53, 77, 53, -121, 53, -62, 53, -3, 54, 55, 54, 114, 54, -82, 54, -23, 55, 36, 55, 96, 55, -100, 55, -41, 56, 20, 56, 80, 56, -116, 56, -56, 57, 5, 57, 66, 57, 127, 57, -68, 57, -7, 58, 54, 58, 116, 58, -78, 58, -17, 59, 45, 59, 107, 59, -86, 59, -24, 60, 39, 60, 101, 60, -92, 60, -29, 61, 34, 61, 97, 61, -95, 61, -32, 62, 32, 62, 96, 62, -96, 62, -32, 63, 33, 63, 97, 63, -94, 63, -30, 64, 35, 64, 100, 64, -90, 64, -25, 65, 41, 65, 106, 65, -84, 65, -18, 66, 48, 66, 114, 66, -75, 66, -9, 67, 58, 67, 125, 67, -64, 68, 3, 68, 71, 68, -118, 68, -50, 69, 18, 69, 85, 69, -102, 69, -34, 70, 34, 70, 103, 70, -85, 70, -16, 71, 53, 71, 123, 71, -64, 72, 5, 72, 75, 72, -111, 72, -41, 73, 29, 73, 99, 73, -87, 73, -16, 74, 55, 74, 125, 74, -60, 75, 12, 75, 83, 75, -102, 75, -30, 76, 42, 76, 114, 76, -70, 77, 2, 77, 74, 77, -109, 77, -36, 78, 37, 78, 110, 78, -73, 79, 0, 79, 73, 79, -109, 79, -35, 80, 39, 80, 113, 80, -69, 81, 6, 81, 80, 81, -101, 81, -26, 82, 49, 82, 124, 82, -57, 83, 19, 83, 95, 83, -86, 83, -10, 84, 66, 84, -113, 84, -37, 85, 40, 85, 117, 85, -62, 86, 15, 86, 92, 86, -87, 86, -9, 87, 68, 87, -110, 87, -32, 88, 47, 88, 125, 88, -53, 89, 26, 89, 105, 89, -72, 90, 7, 90, 86, 90, -90, 90, -11, 91, 69, 91, -107, 91, -27, 92, 53, 92, -122, 92, -42, 93, 39, 93, 120, 93, -55, 94, 26, 94, 108, 94, -67, 95, 15, 95, 97, 95, -77, 96, 5, 96, 87, 96, -86, 96, -4, 97, 79, 97, -94, 97, -11, 98, 73, 98, -100, 98, -16, 99, 67, 99, -105, 99, -21, 100, 64, 100, -108, 100, -23, 101, 61, 101, -110, 101, -25, 102, 61, 102, -110, 102, -24, 103, 61, 103, -109, 103, -23, 104, 63, 104, -106, 104, -20, 105, 67, 105, -102, 105, -15, 106, 72, 106, -97, 106, -9, 107, 79, 107, -89, 107, -1, 108, 87, 108, -81, 109, 8, 109, 96, 109, -71, 110, 18, 110, 107, 110, -60, 111, 30, 111, 120, 111, -47, 112, 43, 112, -122, 112, -32, 113, 58, 113, -107, 113, -16, 114, 75, 114, -90, 115, 1, 115, 93, 115, -72, 116, 20, 116, 112, 116, -52, 117, 40, 117, -123, 117, -31, 118, 62, 118, -101, 118, -8, 119, 86, 119, -77, 120, 17, 120, 110, 120, -52, 121, 42, 121, -119, 121, -25, 122, 70, 122, -91, 123, 4, 123, 99, 123, -62, 124, 33, 124, -127, 124, -31, 125, 65, 125, -95, 126, 1, 126, 98, 126, -62, 127, 35, 127, -124, 127, -27, -128, 71, -128, -88, -127, 10, -127, 107, -127, -51, -126, 48, -126, -110, -126, -12, -125, 87, -125, -70, -124, 29, -124, -128, -124, -29, -123, 71, -123, -85, -122, 14, -122, 114, -122, -41, -121, 59, -121, -97, -120, 4, -120, 105, -120, -50, -119, 51, -119, -103, -119, -2, -118, 100, -118, -54, -117, 48, -117, -106, -117, -4, -116, 99, -116, -54, -115, 49, -115, -104, -115, -1, -114, 102, -114, -50, -113, 54, -113, -98, -112, 6, -112, 110, -112, -42, -111, 63, -111, -88, -110, 17, -110, 122, -110, -29, -109, 77, -109, -74, -108, 32, -108, -118, -108, -12, -107, 95, -107, -55, -106, 52, -106, -97, -105, 10, -105, 117, -105, -32, -104, 76, -104, -72, -103, 36, -103, -112, -103, -4, -102, 104, -102, -43, -101, 66, -101, -81, -100, 28, -100, -119, -100, -9, -99, 100, -99, -46, -98, 64, -98, -82, -97, 29, -97, -117, -97, -6, -96, 105, -96, -40, -95, 71, -95, -74, -94, 38, -94, -106, -93, 6, -93, 118, -93, -26, -92, 86, -92, -57, -91, 56, -91, -87, -90, 26, -90, -117, -90, -3, -89, 110, -89, -32, -88, 82, -88, -60, -87, 55, -87, -87, -86, 28, -86, -113, -85, 2, -85, 117, -85, -23, -84, 92, -84, -48, -83, 68, -83, -72, -82, 45, -82, -95, -81, 22, -81, -117, -80, 0, -80, 117, -80, -22, -79, 96, -79, -42, -78, 75, -78, -62, -77, 56, -77, -82, -76, 37, -76, -100, -75, 19, -75, -118, -74, 1, -74, 121, -74, -16, -73, 104, -73, -32, -72, 89, -72, -47, -71, 74, -71, -62, -70, 59, -70, -75, -69, 46, -69, -89, -68, 33, -68, -101, -67, 21, -67, -113, -66, 10, -66, -124, -66, -1, -65, 122, -65, -11, -64, 112, -64, -20, -63, 103, -63, -29, -62, 95, -62, -37, -61, 88, -61, -44, -60, 81, -60, -50, -59, 75, -59, -56, -58, 70, -58, -61, -57, 65, -57, -65, -56, 61, -56, -68, -55, 58, -55, -71, -54, 56, -54, -73, -53, 54, -53, -74, -52, 53, -52, -75, -51, 53, -51, -75, -50, 54, -50, -74, -49, 55, -49, -72, -48, 57, -48, -70, -47, 60, -47, -66, -46, 63, -46, -63, -45, 68, -45, -58, -44, 73, -44, -53, -43, 78, -43, -47, -42, 85, -42, -40, -41, 92, -41, -32, -40, 100, -40, -24, -39, 108, -39, -15, -38, 118, -38, -5, -37, -128, -36, 5, -36, -118, -35, 16, -35, -106, -34, 28, -34, -94, -33, 41, -33, -81, -32, 54, -32, -67, -31, 68, -31, -52, -30, 83, -30, -37, -29, 99, -29, -21, -28, 115, -28, -4, -27, -124, -26, 13, -26, -106, -25, 31, -25, -87, -24, 50, -24, -68, -23, 70, -23, -48, -22, 91, -22, -27, -21, 112, -21, -5, -20, -122, -19, 17, -19, -100, -18, 40, -18, -76, -17, 64, -17, -52, -16, 88, -16, -27, -15, 114, -15, -1, -14, -116, -13, 25, -13, -89, -12, 52, -12, -62, -11, 80, -11, -34, -10, 109, -10, -5, -9, -118, -8, 25, -8, -88, -7, 56, -7, -57, -6, 87, -6, -25, -5, 119, -4, 7, -4, -104, -3, 41, -3, -70, -2, 75, -2, -36, -1, 109, -1, -1, 100, 101, 115, 99, 0, 0, 0, 0, 0, 0, 0, 46, 73, 69, 67, 32, 54, 49, 57, 54, 54, 45, 50, 45, 49, 32, 68, 101, 102, 97, 117, 108, 116, 32, 82, 71, 66, 32, 67, 111, 108, 111, 117, 114, 32, 83, 112, 97, 99, 101, 32, 45, 32, 115, 82, 71, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 90, 32, 0, 0, 0, 0, 0, 0, 98, -103, 0, 0, -73, -123, 0, 0, 24, -38, 88, 89, 90, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 109, 101, 97, 115, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 88, 89, 90, 32, 0, 0, 0, 0, 0, 0, 0, -98, 0, 0, 0, -92, 0, 0, 0, -121, 88, 89, 90, 32, 0, 0, 0, 0, 0, 0, 111, -94, 0, 0, 56, -11, 0, 0, 3, -112, 115, 105, 103, 32, 0, 0, 0, 0, 67, 82, 84, 32, 100, 101, 115, 99, 0, 0, 0, 0, 0, 0, 0, 45, 82, 101, 102, 101, 114, 101, 110, 99, 101, 32, 86, 105, 101, 119, 105, 110, 103, 32, 67, 111, 110, 100, 105, 116, 105, 111, 110, 32, 105, 110, 32, 73, 69, 67, 32, 54, 49, 57, 54, 54, 45, 50, 45, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 90, 32, 0, 0, 0, 0, 0, 0, -10, -42, 0, 1, 0, 0, 0, 0, -45, 45, 116, 101, 120, 116, 0, 0, 0, 0, 67, 111, 112, 121, 114, 105, 103, 104, 116, 32, 73, 110, 116, 101, 114, 110, 97, 116, 105, 111, 110, 97, 108, 32, 67, 111, 108, 111, 114, 32, 67, 111, 110, 115, 111, 114, 116, 105, 117, 109, 44, 32, 50, 48, 49, 53, 0, 0, 115, 102, 51, 50, 0, 0, 0, 0, 0, 1, 12, 68, 0, 0, 5, -33, -1, -1, -13, 38, 0, 0, 7, -108, 0, 0, -3, -113, -1, -1, -5, -95, -1, -1, -3, -94, 0, 0, 3, -37, 0, 0, -64, 117};
static const unsigned int c_nSizeICCsRGB = 3024;
}
#endif //_PDF_WRITER_SRC_ICCPROFILE_H
