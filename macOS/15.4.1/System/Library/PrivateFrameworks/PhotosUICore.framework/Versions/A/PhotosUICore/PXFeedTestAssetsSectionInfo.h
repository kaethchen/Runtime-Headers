@class NSArray;

@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo

@property (readonly, nonatomic) NSArray *plAssets;

- (void).cxx_destruct;
- (long long)sectionType;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_fetchPhotoAssets:(long long)a0;
- (id)assetForItemAtIndex:(long long)a0;
- (id)countsByAssetDisplayType;
- (long long)typeForItemAtIndex:(long long)a0;

@end
