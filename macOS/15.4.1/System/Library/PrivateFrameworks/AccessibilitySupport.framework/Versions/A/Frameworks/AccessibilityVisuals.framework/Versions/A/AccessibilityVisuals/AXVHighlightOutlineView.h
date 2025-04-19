@class NSColor, NSArray, CAShapeLayer, NSString, NSPopover;

@interface AXVHighlightOutlineView : AXVHighlightView

@property (retain, nonatomic, setter=_setHighlightOutlineLayer:) CAShapeLayer *_highlightOutlineLayer;
@property (retain, nonatomic, setter=_setInnerHighlightOutlineLayer:) CAShapeLayer *_innerHighlightOutlineLayer;
@property (retain, nonatomic, setter=_setHighlightFillLayer:) CAShapeLayer *_highlightFillLayer;
@property (retain, nonatomic, setter=_setPreScaledRects:) NSArray *_preScaledRects;
@property (nonatomic, setter=_setPreScaledBoundingFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _preScaledBoundingFrame;
@property (retain, nonatomic, setter=_setMaskingLayer:) CAShapeLayer *_maskingLayer;
@property (retain, nonatomic, setter=_setHintPopover:) NSPopover *_hintPopover;
@property (nonatomic) BOOL hasHighlightOutline;
@property (retain, nonatomic) NSColor *outlineOuterColor;
@property (retain, nonatomic) NSColor *outlineInnerColor;
@property (nonatomic) double outlineWidth;
@property (nonatomic) double outlineRadius;
@property (retain, nonatomic) NSColor *highlightFillColor;
@property (retain, nonatomic) NSArray *highlightRects;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL screenShotWhileScaled;
@property (nonatomic) BOOL centeredInMainScreen;
@property (retain, nonatomic) NSString *hintText;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustRectForDisplay:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createDefaultShapeLayer;
- (void)_hideAndInvalidateLayers;
- (BOOL)_isValidHighlightFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })_originToCenterRectInMainWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 aroundCenter:(struct CGPoint { double x0; double x1; })a1 scaleFactor:(double)a2;
- (BOOL)_setBoundingFrameFromShape:(struct _CGSBoundingShape { } *)a0;
- (void)_setFrameWithRects:(id)a0;
- (void)_setMaskingLayerFromShape:(struct _CGSBoundingShape { } *)a0 radius:(double)a1;
- (void)_setupHintPopover;
- (BOOL)_shouldUseScreenShotLayer;
- (void)_unhideLayers;
- (void)_updateOutlineLayer:(id)a0 outerShape:(struct _CGSBoundingShape { } *)a1 innerShape:(struct _CGSBoundingShape { } *)a2 outerRadius:(double)a3 innerRadius:(double)a4;
- (void)_updateScreenShotImage;
- (id)takeScreenShotOfBoundedContent;

@end
