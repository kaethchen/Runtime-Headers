@class CABasicAnimation, NSString, CAShapeLayer;

@interface ZMVisualIndicatorRipplingView : NSView <ZMVisualIndicating>

@property (retain, nonatomic) CAShapeLayer *_ringShapeLayer;
@property (retain, nonatomic) CABasicAnimation *_growAnimation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startingBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
