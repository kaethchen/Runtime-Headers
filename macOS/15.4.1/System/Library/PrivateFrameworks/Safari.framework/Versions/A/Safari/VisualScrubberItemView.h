@class NSView, NSString, _VisualScrubberItemViewAccessibilityWrapper;

@interface VisualScrubberItemView : NSScrubberItemView {
    NSView *_lighteningLayerView;
    NSView *_tintOverlayView;
    _VisualScrubberItemViewAccessibilityWrapper *_accessibilityWrapper;
}

@property (retain, nonatomic) NSView *innerView;
@property (copy, nonatomic) NSString *contentSizeObservationKey;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAccessibilityTitle:(id)a0;
- (void)_addInnerViewObservers;
- (void)_clearInnerViewObservers;
- (struct CGSize { double x0; double x1; })_innerViewSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTint;
- (void)setInnerView:(id)a0 contentSizeObservationKey:(id)a1;

@end
