@class GKSupplementaryViewMetrics, GKSectionMetrics;
@protocol NSUICollectionViewDataSource;

@interface GKCollectionViewLayoutAttributes : NSUICollectionViewLayoutAttributes

@property (nonatomic) BOOL isPartOfGlobalPinningGroup;
@property (nonatomic) unsigned long long gridLayoutLocation;
@property (nonatomic) BOOL doesAbutLeftOfCollectionView;
@property (nonatomic) BOOL allSectionItemsVisible;
@property (nonatomic) BOOL isPinned;
@property (nonatomic) double unpinnedY;
@property (retain, nonatomic) id<NSUICollectionViewDataSource> dataSource;
@property (retain, nonatomic) GKSectionMetrics *sectionMetrics;
@property (retain, nonatomic) GKSupplementaryViewMetrics *supplementaryMetrics;
@property (nonatomic) unsigned long long currentVisibleItemCount;
@property (nonatomic) unsigned long long currentTotalItemCount;
@property (nonatomic) unsigned long long maxTotalItemCount;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
