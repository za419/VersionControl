// Crossplatform.h: Simple wrappers to increase cross-platform compatibility

#ifndef CROSSPLATFORM_H
#include <cstdlib>

// First, a shim for mkdir
#if defined(_WIN32)
#include <direct.h>
int mkdir(const char* dirname) {
	return _mkdir(dirname);
}
#else
#include <sys/stat.h>
#endif
#endif // !CROSSPLATFORM_H
