@class NSDate, NSString, PLCloudSharedAlbumInvitationRecord, NSArray, NSOrderedSet, NSCountedSet, PLCloudFeedEntry, PLPhotoLibrary, NSIndexSet;
@protocol PLCloudSharedAlbumProtocol;

@interface PXFeedSectionInfo : NSObject <PLAssetContainer>

@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isLoaded) BOOL loaded;
@property (retain, nonatomic) id<PLCloudSharedAlbumProtocol> sharedAlbum;
@property (copy, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) BOOL shouldBeVisibleWhenEmpty;
@property (readonly, nonatomic) BOOL isMine;
@property (readonly, nonatomic) PLCloudFeedEntry *cloudFeedEntry;
@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (copy, nonatomic) NSIndexSet *excludedAssetIndexes;
@property (readonly, copy, nonatomic) NSString *transientIdentifier;
@property (readonly, nonatomic) NSCountedSet *countsByAssetDisplayType;
@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, retain, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) unsigned long long approximateCount;
@property (readonly, nonatomic) unsigned long long assetsCount;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (readonly, nonatomic) unsigned long long videosCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)beginCachingSharedAlbumsByGUIDs;
+ (void)endCachingSharedAlbumsByGUIDs;
+ (id)sectionInfoWithCloudFeedEntry:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)getPhotoCount:(out unsigned long long *)a0 videoCount:(out unsigned long long *)a1;
- (BOOL)containsAsset:(id)a0;
- (BOOL)hasPlayableAssetForItemAtIndex:(long long)a0;
- (BOOL)areAllAssetsLiked;
- (id)assetForItemAtIndex:(long long)a0;
- (id)assetsForItemAtIndex:(long long)a0 maximumCount:(long long)a1;
- (id)batchIDForItemAtIndex:(long long)a0;
- (id)captionForItemAtIndex:(long long)a0;
- (id)commentForItemAtIndex:(long long)a0;
- (id)commentTextForItemAtIndex:(long long)a0;
- (id)commentsForItemAtIndex:(long long)a0;
- (void)getCommentCount:(out unsigned long long *)a0 likeCount:(out unsigned long long *)a1;
- (BOOL)hasMultipleAssetsForItemAtIndex:(long long)a0;
- (long long)indexOfFirstItemFromLastBatch;
- (long long)indexOfItemWithAsset:(id)a0;
- (long long)indexOfItemWithComment:(id)a0;
- (id)initWithCloudFeedEntry:(id)a0;
- (id)likesForItemAtIndex:(long long)a0;
- (id)sharedAlbumWithGUID:(id)a0;
- (long long)typeForItemAtIndex:(long long)a0;
- (void)updateFromCloudFeedEntry;

@end
