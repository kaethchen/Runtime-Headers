@class PLLibraryServicesManager, NSObject;
@protocol OS_dispatch_queue;

@interface PLDelayedSaveActionsProcessor : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_queue> *_coreDuetCallback;
}

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)_assetIDsByContainingSocialGroupIDsFromAssetIDsNeedingContainmentUpdates:(id)a0 inContext:(id)a1;
- (id)_assetIDsByNodeIDFromAssetPersonEdgeDictionaries:(id)a0 assetIDsNeedingContainmentUpdates:(id)a1 inContext:(id)a2;
- (id)_assetIDsByPersonUUIDWithAllPersonsFromAssetsNeedingContainmentUpdates:(id)a0 assetIDsNeedingContainmentUpdates:(id)a1 inContext:(id)a2;
- (void)_deleteUUIDs:(id)a0 fromCoreDuetStreams:(id)a1 transaction:(id)a2;
- (id)_personUUIDsByNodeIDFromAssetPersonDictionaries:(id)a0 inContext:(id)a1;
- (void)_processAssetContainmentUpdatesForSocialGroupsContainingMemberPersonIDs:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processAssetIDsByPersonUUIDNeedingContainmentUpdates:(id)a0 assetIDsNeedingContainmentUpdates:(id)a1 pendingMemberIDsOfSocialGroupsNeedingContainmentUpdates:(BOOL)a2 library:(id)a3 transaction:(id)a4;
- (void)_processAssetsNeedingAssetPersonEdgeUpdates:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedAlbumCountsAndDateRangeUpdates:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedAlbumKeyAssetsUpdates:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedAlbumTrashUpdates:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedAlbumWidgetTimelineReload:(BOOL)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedAssetsForDuetDelete:(id)a0 transaction:(id)a1;
- (void)_processDelayedAssetsForWallpaperFavoriteAlbumRemoval:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedAssetsForWallpaperUserAlbumRemoval:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedAssetsForWidgetFavoriteAlbumRemoval:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedAssetsForWidgetUserAlbumRemoval:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedCloudFeedAlbumUpdates:(id)a0 assetInserts:(id)a1 assetUpdates:(id)a2 commentInserts:(id)a3 invitationRecordUpdates:(id)a4 deletionEntries:(id)a5 transaction:(id)a6;
- (void)_processDelayedFeaturedContentUpdateAndWidgetTimelineReload:(BOOL)a0 withPersonUUIDs:(id)a1 shouldReloadWidgetTimeline:(BOOL)a2 library:(id)a3 transaction:(id)a4;
- (void)_processDelayedForYouWidgetTimelineReload:(BOOL)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedImportSessionCountsAndDateRangeUpdates:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedLibraryScopeParticipantsUpdate:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedLibraryScopeRulesUpdate:(BOOL)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedMemoriesAssetUpdate:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedMemoriesForDuetDelete:(id)a0 transaction:(id)a1;
- (void)_processDelayedMomentChangesWithTransaction:(id)a0;
- (void)_processDelayedSearchIndexUpdates:(id)a0 transaction:(id)a1;
- (void)_processDelayedWallpaperSuggestionReload:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processMembersOfSocialGroupsNeedingDeduplication:(id)a0 pendingSocialGroupIDsNeedingDeduplication:(BOOL)a1 library:(id)a2 transaction:(id)a3;
- (void)_processSocialGroupsNeedingDeduplication:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_runAssetContainmentForSocialGroup:(id)a0 assetIDsToUpdate:(id)a1;
- (void)_runContainmentOnAllGroupsNeedingContainmentUpdates:(id)a0 inLibrary:(id)a1;
- (id)_socialGroupNodeIDsContainingMember:(id)a0 library:(id)a1 error:(id *)a2;
- (void)processDelayedDeletionsFromChangeHubEvent:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)processDelayedMomentGeneratorSaveActionsFromDetail:(id)a0;
- (void)processDelayedSaveActionsDetail:(id)a0 withPhotoLibrary:(id)a1 transaction:(id)a2;

@end
