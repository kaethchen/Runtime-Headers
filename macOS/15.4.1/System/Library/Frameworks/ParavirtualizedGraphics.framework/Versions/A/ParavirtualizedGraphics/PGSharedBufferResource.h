@protocol MTLBuffer, PGTask_Resource;

@interface PGSharedBufferResource : PGBufferResource {
    id<PGTask_Resource> _task;
    id<MTLBuffer> _buffer;
    unsigned long long _bufferLength;
    unsigned int _bufferVirtualPage;
}

- (void)dealloc;
- (void)discard;
- (BOOL)needsSync;
- (void)ensurePhysical;
- (id)getBuffer;
- (id)getResource;
- (id)initWithTask:(id)a0 descriptor:(const struct { unsigned long long x0; unsigned int x1; union { unsigned char x0; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x1; } x2; } *)a1 placement:(union { unsigned long long x0; struct { unsigned long long x0; unsigned long long x1; } x1; } *)a2;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
