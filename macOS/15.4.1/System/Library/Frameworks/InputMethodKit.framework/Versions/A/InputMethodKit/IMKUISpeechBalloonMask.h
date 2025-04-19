@class NSImage;

@interface IMKUISpeechBalloonMask : IMKUIPanelMask

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } arrowFrame;
@property (retain, nonatomic) NSImage *arrowImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowOffset;

+ (id)downwardsPointingArrow;

- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)calculateFramesWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawArrowFlipped:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 degrees:(double)a2;
- (void)drawArrowUpsideDown:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 direction:(unsigned long long)a1 offset:(double)a2;

@end
