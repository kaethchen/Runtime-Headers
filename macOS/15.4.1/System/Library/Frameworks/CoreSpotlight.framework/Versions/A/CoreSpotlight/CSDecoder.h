@class NSData;

@interface CSDecoder : NSObject <CSCoderData>

@property (readonly, nonatomic) struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } obj;
@property (readonly, nonatomic) struct __CFAllocator { } *contentDeallocator;
@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) id backingStore;

+ (id)decodeURLPreservingSecurityScope:(id)a0;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)decode;
- (id)decodeObject:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a0;
- (id)decodeObjectNoCopy:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a0;
- (id)initWithData:(id)a0 obj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a1;

@end
