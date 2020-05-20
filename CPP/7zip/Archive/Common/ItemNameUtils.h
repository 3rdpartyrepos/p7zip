// Archive/Common/ItemNameUtils.h

#ifndef __ARCHIVE_ITEM_NAME_UTILS_H
#define __ARCHIVE_ITEM_NAME_UTILS_H

#include "../../../Common/MyString.h"

namespace NArchive {
namespace NItemName {

//@@@@@ BEGIN REMOVE BLOCK
  void ReplaceToOsPathSeparator(wchar_t *s);

  UString MakeLegalName(const UString &name);
  UString GetOSName(const UString &name);
  UString GetOSName2(const UString &name);
  void ConvertToOSName2(UString &name);
//@@@@@ END REMOVE BLOCK

void ReplaceSlashes_OsToUnix(UString &name);
  
UString GetOsPath(const UString &name);
UString GetOsPath_Remove_TailSlash(const UString &name);
  
void ReplaceToOsSlashes_Remove_TailSlash(UString &name);

  bool HasTailSlash(const AString &name, UINT codePage);

//@@@@@ BEGIN REMOVE BLOCK
  #ifdef _WIN32
  inline UString WinNameToOSName(const UString &name)  { return name; }
  #else
  UString WinNameToOSName(const UString &name);
  #endif
//@@@@@ END REMOVE BLOCK

#ifdef _WIN32
  inline UString WinPathToOsPath(const UString &name)  { return name; }
#else
  UString WinPathToOsPath(const UString &name);
#endif

}}

#endif
