@protocol MTLTexture;

@interface PGSharedTextureResource : PGResource {
    id<MTLTexture> _texture;
    unsigned int _sharedTextureBackingID;
}

- (void)dealloc;
- (void)discard;
- (BOOL)supportsDiscard;
- (void)ensurePhysical;
- (id)getResource;
- (unsigned int)getSharedTextureBackingID;
- (id)getTexture;
- (id)initWithTask:(id)a0 texture:(id)a1 sharedTextureBackingID:(unsigned int)a2;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
