@interface PhotosUICore.OneUpSharePlayDataSource : PXAssetsDataSource {
    void /* unknown type, empty encoding */ assets;
    void /* unknown type, empty encoding */ transientAssetCollection;
    void /* unknown type, empty encoding */ hostIdentifier;
}

@property (nonatomic, readonly) long long numberOfSections;

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForAssetReference:(id)a0;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)indexPathForDisplayAsset:(id)a0 hintIndexPath:(id)a1;

@end
