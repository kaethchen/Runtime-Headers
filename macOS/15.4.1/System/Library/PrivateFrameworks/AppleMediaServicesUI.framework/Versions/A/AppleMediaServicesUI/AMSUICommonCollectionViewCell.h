@class NSColor, AMSUICommonView;

@interface AMSUICommonCollectionViewCell : NSCollectionViewItem

@property (readonly) AMSUICommonView *contentView;
@property (retain) NSColor *tintColor;

- (id)init;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_setup;
- (void)layoutSubviews;
- (void)loadView;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)viewWillLayout;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFitting:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;

@end
