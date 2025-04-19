@class NSArray;

@interface PXSyntheticAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) NSArray *assetsBySection;
@property (readonly, nonatomic) NSArray *assetCollections;

- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectID:(id)a0;
- (id)initWithAssetsBySection:(id)a0 assetCollections:(id)a1;
- (id)initWithConfigurationBlock:(id /* block */)a0;

@end
