@class NSImageView, NSString, NSImage, NSLayoutConstraint;

@interface PasswordGenerationImageViewWithBadge : NSView <TouchIconAndBadgeConfigurable> {
    NSImageView *_imageView;
    NSImageView *_badgeView;
    NSLayoutConstraint *_horizontalBadgeOffsetConstraint;
    NSLayoutConstraint *_verticalBadgeOffsetConstraint;
}

@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSImage *badgeImage;
@property (nonatomic) struct CGVector { double dx; double dy; } badgeOffsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)_buildView;
- (void)configureWithAppIcon:(id)a0 badge:(id)a1;

@end
