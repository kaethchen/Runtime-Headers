@class NSImageView, NSView, LPCollaborationFooterStyle, NSTrackingArea, LPTextView;

@interface LPCollaborationFooterView : LPComponentView {
    LPTextView *_optionsView;
    LPTextView *_subtitleView;
    NSImageView *_indicatorView;
    NSView *_separatorView;
    id /* block */ _action;
    LPCollaborationFooterStyle *_style;
    NSTrackingArea *_trackingArea;
    BOOL _hovered;
    BOOL _pressed;
}

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } additionalPadding;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateTrackingAreas;
- (void)_updateBackgroundColor;
- (id)initWithHost:(id)a0;
- (void)updateIndicator;
- (void)_footerTapRecognized:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutFooterForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (id)_resolvedGlyphAttachmentImageFromImage:(id)a0;
- (id)initWithHost:(id)a0 properties:(id)a1 style:(id)a2;
- (void)layoutComponentView;

@end
