@class NSMutableDictionary, GKCollectionViewDataSource, GKSectionMetrics, NSMutableIndexSet, NSMutableArray, GKCollectionViewLayoutAttributes, NSSet, NSMutableOrderedSet, NSPointerArray, GKDataSourceMetrics, NSMutableSet, NSArray, NSIndexPath;

@interface GKGridLayout : NSUICollectionViewLayout

@property (retain, nonatomic) NSPointerArray *sectionToPresentationData;
@property (retain, nonatomic) NSPointerArray *sectionToMetricData;
@property (retain, nonatomic) NSMutableArray *laidOutAttributes;
@property (retain, nonatomic) NSMutableOrderedSet *laidOutPinnableAttributes;
@property (nonatomic) struct CGSize { double width; double height; } laidOutContentSize;
@property (nonatomic) struct CGSize { double width; double height; } oldLaidOutContentSize;
@property (nonatomic) struct CGSize { double width; double height; } minimumLaidOutContentSize;
@property (retain, nonatomic) NSMutableDictionary *indexPathToSupplementary;
@property (retain, nonatomic) NSMutableDictionary *indexPathToDecoration;
@property (retain, nonatomic) NSMutableDictionary *indexPathToItem;
@property (retain, nonatomic) NSMutableDictionary *oldIndexPathToSupplementary;
@property (retain, nonatomic) NSMutableDictionary *oldIndexPathToDecoration;
@property (retain, nonatomic) NSMutableDictionary *oldIndexPathToItem;
@property (retain, nonatomic) NSMutableDictionary *indexPathToMetrics;
@property (retain, nonatomic) NSMutableIndexSet *sectionsWithPinnedHeaders;
@property (retain, nonatomic) NSMutableSet *revealedIndexPaths;
@property (retain, nonatomic) NSIndexPath *indexPathOfTouchedShowMore;
@property (nonatomic) BOOL noMoreShowMore;
@property (retain, nonatomic) NSMutableDictionary *keyToMetricData;
@property (retain, nonatomic) NSMutableDictionary *oldSectionToMetricKeys;
@property (nonatomic) long long metricsInvalidationCount;
@property (retain, nonatomic) NSArray *currentUpdateItems;
@property (retain, nonatomic) NSMutableSet *knownSupplementaryKinds;
@property (retain, nonatomic) GKCollectionViewDataSource *dataSourceForUpdate;
@property (nonatomic) unsigned long long updateType;
@property (nonatomic) BOOL movedItemsInUpdateCarrySections;
@property (nonatomic) BOOL displayClipView;
@property (retain, nonatomic) GKCollectionViewLayoutAttributes *clipViewAttributes;
@property (nonatomic) unsigned long long invalidationFlags;
@property (nonatomic) BOOL displayingOverlay;
@property (nonatomic) double segmentedBoxY;
@property (nonatomic) BOOL shouldLayoutRTL;
@property (retain, nonatomic) NSSet *visibleIndexPathsFilter;
@property (retain, nonatomic) GKSectionMetrics *defaultSectionMetricsInternal;
@property (retain, nonatomic) GKDataSourceMetrics *dataSourceMetrics;
@property (nonatomic) double hiddenSearchBarOffset;
@property (nonatomic) double segmentedHeaderPinningOffset;
@property (nonatomic) BOOL showPlaceholder;
@property (nonatomic) unsigned long long portraitInterleavedSectionsCount;
@property (nonatomic) unsigned long long landscapeInterleavedSectionsCount;
@property (nonatomic) double leftLayoutGuideOffset;
@property (nonatomic) double rightLayoutGuideOffset;
@property (nonatomic) BOOL hideSearchBarOnAppear;
@property (nonatomic) BOOL hideAboveSegmentOnAppear;
@property (nonatomic) double bottomContentPadding;
@property (nonatomic) BOOL ignoreBoundsForSizeCalculation;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (id)init;
- (void).cxx_destruct;
- (double)scale;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_resetState;
- (long long)searchResultsCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutBounds;
- (void)updatePlaceholderVisibility;
- (BOOL)shouldUpdateVisibleCellLayoutAttributes;
- (id)metricDataForKey:(id)a0;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (void)disableClipView;
- (id)_existingPresentationDataForSection:(long long)a0;
- (void)_filterPinnedAttributes;
- (unsigned long long)_prepareItemLayoutForSection:(long long)a0;
- (long long)_prepareOverlayLayoutForSection:(long long)a0 offset:(long long)a1;
- (void)_prepareSegmentedBoxLayoutWithOffset:(long long)a0;
- (long long)_prepareSupplementaryLayoutForSection:(long long)a0 atLocation:(unsigned long long)a1 offset:(long long)a2 globalOffset:(long long *)a3;
- (struct CGSize { double x0; double x1; })_sizeAdjustedForTabBarSettingsBasedOnSize:(struct CGSize { double x0; double x1; })a0;
- (double)applyBottomPinningToAttributes:(id)a0 minY:(double)a1 maxY:(double)a2;
- (double)applyTopPinningToAttributes:(id)a0 minY:(double)a1 maxY:(double)a2;
- (id)attributesForSupplementaryIndexPath:(id)a0;
- (void)calculateCollectionViewContentSize;
- (double)calculatedBottomPaddingForSection:(long long)a0;
- (unsigned long long)currentMaxVisibleItemCountForSection:(long long)a0;
- (void)enableClipView;
- (void)enumerateSectionsIndexesOverlappingYOffset:(double)a0 block:(id /* block */)a1;
- (unsigned long long)filteredTotalItemCountForSection:(long long)a0;
- (id)finalLayoutAttributesForSlidingAwayItemAtIndexPath:(id)a0;
- (void)finalizeGlobalPresentationDataWithSectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)finalizePinnedAttributes:(id)a0 forSection:(long long)a1 footer:(BOOL)a2;
- (id)firstVisibleIndexAtOrAfterItem:(long long)a0 itemCount:(long long)a1 inSection:(long long)a2;
- (void)forceFullInvalidate;
- (void)fullyRebuildLayout;
- (long long)indexOfSupplementaryMetricsOfKind:(id)a0 inList:(id)a1;
- (id)initialLayoutAttributesForSlidingInItemAtIndexPath:(id)a0;
- (double)layoutBottomPinningAttributes:(id)a0 minY:(double)a1 maxY:(double)a2;
- (double)layoutTopPinningAttributes:(id)a0 minY:(double)a1 maxY:(double)a2;
- (id)metricDataForSection:(long long)a0;
- (id)metricsForSection:(long long)a0;
- (void)prepareForMovingItemsCarryingSections;
- (void)prepareForUpdate:(unsigned long long)a0 inDataSource:(id)a1;
- (id)presentationDataForSection:(long long)a0;
- (void)refreshMetrics;
- (id)revealMoreForSectionIndex:(long long)a0;
- (id)revealMoreForSectionIndex:(long long)a0 revealCount:(unsigned long long)a1 andDeleteItemCount:(unsigned long long)a2;
- (unsigned long long)sectionsPerRow;
- (void)setMetricData:(id)a0 forSection:(long long)a1;
- (BOOL)shouldSlideInSupplementaryElementOfKind:(id)a0 forUpdateItem:(id)a1 atIndexPath:(id)a2;
- (BOOL)shouldSlideOutSupplementaryElementOfKind:(id)a0 forUpdateItem:(id)a1 atIndexPath:(id)a2;
- (void)updatePinnableAreas;
- (void)updatePresentationDataForLastInterleavedSections;
- (void)updatePresentationDataInSection:(long long)a0 withAttributes:(id)a1 supplementaryLocation:(unsigned long long)a2;
- (double)yOffsetForSection:(long long)a0;
- (double)yOffsetForSlidingUpdate;

@end
