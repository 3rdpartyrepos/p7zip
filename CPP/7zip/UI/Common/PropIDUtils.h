// PropIDUtils.h

#ifndef __PROPID_UTILS_H
#define __PROPID_UTILS_H

#include "../../../Common/MyString.h"

//@@@@@ BEGIN REMOVE BLOCK
void ConvertPropertyToShortString(char *dest, const PROPVARIANT &propVariant, PROPID propID, bool full = true) throw();
void ConvertPropertyToString(UString &dest, const PROPVARIANT &propVariant, PROPID propID, bool full = true);
//@@@@@ END REMOVE BLOCK

// provide at least 64 bytes for buffer including zero-end
void ConvertPropertyToShortString2(char *dest, const PROPVARIANT &propVariant, PROPID propID, int level = 0) throw();
void ConvertPropertyToString2(UString &dest, const PROPVARIANT &propVariant, PROPID propID, int level = 0);

bool ConvertNtReparseToString(const Byte *data, UInt32 size, UString &s);
void ConvertNtSecureToString(const Byte *data, UInt32 size, AString &s);
bool CheckNtSecure(const Byte *data, UInt32 size) throw();;

void ConvertWinAttribToString(char *s, UInt32 wa) throw();

#endif
