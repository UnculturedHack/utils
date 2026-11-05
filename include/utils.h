#pragma once

#include <string>
#include "framework.h"

#if defined(UTILS_EXPORTS)
#define UTILS_API __declspec(dllexport)
#else
#define UTILS_API __declspec(dllimport)
#endif

namespace utils
{
	UTILS_API void loadTxtFile(const char* const acpTxtFilePath, std::string& aLoadedText);
	UTILS_API void printfDbg(const char* apMsgF, ...);
	UTILS_API void errMsg(HWND aWinHdl, const char* const apText, const char* const apCaption);
}