@class NSArray, CAShapeLayer, CALayer, NSColor;
@protocol NSObject;

@interface AXVCutoutWindow : AXVOverlayWindow

@property (retain, nonatomic, setter=_setCutoutFramesInWindowCoordinates:) NSArray *_cutoutFramesInWindowCoordinates;
@property (retain, nonatomic, setter=_setCutoutFramesInScreenCoordinates:) NSArray *_cutoutFramesInScreenCoordinates;
@property (nonatomic) BOOL _cutoutFramesAreSpecifiedInScreenCoordinates;
@property (retain, nonatomic) CALayer *_cutoutLayer;
@property (retain, nonatomic) CAShapeLayer *_cutoutMaskShapeLayer;
@property (retain, nonatomic) CALayer *_backdropLayer;
@property (retain, nonatomic) CALayer *_backdropMaskLayer;
@property (retain, nonatomic) CAShapeLayer *_backdropAlphaMaskShapeLayer;
@property (retain, nonatomic) id<NSObject> _windowMoveObservation;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cutoutFrameInWindowCoordinates;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cutoutFrameInScreenCoordinates;
@property (retain, nonatomic) NSArray *cutoutFramesInWindowCoordinates;
@property (retain, nonatomic) NSArray *cutoutFramesInScreenCoordinates;
@property (readonly, nonatomic) unsigned long long cutoutCount;
@property (retain, nonatomic) NSColor *cutoutColor;
@property (retain, nonatomic) NSColor *backdropColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double padding;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)setBackgroundColor:(id)a0;
- (void)_updateShapesBasedOnCutoutFramesInWindowCoordinates:(id)a0;

@end
