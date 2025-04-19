@class TLKActivityIndicatorView;

@interface SearchUIActivityIndicatorCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKActivityIndicatorView *contentView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
