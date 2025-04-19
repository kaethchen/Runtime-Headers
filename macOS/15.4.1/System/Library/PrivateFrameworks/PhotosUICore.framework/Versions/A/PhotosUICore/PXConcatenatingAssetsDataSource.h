@interface PXConcatenatingAssetsDataSource : PXAssetsDataSource {
    void /* unknown type, empty encoding */ underlyingDataSources;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numberOfUnderlyingSections;
}

@property (nonatomic, readonly) long long numberOfSections;

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)assetAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForAssetReference:(id)a0;
- (id)assetReferenceForAssetReference:(id)a0;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)startingAssetReference;

@end
