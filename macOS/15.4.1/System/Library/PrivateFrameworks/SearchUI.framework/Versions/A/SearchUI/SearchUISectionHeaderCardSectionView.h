@class TLKSectionHeaderView;

@interface SearchUISectionHeaderCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKSectionHeaderView *contentView;

+ (BOOL)fillsBackgroundWithContentForRowModel:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
