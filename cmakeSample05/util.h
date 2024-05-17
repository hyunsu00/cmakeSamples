#ifndef __UTIL_H__
#define __UTIL_H__

#if 1
    void UNREFERENCED_PARAMETER(const wchar_t* msg);
#else
#   define UNREFERENCED_PARAMETER(P) (void)(P)
#endif

#endif // __UTIL_H__