@class PXMonthsLayoutMetrics, NSIndexSet, PXMonthsLayoutGenerator;

@interface PXMonthsSublayoutComposition : PXGGeneratedSublayoutComposition {
    NSIndexSet *_indexesOfChapterHeaders;
    NSIndexSet *_indexesOfHeroes;
    PXMonthsLayoutGenerator *_layoutGenerator;
}

@property (copy, nonatomic) PXMonthsLayoutMetrics *metrics;
@property (readonly, nonatomic) BOOL presentedSingleColumn;

- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })sublayoutInsetsForStylableType:(long long)a0;
- (id)configuredLayoutGenerator;
- (void)updateSublayoutAttributes;

@end
