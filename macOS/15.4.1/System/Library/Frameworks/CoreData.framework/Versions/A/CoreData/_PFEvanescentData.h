@class NSURL;

@interface _PFEvanescentData : NSData {
    unsigned long long _length;
    NSURL *_fileURL;
    int _openfd;
    const void *_activeMap;
    int _mapRefCount;
}

+ (Class)classForKeyedUnarchiver;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)length;
- (const void *)bytes;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (Class)classForCoder;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)initWithURL:(id)a0;
- (void)invalidate;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (void)getBytes:(void *)a0;
- (id)initWithPath:(id)a0;
- (BOOL)isEqualToData:(id)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
