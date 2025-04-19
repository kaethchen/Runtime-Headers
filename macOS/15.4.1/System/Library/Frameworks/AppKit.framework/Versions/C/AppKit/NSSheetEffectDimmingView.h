@class NSPointerArray, NSMapTable, NSVisualEffectView;

@interface NSSheetEffectDimmingView : NSView {
    NSMapTable *_percentShownMapping;
    NSPointerArray *_observedViews;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _reservedRect;
    double _maskBackingScaleFactor;
    NSVisualEffectView *_topView;
    NSVisualEffectView *_mlView;
    NSVisualEffectView *_mcView;
    NSVisualEffectView *_mrView;
    NSVisualEffectView *_bottomView;
}

- (void)dealloc;
- (BOOL)isShown;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_adjustMaterialFrames;
- (double)_effectivePercentShown;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_observedViewsReservedRect;
- (void)_rebuildMask;
- (void)_updateMask;
- (id)_viewsToPunchOutForWindow:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)contributingMoveHelpers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (BOOL)updatePercentShown:(double)a0 forMoveHelper:(id)a1;

@end
