@class UXImageView;

@interface KHCalendarProjectGridViewCell : KHProjectGridViewCell

@property (retain, nonatomic) UXImageView *wireImageView;
@property (retain, nonatomic) UXImageView *holeImageView;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTitleTextForLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hoverStateTrackingRect;
- (double)selectedZPosition;
- (void)setLayoutObject:(id)a0;
- (double)unselectedZPosition;

@end
