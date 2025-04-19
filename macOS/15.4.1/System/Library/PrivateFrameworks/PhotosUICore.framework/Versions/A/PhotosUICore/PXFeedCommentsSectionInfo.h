@interface PXFeedCommentsSectionInfo : PXFeedSectionInfo

@property (nonatomic, setter=_setHasLikes:) BOOL _hasLikes;

- (id)assets;
- (long long)sectionType;
- (BOOL)isMine;
- (unsigned long long)assetsCount;
- (BOOL)containsAsset:(id)a0;
- (id)assetForItemAtIndex:(long long)a0;
- (id)assetsForItemAtIndex:(long long)a0 maximumCount:(long long)a1;
- (id)cloudFeedCommentsEntry;
- (id)commentForItemAtIndex:(long long)a0;
- (id)commentTextForItemAtIndex:(long long)a0;
- (void)getCommentCount:(out unsigned long long *)a0 likeCount:(out unsigned long long *)a1;
- (BOOL)hasMultipleAssetsForItemAtIndex:(long long)a0;
- (long long)indexOfItemWithAsset:(id)a0;
- (long long)indexOfItemWithComment:(id)a0;
- (id)likesForItemAtIndex:(long long)a0;
- (long long)typeForItemAtIndex:(long long)a0;
- (void)updateFromCloudFeedEntry;

@end
