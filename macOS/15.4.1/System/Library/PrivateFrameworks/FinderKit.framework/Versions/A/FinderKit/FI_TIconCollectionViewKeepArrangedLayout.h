@interface FI_TIconCollectionViewKeepArrangedLayout : NSCollectionViewFlowLayout {
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _columnOffsets;
}

@property (nonatomic, getter=isJustifiedLayout) BOOL justifiedLayout;
@property (readonly, nonatomic) unsigned long long columnOffsetCount;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (id)_adjustItemLayoutAttributes:(id)a0 byXOffset:(double)a1;
- (void)setInterItemSpacingForIconSize:(const struct CGSize { double x0; double x1; } *)a0 titleOnBottom:(BOOL)a1;

@end
