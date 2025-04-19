@class CALayer;

@interface UAOnboardingClosedCaptionsTextView : NSView {
    struct OpaqueFigSubtitleRenderer { } *_subtitleRenderer;
    CALayer *_imageLayer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateImageLayer;
- (void)_previewNeedsUpdateOnMainThread;
- (void)_figSubtitleRendererNeedsLayout:(id)a0;
- (void)_previewNeedsUpdate;
- (id)_subtitleImage;

@end
