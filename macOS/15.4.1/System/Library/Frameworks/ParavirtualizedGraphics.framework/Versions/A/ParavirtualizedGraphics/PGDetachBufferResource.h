@protocol MTLBufferSPI, PGTask_Resource;

@interface PGDetachBufferResource : PGBufferResource {
    id<PGTask_Resource> _task;
    id<MTLBufferSPI> _buffer;
    unsigned long long _bufferLength;
    unsigned int _bufferVirtualPage;
    BOOL _isReadOnly;
    BOOL _isDetached;
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
- (BOOL)needsPrepare;
- (void)prepareInEncoder:(id)a0;
- (void)setIsGuestValid:(BOOL)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
