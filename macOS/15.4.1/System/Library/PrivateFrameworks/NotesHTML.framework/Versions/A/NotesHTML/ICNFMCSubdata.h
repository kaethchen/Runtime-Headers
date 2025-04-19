@class NSData;

@interface ICNFMCSubdata : NSData

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } subrange;
@property (retain, nonatomic) NSData *parentData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (void).cxx_destruct;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithContentsOfMappedFile:(id)a0;
- (id)initWithParent:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
