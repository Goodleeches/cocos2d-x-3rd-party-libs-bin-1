#ifdef __aarch64__
#include "opensslconf-arm64.h"
#elif __arm__
#include "opensslconf-arm32.h"
#elif __i386__
#include "opensslconf-x86.h"
#elif defined(__x86_64__) || defined(__x86_64) || defined(__amd64__) || defined(__amd64) || defined(_M_X64) || defined(_M_AMD64)
#include "opensslconf-x86_64.h"
#else
#error "Unsupported architecture!"
#endif
