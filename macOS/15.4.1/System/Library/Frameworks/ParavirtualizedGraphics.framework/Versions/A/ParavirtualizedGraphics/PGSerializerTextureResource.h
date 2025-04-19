@protocol MTLTexture;

@interface PGSerializerTextureResource : PGResource {
    id<MTLTexture> _texture;
}

- (void)dealloc;
- (void)discard;
- (id)initWithTexture:(id)a0;
- (BOOL)supportsDiscard;
- (id)getResource;
- (id)getTexture;
- (BOOL)needsComputePaging;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
