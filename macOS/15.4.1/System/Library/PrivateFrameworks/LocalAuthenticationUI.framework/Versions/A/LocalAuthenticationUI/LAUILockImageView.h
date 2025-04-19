@class NSImageView, CAShapeLayer, NSImage, NSLayoutConstraint;

@interface LAUILockImageView : NSView {
    NSImageView *_badgeImageView;
    NSLayoutConstraint *_badgeImageViewTopConstraint;
    NSLayoutConstraint *_badgeImageViewRightConstraint;
    NSLayoutConstraint *_badgeImageViewBottomConstraint;
    CAShapeLayer *_badgeMask;
    NSImage *_customLockImage;
    struct CGPoint { double x; double y; } _badgeOffset;
    BOOL _isActive;
    NSImageView *_lockImageView;
    long long _style;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupView;
- (id)_imageForLayer:(struct { char x0[100]; char x1[100]; int x2; int x3; })a0;
- (void)setCustomLockImage:(id)a0 badgeOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_resizeBadgeMask;
- (void)_setStyle:(long long)a0 active:(BOOL)a1 forced:(BOOL)a2;
- (id)_tintColor:(int)a0;
- (void)_updateLockIconInsets;
- (void)setStyle:(long long)a0 active:(BOOL)a1;

@end
