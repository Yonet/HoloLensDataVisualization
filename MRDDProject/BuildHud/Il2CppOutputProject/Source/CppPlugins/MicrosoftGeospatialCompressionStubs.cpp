// Empty function file for solving static linking errors when building WSA applications 

#pragma once

#include <stddef.h>
#include <stdint.h>

#define EXTERN_API extern "C"

// JpegXR functions

EXTERN_API int JPEGXR_Decompress(void* source, int srcLength, void* dst, int dstLength) { return 0; }

// Basis Universal functions

EXTERN_API int BASIS_CompressPNG(void* pngData, int dataLength, int quality, int compressionLevel, int mipmap, uint8_t** compressedData, int* compressedSize) { return 0; }

EXTERN_API int BASIS_CompressRGBA32(void* rgbaData, int width, int height, int quality, int compressionLevel, int mipmap, uint8_t** compressedData, int* compressedSize) { return 0; }

EXTERN_API int BASIS_CompressBGRA32(void* bgraData, int width, int height, int quality, int compressionLevel, int mipmap, uint8_t** compressedData, int* compressedSize) { return 0; }

EXTERN_API int BASIS_Transcode(void* source, int srcLength, int textureFormat, uint8_t* output, int* transcodedSize) { return 0; }

EXTERN_API void BASIS_ReleaseData(uint8_t* data) {}


// ZStandard functions

EXTERN_API void* ZSTD_createCCtx() { return nullptr; }

EXTERN_API size_t ZSTD_freeCCtx(void* cctx) { return 0; }

EXTERN_API void* ZSTD_createDCtx() { return nullptr; }

EXTERN_API size_t ZSTD_freeDCtx(void* cctx) { return 0; }

EXTERN_API size_t ZSTD_compressCCtx(void* ctx, void* dst, size_t dstCapacity, void* src, size_t srcSize, int compressionLevel) { return 0; }

EXTERN_API size_t ZSTD_decompressDCtx(void* ctx, void* dst, size_t dstCapacity, void* src, size_t srcSize) { return 0; }

EXTERN_API void* ZSTD_createCDict(void* dict, size_t dictSize, int compressionLevel) { return nullptr; }

EXTERN_API size_t ZSTD_freeCDict(void* cdict) { return 0; }

EXTERN_API size_t ZSTD_compress_usingCDict(void* cctx, void* dst, size_t dstCapacity, void* src, size_t srcSize, void* cdict) { return 0; }

EXTERN_API void* ZSTD_createDDict(void* dict, size_t dictSize) { return nullptr; }

EXTERN_API size_t ZSTD_freeDDict(void* ddict) { return 0; }

EXTERN_API size_t ZSTD_decompress_usingDDict(void* dctx, void* dst, size_t dstCapacity, void* src, size_t srcSize, void* ddict) { return 0; }

EXTERN_API void* ZSTD_getDecompressedSize(void* src, size_t srcSize) { return nullptr; }

EXTERN_API int ZSTD_maxCLevel() { return 0; }

EXTERN_API size_t ZSTD_compressBound(size_t srcSize) { return 0; }

EXTERN_API uint32_t ZSTD_isError(size_t code) { return 0; }

EXTERN_API void* ZSTD_getErrorName(size_t code) { return nullptr; }