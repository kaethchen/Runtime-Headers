@class NSArray, NSDictionary, NSSet;

@interface PLDelayedSaveActionsDetail : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *cloudFeedAlbumUpdates;
@property (copy, nonatomic) NSArray *cloudFeedAssetInserts;
@property (copy, nonatomic) NSArray *cloudFeedAssetUpdates;
@property (copy, nonatomic) NSArray *cloudFeedCommentInserts;
@property (copy, nonatomic) NSArray *cloudFeedInvitationRecordUpdates;
@property (copy, nonatomic) NSArray *cloudFeedDeletionEntries;
@property (copy, nonatomic) NSArray *momentInsertsAndUpdates;
@property (copy, nonatomic) NSDictionary *momentDeletes;
@property (copy, nonatomic) NSArray *updatedAssetIDsForHighlights;
@property (copy, nonatomic) NSArray *updatedMomentIDsForHighlights;
@property (copy, nonatomic) NSDictionary *sharedAssetContainerIncrementalChangesByAssetID;
@property (readonly, nonatomic) BOOL shouldHandleMoments;
@property (copy, nonatomic) NSArray *assetsForFilesystemPersistency;
@property (copy, nonatomic) NSDictionary *searchIndexUpdates;
@property (copy, nonatomic) NSSet *albumCountsAndDateRangeUpdates;
@property (copy, nonatomic) NSSet *albumKeyAssetsUpdates;
@property (copy, nonatomic) NSSet *importSessionCountsAndDateRangeUpdates;
@property (copy, nonatomic) NSSet *albumTrashCycleUpdates;
@property (copy, nonatomic) NSSet *assetsForDuetDelete;
@property (copy, nonatomic) NSSet *memoriesForDuetDelete;
@property (copy, nonatomic) NSSet *widgetTimelineReloadTypesNeeded;
@property (copy, nonatomic) NSDictionary *assetsForWidgetUserAlbumRemoval;
@property (copy, nonatomic) NSSet *assetsForWidgetFavoriteAlbumRemoval;
@property (copy, nonatomic) NSDictionary *assetsForWallpaperUserAlbumRemoval;
@property (copy, nonatomic) NSSet *assetsForWallpaperFavoriteAlbumRemoval;
@property (copy, nonatomic) NSSet *wallpaperSuggestionReloadUUIDs;
@property (nonatomic) BOOL shouldUpdateFeaturedContent;
@property (copy, nonatomic) NSSet *personsToUpdateForFeaturedContent;
@property (copy, nonatomic) NSSet *memoriesForAssetUpdate;
@property (copy, nonatomic) NSSet *libraryScopeParticipantsForUpdate;
@property (nonatomic) BOOL libraryScopeRulesUpdated;
@property (copy, nonatomic) NSSet *memberIDsOfSocialGroupsNeedingContainmentUpdates;
@property (copy, nonatomic) NSSet *assetIDsNeedingContainmentUpdates;
@property (copy, nonatomic) NSDictionary *assetIDsByPersonUUIDNeedingContainmentUpdates;
@property (copy, nonatomic) NSSet *socialGroupNodeIDsNeedingDeduplication;
@property (copy, nonatomic) NSSet *memberIDsOfSocialGroupsNeedingDeduplication;
@property (copy, nonatomic) NSSet *assetIDsNeedingAssetPersonEdgeUpdates;

+ (id)_decodeAssetIDsByPersonUUIDNeedingContainmentUpdates:(id)a0 urlToObjectID:(id /* block */)a1;
+ (id)_decodeAssetsForWallpaperUserAlbumRemoval:(id)a0 urlToObjectID:(id /* block */)a1;
+ (id)_decodeAssetsForWidgetUserAlbumRemoval:(id)a0 urlToObjectID:(id /* block */)a1;
+ (id)_decodeMomentDeletes:(id)a0 urlToObjectID:(id /* block */)a1;
+ (id)_decodeSharedAssetContainerIncrementalChanges:(id)a0 urlToObjectID:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_encodableAssetIDsByPersonUUIDNeedingContainmentUpdates;
- (id)_encodableAssetsForWallpaperUserAlbumRemoval;
- (id)_encodableAssetsForWidgetUserAlbumRemoval;
- (id)_encodableMomentDeletes;
- (id)_encodableSharedAssetContainerIncrementalChanges;

@end
