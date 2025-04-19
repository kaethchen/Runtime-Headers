@interface PGMapping : NSObject

@property (readonly) void *virtualAddress;
@property (readonly) unsigned long long length;
@property (readonly) BOOL writable;

- (id)initWithVirtualAddress:(void *)a0 length:(unsigned long long)a1;
- (id)initWithVirtualAddress:(void *)a0 length:(unsigned long long)a1 writable:(BOOL)a2;

@end
