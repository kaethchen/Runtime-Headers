@class NSString;

@interface NSTableRowsClipView : NSClipView <CAAnimationDelegate>

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (copy) id /* block */ animationFinishedHandler;
@property double fromYPosition;
@property BOOL shouldAdjustBounds;
@property BOOL forDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setTrackingAreasDirty:(unsigned long long)a0;
- (long long)_trackingAreasDirty;
- (void)_updateBoundsForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_useZinLayerBacking;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)animationForKey:(id)a0;
- (void)cacheDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toBitmapImageRep:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setUpGState;

@end
