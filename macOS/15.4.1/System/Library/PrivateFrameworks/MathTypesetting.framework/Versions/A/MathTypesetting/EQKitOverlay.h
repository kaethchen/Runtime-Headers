@class NSMutableArray, EQKitBox;

@interface EQKitOverlay : NSObject

@property (readonly, nonatomic) NSMutableArray *overlayBoxes;
@property (readonly, nonatomic) EQKitBox *box;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } erasableBounds;
@property (readonly, nonatomic) double scale;

- (void)renderIntoContext:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (void)addErasableBounds;
- (void)addOpticalAlignForEdge:(unsigned int)a0 config:(id)a1;
- (void)addOpticalAlignWithMinimumDistance:(double)a0;
- (void)addOverlayBox:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithLayout:(id)a0 scale:(double)a1;
- (id)pLineBoxFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1 withWithRGBA:(double *)a2 scale:(double)a3;
- (id)pOpticalAlignOverlayBoxesForBox:(id)a0 topLevelBox:(id)a1 minDistance:(double)a2;

@end
