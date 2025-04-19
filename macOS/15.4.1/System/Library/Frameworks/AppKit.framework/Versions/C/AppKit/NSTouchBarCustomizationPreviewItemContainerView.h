@class NSString, NSView, NSRoundedDashStrokeView, NSTouchBarCustomizationPreviewDeletionLabel;

@interface NSTouchBarCustomizationPreviewItemContainerView : NSView {
    NSView *_contentView;
    NSView *_redOverlayView;
    NSView *_blueOverlayView;
    NSView *_greyOverlayView;
    NSRoundedDashStrokeView *_dashedOverlayView;
    long long _state;
    NSTouchBarCustomizationPreviewDeletionLabel *_deletionLabel;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _itemTransform;
}

@property (retain) NSView *contentView;
@property long long state;
@property (copy) NSString *deletionLabelString;
@property struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } itemTransform;

- (void)dealloc;
- (void)_updatePresentationForCurrentStateAnimated:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0 animated:(BOOL)a1;
- (void)willRemoveSubview:(id)a0;

@end
