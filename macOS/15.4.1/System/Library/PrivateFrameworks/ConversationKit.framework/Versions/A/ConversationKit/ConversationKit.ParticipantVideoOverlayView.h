@interface ConversationKit.ParticipantVideoOverlayView : NSView {
    void /* unknown type, empty encoding */ visualEffectView;
    void /* unknown type, empty encoding */ imageAndLabelContainer;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ labelView;
    void /* unknown type, empty encoding */ imageViewWidthConstraint;
    void /* unknown type, empty encoding */ imageViewHeightConstraint;
    void /* unknown type, empty encoding */ monogramView;
    void /* unknown type, empty encoding */ spinnerView;
    void /* unknown type, empty encoding */ snapshotView;
    void /* unknown type, empty encoding */ wantsAlphaAnimation;
    void /* unknown type, empty encoding */ isInRoster;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
