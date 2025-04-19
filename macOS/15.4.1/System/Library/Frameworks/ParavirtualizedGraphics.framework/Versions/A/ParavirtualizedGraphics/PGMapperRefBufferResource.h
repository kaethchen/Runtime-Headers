@protocol MTLBufferSPI, PGTask_Resource;

@interface PGMapperRefBufferResource : PGBufferResource {
    id<MTLBufferSPI> _buffer;
    unsigned long long _mappingID;
    id<PGTask_Resource> _task;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)discard;
- (BOOL)needsSync;
- (BOOL)supportsDiscard;
- (void)ensurePhysical;
- (id)getBuffer;
- (id)getResource;
- (id)initWithTask:(id)a0 descriptor:(const struct { unsigned long long x0; } *)a1 placement:(union { unsigned long long x0; struct { unsigned long long x0; unsigned long long x1; } x1; } *)a2;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
