@class TLKLabel, NUIContainerBoxView;

@interface SearchUITitleCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKLabel *label;
@property (retain, nonatomic) NUIContainerBoxView *containerView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
