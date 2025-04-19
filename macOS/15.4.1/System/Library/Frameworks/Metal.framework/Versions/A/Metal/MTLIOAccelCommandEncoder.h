@interface MTLIOAccelCommandEncoder : _MTLCommandEncoder

- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;
- (unsigned long long)globalTraceObjectID;
- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (id)initWithCommandBuffer:(id)a0;

@end
