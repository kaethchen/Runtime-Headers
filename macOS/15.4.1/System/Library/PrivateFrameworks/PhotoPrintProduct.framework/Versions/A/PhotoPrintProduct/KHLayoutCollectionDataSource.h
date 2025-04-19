@class NSString, KHTheme;
@protocol KHLayoutCollectionDataSourceDelegate;

@interface KHLayoutCollectionDataSource : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) KHTheme *theme;
@property (weak, nonatomic) id<KHLayoutCollectionDataSourceDelegate> delegate;

- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void)refresh;
- (id)titleForSection:(long long)a0;
- (long long)physicalNumberOfItemsInSection:(long long)a0;
- (id)accessibilityValues;
- (id)accessibilityValuesForLayout:(id)a0;
- (BOOL)addLayoutAtIndexPath:(id)a0;
- (id)indexPathForLayout:(id)a0;
- (double)largestLayoutSide;
- (double)largestLayoutSideInSection:(long long)a0;
- (id)layoutAtIndexPath:(id)a0;
- (unsigned long long)layoutPlacementAtIndexPath:(id)a0;
- (id)projectLayoutAtIndexPath:(id)a0;
- (BOOL)removeLayoutAtIndexPath:(id)a0;
- (BOOL)removeLayoutsAtIndexPaths:(id)a0;
- (id)reuseIdentifierForCellAtIndexPath:(id)a0;
- (double)smallestLayoutSide;
- (unsigned long long)stateForChangeType:(unsigned long long)a0 withLayoutsAtIndexPaths:(id)a1;
- (id)subtitleForSection:(long long)a0;

@end
