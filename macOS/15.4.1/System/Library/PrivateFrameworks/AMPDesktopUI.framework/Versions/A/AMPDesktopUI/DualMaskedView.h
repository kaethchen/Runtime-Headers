@class CALayer;

@interface DualMaskedView : NSView {
    BOOL _leftMaskActive;
}

@property (weak, nonatomic) CALayer *leftMaskLayer;
@property (weak, nonatomic) CALayer *middleMaskLayer;
@property (weak, nonatomic) CALayer *rightMaskLayer;
@property (nonatomic) double maskWidth;
@property (nonatomic) BOOL leftMaskActive;

- (id)init;
- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)awakeFromNib;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)_createGradientLayerWithLeft:(struct CGColor { } *)a0 right:(struct CGColor { } *)a1;
- (void)_createMasks;
- (void)_updateMaskForWidth:(BOOL)a0;
- (void)enableLayerActions:(BOOL)a0;
- (id)propertyKeysForViewSpy;

@end
