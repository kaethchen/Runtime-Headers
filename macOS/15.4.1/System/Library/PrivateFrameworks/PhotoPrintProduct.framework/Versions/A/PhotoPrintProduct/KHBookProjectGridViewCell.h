@class UXImageView;

@interface KHBookProjectGridViewCell : KHProjectGridViewCell

@property (retain, nonatomic) UXImageView *gutterImageView;
@property (retain, nonatomic) UXImageView *overlayImageView;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLayoutObject:(id)a0;

@end
