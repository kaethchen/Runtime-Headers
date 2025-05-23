@class PHFetchResult;

@interface PXTransientCollectionsDataSource : PXCollectionsDataSource

@property (readonly, nonatomic) PHFetchResult *fetchResult;

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithFetchResult:(id)a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)collectionAtIndexPath:(id)a0;
- (id)collectionListForSection:(long long)a0;
- (id)indexPathForCollection:(id)a0;

@end
