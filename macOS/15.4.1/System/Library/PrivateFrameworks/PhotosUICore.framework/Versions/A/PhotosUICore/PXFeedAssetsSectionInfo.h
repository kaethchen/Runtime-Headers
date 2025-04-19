@interface PXFeedAssetsSectionInfo : PXFeedSectionInfo

- (id)assets;
- (long long)sectionType;
- (BOOL)isMine;
- (unsigned long long)assetsCount;
- (id)cloudFeedAssetsEntry;
- (void)getPhotoCount:(out unsigned long long *)a0 videoCount:(out unsigned long long *)a1;
- (BOOL)containsAsset:(id)a0;
- (BOOL)hasPlayableAssetForItemAtIndex:(long long)a0;
- (BOOL)areAllAssetsLiked;
- (id)assetForItemAtIndex:(long long)a0;
- (id)batchIDForItemAtIndex:(long long)a0;
- (id)captionForItemAtIndex:(long long)a0;
- (id)commentForItemAtIndex:(long long)a0;
- (id)commentsForItemAtIndex:(long long)a0;
- (id)countsByAssetDisplayType;
- (long long)indexOfFirstItemFromLastBatch;
- (long long)indexOfItemWithAsset:(id)a0;
- (id)likesForItemAtIndex:(long long)a0;
- (long long)typeForItemAtIndex:(long long)a0;
- (void)updateFromCloudFeedEntry;

@end
