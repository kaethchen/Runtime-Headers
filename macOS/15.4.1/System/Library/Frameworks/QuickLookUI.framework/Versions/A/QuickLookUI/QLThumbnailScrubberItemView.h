@class NSView, NSArray, NSLayoutConstraint;

@interface QLThumbnailScrubberItemView : NSScrubberItemView

@property (retain) NSView *contentView;
@property (retain) NSView *dimmingView;
@property (retain) NSLayoutConstraint *aspectRatioConstraint;
@property (retain) NSArray *fitConstraints;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentAspectRatio:(double)a0;

@end
