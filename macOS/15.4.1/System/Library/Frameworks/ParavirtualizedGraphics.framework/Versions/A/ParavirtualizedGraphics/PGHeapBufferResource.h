@protocol MTLBuffer;

@interface PGHeapBufferResource : PGBufferResource {
    id<MTLBuffer> _buffer;
}

- (void)dealloc;
- (void)discard;
- (id)initWithBuffer:(id)a0;
- (BOOL)needsSync;
- (BOOL)supportsDiscard;
- (id)getBuffer;
- (id)getResource;
- (BOOL)needsPrepare;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
