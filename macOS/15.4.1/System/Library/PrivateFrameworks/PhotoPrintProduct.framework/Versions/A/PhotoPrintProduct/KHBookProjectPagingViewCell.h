@class UXImageView, NSMutableArray;

@interface KHBookProjectPagingViewCell : KHProjectPagingViewCell

@property (readonly, nonatomic) UXImageView *decorationImageView;
@property (readonly, nonatomic) UXImageView *shadowImageView;
@property (readonly, nonatomic) UXImageView *overlayImageView;
@property (retain, nonatomic) NSMutableArray *decorationConstraints;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateDecorationConstraintsForProjectLayouts:(id)a0;
- (void)configureAccessoryButton:(id)a0 forLayout:(id)a1 atIndex:(unsigned long long)a2;
- (void)configureDecorations;
- (void)updateDecorationsForProjectLayouts:(id)a0;

@end
