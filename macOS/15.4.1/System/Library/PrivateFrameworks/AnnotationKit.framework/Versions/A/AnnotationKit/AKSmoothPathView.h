@class AKController, CHPointStrokeFIFO, NSColor, NSString, CHBoxcarFilterPointFIFO, CHQuadCurvePointFIFO, AKBitmapFIFO;
@protocol AKSmoothPathViewDelegate;

@interface AKSmoothPathView : NSView <CHPointFIFODrawingTarget> {
    double _cachedEffectiveStrokeWidthInModel;
}

@property BOOL applyModelBaseScaleFactorToStroke;
@property (nonatomic) BOOL startedTouchDrawing;
@property BOOL isAddingPointWithoutSmoothing;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } singleDotRect;
@property double shadowRadiusInModel;
@property double shadowRadiusInView;
@property double cachedModelToViewScale;
@property (nonatomic) double minPressure;
@property (nonatomic) double maxPressure;
@property (nonatomic) double minThickness;
@property (nonatomic) double maxThickness;
@property (retain, nonatomic) CHPointStrokeFIFO *strokeFIFO;
@property (retain, nonatomic) CHBoxcarFilterPointFIFO *smoothingFIFO;
@property (retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) AKBitmapFIFO *bitmapFifo;
@property (weak) AKController *controller;
@property double currentWeight;
@property BOOL disableSingleDotSpecialCase;
@property double singleDotCurrentSize;
@property (retain) id<AKSmoothPathViewDelegate> delegate;
@property (nonatomic) BOOL prestrokedOutputMode;
@property (retain, nonatomic) NSColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (nonatomic) BOOL hasShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newSmoothPathViewForCurrentPlatformWithController:(id)a0;

- (void).cxx_destruct;
- (void)teardown;
- (void)awakeFromNib;
- (void)commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithController:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)_clear;
- (id)drawing;
- (void)continueStroke:(SEL)a0;
- (void)continueStrokeWithoutSmoothing:(SEL)a0;
- (void)terminateStroke;
- (double)weightForValue:(double)a0;
- (BOOL)_catchUpAccumulatedTouchesForRecognizer:(id)a0;
- (double)_convertValueFromModelToSelf:(double)a0;
- (double)_effectiveStrokeWidthInModel;
- (struct CGContext { } *)_getPlatformCGContext;
- (void /* unknown type, empty encoding */)_pointForRecognizer:(id)a0;
- (void)_setupFilterChainWithBitmapFifo:(BOOL)a0;
- (void)_setupShadowInContext:(struct CGContext { } *)a0;
- (void)_updateInterpolatingFifoLineWidth;
- (void)_updateShadowRadiusInView;
- (double)_windowBackingScaleFactor;
- (void)callDelegate;
- (void)handleDragAction:(id)a0;
- (void)handleForwardedEvent:(id)a0;
- (void)handleTapAction:(id)a0;
- (void)startStroke;
- (void)updateInterpolatingFifoUnitScale;

@end
