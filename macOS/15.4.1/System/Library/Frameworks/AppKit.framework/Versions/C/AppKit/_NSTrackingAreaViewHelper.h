@class NSArray;

@interface _NSTrackingAreaViewHelper : NSObject

@property (readonly) BOOL areCursorRectsValid;
@property (readonly) NSArray *trackingAreas;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (id)_resetCursorRects;
- (void)addCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cursor:(id)a1;
- (void)addTrackingArea:(id)a0;
- (long long)addTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 owner:(id)a1 userData:(void *)a2 assumeInside:(BOOL)a3;
- (long long)addTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 owner:(id)a1 userData:(void *)a2 assumeInside:(BOOL)a3 useTrackingNum:(long long)a4;
- (void)addTrackingRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 owner:(id)a1 userDataList:(void **)a2 assumeInsideList:(BOOL *)a3 trackingNums:(long long *)a4 count:(long long)a5;
- (void)cursorUpdate:(id)a0 forwardingBlock:(id /* block */)a1;
- (void)disableTrackingArea:(id)a0;
- (void)disableTrackingRectsIfHidden;
- (void)discardCursorRects;
- (void)enableOrDisableTrackingAreas;
- (void)enableTrackingArea:(id)a0;
- (void)enableTrackingRectsIfNotHidden;
- (id)initWithView:(id)a0;
- (void)invalidateCursorRects;
- (id)pressureConfigurationTrackingAreaCreateIfNeeded:(BOOL)a0;
- (void)removeCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cursor:(id)a1;
- (void)removeTrackingArea:(id)a0;
- (void)removeTrackingRect:(long long)a0;
- (void)removeTrackingRects:(long long *)a0 count:(long long)a1;
- (id)revertGestureRecognizerPressureConfigurationForEvent:(id)a0;
- (void)setTrackingAreas:(id)a0;
- (void)setTrackingAreasDirty:(long long)a0;
- (BOOL)shouldUseTrackingAreasForToolTips;
- (void)synchronizeEffectivePressureConfiguration;
- (void)trackingAreaRootDidChange;
- (void)trackingAreaRootWillChange;
- (long long)trackingAreasDirty;
- (void)updateTrackingAreasWithInvalidCursorRects:(BOOL)a0;

@end
