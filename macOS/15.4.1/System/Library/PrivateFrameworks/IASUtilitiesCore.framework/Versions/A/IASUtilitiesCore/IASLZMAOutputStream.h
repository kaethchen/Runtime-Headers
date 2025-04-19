@interface IASLZMAOutputStream : IASOutputStream

@property (nonatomic) struct { char *x0; unsigned long long x1; unsigned long long x2; char *x3; unsigned long long x4; unsigned long long x5; struct *x6; struct lzma_internal_s *x7; void *x8; void *x9; void *x10; void *x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; int x16; int x17; } *stream;
@property (nonatomic) BOOL endOfFile;
@property (nonatomic) BOOL closed;
@property (nonatomic) char *writeBuffer;
@property (nonatomic) unsigned int writeBufferCapacity;
@property (nonatomic) struct { unsigned long long x0; void *x1; } *filters;
@property (nonatomic) struct { unsigned int dict_size; char *preset_dict; unsigned int preset_dict_size; unsigned int lc; unsigned int lp; unsigned int pb; int mode; unsigned int nice_len; int mf; unsigned int depth; unsigned int ext_flags; unsigned int ext_size_low; unsigned int ext_size_high; unsigned int reserved_int4; unsigned int reserved_int5; unsigned int reserved_int6; unsigned int reserved_int7; unsigned int reserved_int8; int reserved_enum1; int reserved_enum2; int reserved_enum3; int reserved_enum4; void *reserved_ptr1; void *reserved_ptr2; } options;
@property (nonatomic) int compressionLevel;
@property (nonatomic) long long integrityCheck;

- (id)init;
- (void)close;
- (BOOL)hasSpaceAvailable;
- (void)open;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)currentLZMAErrorWithReturnValue:(int)a0;

@end
