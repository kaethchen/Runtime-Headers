@class NCMaterialLayer;

@interface NCTexturedView : NSVisualEffectView <NCMaterialDelegate> {
    NCMaterialLayer *_materialLayer;
    BOOL _darkLook;
    unsigned char _style;
}

@property (nonatomic) BOOL textureVisible;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (BOOL)_shouldAutoFlattenLayerTree;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)appearanceChanged:(BOOL)a0;
- (void)_createBackdropLayers;
- (void)_setupAppearance:(BOOL)a0 style:(unsigned char)a1;
- (void)materialChanged:(unsigned char)a0;

@end
