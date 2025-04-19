@class NSString;

@interface ICCollaboratorAvatarView : NSView {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ fetchImage;
    void /* unknown type, empty encoding */ hasDisplayedInWindow;
    void /* unknown type, empty encoding */ isRemovingFromSuperview;
    void /* unknown type, empty encoding */ autocollapseTimer;
    void /* unknown type, empty encoding */ autohideTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageViewTopConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageViewBottomConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageViewLeadingConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageViewWidthConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labelWidthConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labelHeightConstraint;
}

@property (class, nonatomic, readonly) double animationDuration;
@property (class, nonatomic, readonly) double animationSpringDamping;
@property (class, nonatomic, readonly) double contentHeight;

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ color;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ boundingSuperview;
@property (nonatomic) void /* unknown type, empty encoding */ frameAnchorPoint;
@property (nonatomic) void /* unknown type, empty encoding */ frameAnchorIsInverted;
@property (nonatomic) void /* unknown type, empty encoding */ isExpanded;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewDidMoveToWindow;
- (void)removeFromSuperviewAnimatedWithCompletion:(id /* block */)a0;
- (void)setIsExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)updateWithoutAnimation;

@end
