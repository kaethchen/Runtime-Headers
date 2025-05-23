@class NSDictionary;

@interface GKSectionMetrics : GKGridLayoutMetrics

@property (nonatomic) double calculatedItemHeightCache;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double marginBetweenItems;
@property (nonatomic) double desiredItemWidth;
@property (nonatomic) double flowColumnWidth;
@property (nonatomic) BOOL useViewSizeForFlowMaxColumnCount;
@property (nonatomic) unsigned long long flowMaxColumnCount;
@property (nonatomic) double desiredItemHeight;
@property (readonly, nonatomic) double calculatedItemHeight;
@property (retain, nonatomic) NSDictionary *itemHeightList;
@property (nonatomic) unsigned long long lastLineItemAlignment;
@property (nonatomic) unsigned long long maximumVisibleItemCount;
@property (nonatomic) unsigned long long incrementalRevealItemCount;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) double showMoreHeight;
@property (nonatomic) BOOL sectionHeadersShouldPin;
@property (nonatomic) BOOL incrementalRevealConsumesPadding;
@property (nonatomic) BOOL shouldAlwaysIncludeShowMore;
@property (nonatomic) BOOL shouldShowSectionHeadersWhenNoItems;

+ (id)metricsForIdiom:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdiom:(int)a0;
- (unsigned long long)flowMaxColumnCountForViewWidth:(double)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCollectionView:(id)a0;
- (id)localDescription;

@end
