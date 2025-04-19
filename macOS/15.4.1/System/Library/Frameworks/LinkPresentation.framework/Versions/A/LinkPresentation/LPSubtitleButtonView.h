@class LPCaptionButtonPresentationProperties, NSImageView, NSTrackingArea, LPTextViewStyle, LPTextView;

@interface LPSubtitleButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_buttonProperties;
    LPTextViewStyle *_style;
    NSTrackingArea *_trackingArea;
    BOOL _hovered;
    BOOL _pressed;
    LPTextView *_textView;
    NSImageView *_imageView;
}

- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (double)firstBaselineOffsetFromTop;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)updateTrackingAreas;
- (void)_updateBackgroundColor;
- (id)initWithHost:(id)a0;
- (void)_buildSubviewsIfNeeded;
- (struct CGSize { double x0; double x1; })_layoutButtonForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (id)initWithHost:(id)a0 buttonProperties:(id)a1 style:(id)a2;
- (void)layoutComponentView;

@end
