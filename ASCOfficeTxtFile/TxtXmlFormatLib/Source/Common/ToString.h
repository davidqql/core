#pragma once
#ifndef UTILITY_TO_STRING_INCLUDE_H_
#define UTILITY_TO_STRING_INCLUDE_H_

#include <string>
#include <wchar.h>

const std::string ToString(const bool value);
const std::string ToString(const int value);
const std::string ToString(const size_t value);
const std::string ToString(const double value);
const std::string ToString(const std::string& value);
const std::string ToString(const char* value);
const std::string ToString(const std::wstring& value);
const std::string ToString(const wchar_t* value);

const std::wstring ToWString(const bool value);
const std::wstring ToWString(const int value);
const std::wstring ToWString(const size_t value);
const std::wstring ToWString(const double value);
const std::wstring ToWString(const std::string& value);
const std::wstring ToWString(const char* value);
const std::wstring ToWString(const std::wstring& value);
const std::wstring ToWString(const wchar_t* value);

template<class T> const std::string ToString(const T& value) {return value.ToString();}
template<class T> const std::wstring ToWString(const T& value) {return value.ToWString();}

#endif // UTILITY_TO_STRING_INCLUDE_H_