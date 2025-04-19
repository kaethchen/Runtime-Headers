@class KHProject, NSArray;

@interface KHProjectLayoutsDataSource : KHLayoutCollectionDataSource

@property (readonly, nonatomic) KHProject *project;
@property (readonly, nonatomic) NSArray *collectionLayouts;

+ (id)dataSourceWithProject:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)title;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)initWithProject:(id)a0;
- (void)changeTheme:(id)a0 product:(id)a1 parameters:(id)a2;
- (id)indexPathForProjectLayoutIndex:(unsigned long long)a0;
- (id)accessibilityValues;
- (id)indexPathForLayout:(id)a0;
- (id)indexesForLayoutsWithPlacements:(id)a0;
- (id)layoutAtIndexPath:(id)a0;
- (unsigned long long)layoutPlacementAtIndexPath:(id)a0;
- (unsigned long long)projectIndexForIndexPath:(id)a0;
- (void)resetCollectionLayouts;

@end
