@interface EncryptedBuffer : NSObject {
    unsigned int _magic;
    unsigned char _key[16];
    unsigned long long _size;
    unsigned long long _pageSize;
    unsigned int _pageCount;
    unsigned int _firstPageInBuffer;
    char *_pageEncryptBits;
    char *_pageTempBuffer;
    long long _logicalSize;
    char *_baseAddress;
    void /* function */ *_ivProc;
    void *_ivProcRefcon;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_file;
    unsigned long long _fileSize;
    BOOL _cacheDirty;
    unsigned int _cachedPageCount;
}

@property unsigned short options;

- (void)dealloc;
- (void)decrypt;
- (unsigned long long)_cachePage:(unsigned int)a0;
- (unsigned long long)_decryptRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)_writeCurrentCacheBlock;
- (id)initWithFileAtURL:(id)a0 pageSize:(unsigned long long)a1 key:(const char *)a2 options:(unsigned short)a3;
- (id)initWithSize:(unsigned long long)a0 pageSize:(unsigned long long)a1 key:(const char *)a2 options:(unsigned short)a3;
- (void)setIVProc:(void /* function */ *)a0 withContext:(void *)a1;

@end
