@interface MusicUI.PageHeaderView : NSVisualEffectView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ notificationBadgeView;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ trailingAccessoryButton;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ clickGestureRecognizer;
    void /* unknown type, empty encoding */ showAccountButton;
    void /* unknown type, empty encoding */ userSocialProfileCoordinator;
    void /* unknown type, empty encoding */ socialGraphController;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)drawFocusRingMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)handleAccountButtonClick:(id)a0;

@end
