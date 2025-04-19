@protocol MTLTexture, PGTask_Resource;

@interface PGMapperRefTextureResource : PGResource {
    id<MTLTexture> _texture;
    unsigned long long _mappingID;
    id<PGTask_Resource> _task;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTask:(id)a0 mappingID:(unsigned long long)a1 texture:(id)a2;
- (BOOL)supportsDiscard;
- (void)ensurePhysical;
- (id)getResource;
- (id)getTexture;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
