@class NSData, NSString, NSDate, PLManagedAsset, NSOrderedSet, NSSet, NSDictionary;

@interface PLMemory : PLManagedObject <PLSearchableManagedObject, PLCloudDeletable, PLFileSystemMetadataPersistence, PLUserFeedbackSupporting, PLBackgroundUpdatesSharingComposition>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *graphMemoryIdentifier;
@property (nonatomic) short storyColorGradeKind;
@property (nonatomic) short storySerializedTitleCategory;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) short category;
@property (nonatomic) short subcategory;
@property (nonatomic) BOOL rejected;
@property (nonatomic) BOOL favorite;
@property (nonatomic) unsigned short pendingState;
@property (nonatomic) unsigned short syndicatedContentState;
@property (nonatomic) unsigned short userActionOptions;
@property (nonatomic) unsigned short creationType;
@property (retain, nonatomic) NSDictionary *movieAssetState;
@property (retain, nonatomic) NSData *movieData;
@property (nonatomic) long long photosGraphVersion;
@property (retain, nonatomic) NSData *photosGraphData;
@property (nonatomic) double score;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (retain, nonatomic) NSDate *lastViewedDate;
@property (retain, nonatomic) NSDate *lastMoviePlayedDate;
@property (retain, nonatomic) NSDate *lastEnrichmentDate;
@property (retain, nonatomic) NSData *assetListPredicate;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (retain, nonatomic) NSSet *curatedAssets;
@property (retain, nonatomic) NSSet *extendedCuratedAssets;
@property (retain, nonatomic) NSSet *representativeAssets;
@property (retain, nonatomic) NSOrderedSet *customUserAssets;
@property (retain, nonatomic) NSSet *movieCuratedAssets;
@property (retain, nonatomic) NSSet *userCuratedAssets;
@property (nonatomic) short notificationState;
@property (retain, nonatomic) NSData *blacklistedFeature;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (nonatomic) short featuredState;
@property (retain, nonatomic) NSSet *userFeedbacks;
@property (nonatomic) short searchIndexRebuildState;
@property (retain, nonatomic) NSSet *userRemovedAssets;
@property (retain, nonatomic) PLMemory *sourceGeneratedMemory;
@property (retain, nonatomic) PLMemory *targetUserEditedMemory;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short sharingComposition;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)insertIntoContext:(id)a0 withUUID:(id)a1 title:(id)a2 subtitle:(id)a3 creationDate:(id)a4;
+ (BOOL)isUserCreatedMemoryWithUserActionOptions:(unsigned short)a0;
+ (id)memoryObjectIDsContainingAsset:(id)a0;
+ (short)_calculateSharingCompositionForMemory:(id)a0;
+ (id)_compiledUserEditedAssetsFromSourceMemory:(id)a0 andTargetMemory:(id)a1;
+ (void)_deepCopyFromMemory:(id)a0 toMemory:(id)a1;
+ (unsigned long long)_deleteMemoriesMatchingPredicate:(id)a0 inManagedObjectContext:(id)a1;
+ (id)_findCollectionMostSimilarToCollectionWithAssets:(id)a0 additionalPredicate:(id)a1;
+ (BOOL)_isGenerativeMemoryWithUserActionOptions:(unsigned short)a0;
+ (id)_memoriesMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 inPhotoLibrary:(id)a3;
+ (id)_predicateForSourceGeneratedMemories;
+ (id)_predicateForTargetUserEditMemories;
+ (BOOL)_shouldPrefetchMemoryMovieCuratedAssetsInPhotoLibrary:(id)a0 prefetchConfiguration:(id)a1;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (unsigned long long)countOfMemoriesCreatedTodayWithNotificationStateRequestedOrSeenInPhotoLibrary:(id)a0 excludingMemory:(id)a1 error:(id *)a2;
+ (void)deleteAllMemoriesInPhotoLibrary:(id)a0;
+ (void)deleteMemoriesWithObjectIDs:(id)a0 inManagedObjectContext:(id)a1;
+ (void)deletePendingMemoriesCreatedBefore:(id)a0 inPhotoLibrary:(id)a1;
+ (id)fetchMemoriesForAssetObjectID:(id)a0 libraryIdentifier:(long long)a1 managedObjectContext:(id)a2;
+ (id)fetchMemoriesWithUUIDs:(id)a0 managedObjectContext:(id)a1;
+ (id)isEligibleForSearchIndexingPredicateForLibraryIdentifier:(long long)a0;
+ (id)keyPathsForMemoriesBeingAssets;
+ (id)memoriesContainingAsset:(id)a0;
+ (id)memoriesToPrefetchForWidgetInManagedObjectContext:(id)a0;
+ (id)memoriesToPrefetchInPhotoLibrary:(id)a0 prefetchConfiguration:(id)a1;
+ (id)memoriesToUploadInPhotoLibrary:(id)a0 limit:(long long)a1;
+ (id)memoriesWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)memoryWithUUID:(id)a0 inPhotoLibrary:(id)a1;
+ (id)predicateForPrivateOnlyCollectionsWithinSubset:(id)a0;
+ (id)predicateForSharedOnlyCollectionsWithinSubset:(id)a0;
+ (id)relationshipKeyPathsToPrefetch;
+ (void)resetCloudStateInPhotoLibrary:(id)a0;

- (void)didSave;
- (void)delete;
- (void)prepareForDeletion;
- (void)willSave;
- (id)scopeIdentifier;
- (void)recalculateUserActionOptionsBit;
- (BOOL)isValidForPersistence;
- (BOOL)promoteToUserEditedMemoryWithError:(id *)a0;
- (id)scopedIdentifier;
- (void)setKeyAsset:(id)a0;
- (short)sharingComposition;
- (id)cplMemoryChange;
- (void)calculateSyndicatedContentState;
- (BOOL)_attachGeneratedMemoryToNearestUserEditMemory;
- (BOOL)_attachUserEditToNearestSourceMemory;
- (void)_cacheMemoryPropertiesForUIPerformanceWithPhotosGraphData:(id)a0;
- (void)_propagateRepresentativeAssetsToTargetUserEditMemory;
- (void)_recalculateSharingCompositionIfNeeded;
- (BOOL)_sharingCompositionNeedsUpdate;
- (void)_updateCompiledAssetsAfterUserRemovedAssetsChange;
- (id)allAvailableAssets;
- (id)calculateKeyAsset;
- (id)cplFullRecord;
- (BOOL)hasAnyAssets;
- (BOOL)isEligibleForSearchIndexing;
- (BOOL)isSyncableChange;
- (BOOL)isUserCreatedMemory;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (void)recalculateStartAndEndDates;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (id)searchIdentifier;
- (void)setUserOrderedAssets:(id)a0;
- (BOOL)supportsCloudUpload;
- (BOOL)updateWithCPLMemoryChange:(id)a0 inPhotoLibrary:(id)a1;
- (id)userOrderedAssets;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
