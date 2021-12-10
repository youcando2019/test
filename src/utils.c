#include <utils.h>

Byte20 Byte20_init()
{
	Byte20 ret;
	ret.magic = 0x46546C67; // "glTF"

	ret.version = 1;

	ret.length;

	ret.contentLength;

	ret.contentFormat;

	return ret;
}
