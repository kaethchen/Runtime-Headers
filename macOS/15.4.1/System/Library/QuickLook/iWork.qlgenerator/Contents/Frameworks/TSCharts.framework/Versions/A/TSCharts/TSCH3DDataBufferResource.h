@interface TSCH3DDataBufferResource : TSCH3DResource

+ (id)resource;
+ (id)resourceWithBuffer:(id)a0;

- (id)description;
- (id)buffer;
- (void)setBuffer:(id)a0;
- (void)clear;
- (id)get;
- (void)setChanged:(BOOL)a0;
- (id)initWithBuffer:(id)a0;
- (void)flushMemory;

@end
