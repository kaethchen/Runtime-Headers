@interface PXGOverlayTextureManager : NSObject

@property (readonly, nonatomic) BOOL wantsOverlayTextures;

- (id)overlayTexturesByPresentationTypeForTextures:(id)a0 spriteDataStore:(id)a1;

@end
