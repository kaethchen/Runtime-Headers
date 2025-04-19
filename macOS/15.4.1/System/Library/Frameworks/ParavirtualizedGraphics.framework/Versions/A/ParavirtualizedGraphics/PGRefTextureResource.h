@class PGBackingResource;
@protocol MTLTexture;

@interface PGRefTextureResource : PGResource {
    id<MTLTexture> _texture;
    PGBackingResource *_backing;
}

- (void)dealloc;
- (void)evictInEncoder:(id)a0;
- (void)setIsHostValid:(BOOL)a0;
- (BOOL)supportsDiscard;
- (id)getResource;
- (id)getTexture;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 texture:(id)a2 backing:(id)a3;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)setIsGuestValid:(BOOL)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
