@class PXPhotosSearchBodyContainerInfo;

@interface _PXPhotosSearchBodyCollectionSectionLayout : PXGSingleViewLayout <PhotosUICore.PhotosSearchResultsCollectionsViewDelegate>

@property (readonly, nonatomic) PXPhotosSearchBodyContainerInfo *containerInfo;

- (id)init;
- (void).cxx_destruct;
- (id)axGroup;
- (id)axSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)referenceSizeDidChange;
- (void)searchResultsCollectionsViewSizeDidChange;

@end
