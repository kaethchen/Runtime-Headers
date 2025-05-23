@class NSString, NSSet, NSData, NSDate;

@interface PLLibraryScope : PLShare <PLSyncableObject, PLCloudDeletable> {
    BOOL _needsResetShareStateAfterSave;
    BOOL _didPrepareAssetsForScopeDelete;
}

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) short scopeSyncingState;
@property (nonatomic) short previewState;
@property (retain, nonatomic) NSData *rulesData;
@property (nonatomic) short participantCloudUpdateState;
@property (nonatomic) short autoSharePolicy;
@property (nonatomic) short exitState;
@property (nonatomic) short exitType;
@property (nonatomic) unsigned short exitSource;
@property (nonatomic) short cloudLocalState;
@property (copy, nonatomic) NSDate *lastParticipantAssetTrashNotificationDate;
@property (copy, nonatomic) NSDate *lastParticipantAssetTrashNotificationViewedDate;
@property (nonatomic) int cloudPhotoCount;
@property (nonatomic) int cloudVideoCount;
@property (nonatomic) int cloudItemCount;
@property (nonatomic) int countOfAssetsAddedByCameraSmartSharing;
@property (retain, nonatomic) NSSet *libraryScopeAssets;
@property (readonly, retain, nonatomic) id localID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;

+ (id)entityName;
+ (id)predicateForPreviewLibraryScope;
+ (id)activeLibraryScopeInManagedObjectContext:(id)a0;
+ (id)compoundPredicateForMarkingOnboardingPreviewAssetsWithRulePredicate:(id)a0;
+ (id)createOwnedShareWithUUID:(id)a0 creationDate:(id)a1 title:(id)a2 unitTestMode:(BOOL)a3 inPhotoLibrary:(id)a4;
+ (void)informRapportToAddShareParticipantUUIDs:(id)a0 photoLibrary:(id)a1;
+ (void)informRapportToRemoveShareParticipantUUIDs:(id)a0 photoLibraryBundle:(id)a1;
+ (BOOL)libraryScopeScopeIdentifierWasCreatedInLocalOnlyMode:(id)a0;
+ (id)predicateForActiveLibraryScope;
+ (id)predicateToExcludeExitingLibraryScopes;
+ (void)_cleanupLocalPreviewLibraryScopesInManagedObjectContext:(id)a0;
+ (id)_computeCountOfContributedAssetsTrashedByOtherParticipantsSinceLastNotificationDateInLibraryScope:(id)a0 outPhotoCount:(unsigned long long *)a1 outVideoCount:(unsigned long long *)a2 outItemCount:(unsigned long long *)a3;
+ (unsigned long long)_immediateNotificationAssetThresholdToUseWithPhotoLibrary:(id)a0;
+ (id)_libraryForEnumerationFromBundle:(id)a0 withName:(const char *)a1;
+ (id)_nearestDateSetToHour:(long long)a0 minute:(long long)a1;
+ (BOOL)_preflightChecksForFiringParticipantAssetTrashNotificationWithPhotoLibrary:(id)a0;
+ (BOOL)_queryIsShareEverythingInternalQuery:(id)a0;
+ (id)_shareEverythingInternalQuery;
+ (short)activeSyncingStateToUse;
+ (id)fireParticipantAssetTrashNotificationIfNeededWithPhotoLibrary:(id)a0 forceNotification:(BOOL)a1;
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)a0 inPhotoLibrary:(id)a1;
+ (BOOL)libraryScopeIsActiveWithScopeSyncingState:(short)a0;
+ (id)localOnlySharedSyncScopeIdentifierPrefix;
+ (short)participationStateFromLibraryScope:(id)a0;
+ (id)resetLibraryScopeAssetStatesWithManagedObjectContext:(id)a0;
+ (id)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithManagedObjectContext:(id)a0;
+ (id)scopeIdentifierPrefix;
+ (BOOL)shouldAllowFetchURLWithScopeChange:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
+ (BOOL)supportsCPLScopeType:(long long)a0;
+ (void)updateLibraryScopeActiveDefaultsWithManagedObjectContext:(id)a0;

- (void)didSave;
- (void)prepareForDeletion;
- (void)willSave;
- (BOOL)incrementallyDeleteAndSaveWithError:(id *)a0;
- (BOOL)libraryScopeIsActive;
- (void)removeParticipantsWithParticipantUUIDs:(id)a0 fromLibraryScopeWithIdentifier:(id)a1 retentionPolicy:(long long)a2 exitSource:(unsigned short)a3 completionHandler:(id /* block */)a4;
- (id)scopedIdentifier;
- (void)setScopeSyncingState:(short)a0;
- (BOOL)removePeopleRulesForPersonUUID:(id)a0;
- (void)_confirmAllRemainingOnboardingPreviewAssetsWithProgress:(id)a0 photoLibrary:(id)a1;
- (id)_cplShare;
- (void)_insertOwnedParticipantInLibrary:(id)a0 unitTestMode:(BOOL)a1;
- (BOOL)_libraryScopeWasCreatedInLocalOnlyMode;
- (void)_verifyCurrentUserParticipantExists;
- (void)acceptWithCompletionHandler:(id /* block */)a0;
- (id)activateScopeWithCompletionHandler:(id /* block */)a0;
- (id)cloudSyncableRulesData;
- (BOOL)confirmAllRemainingOnboardingPreviewAssetsWithProgress:(id)a0 databaseContext:(id)a1 withError:(id *)a2;
- (id)cplFullRecord;
- (id)cplScopeChange;
- (void)deactivateScopeWithCompletionHandler:(id /* block */)a0;
- (BOOL)isSyncableChange;
- (id)markOnboardingPreviewAssetsByProcessingRulesWithExcludePersonUUIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)publishWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldEnableRulesChangeTracker;
- (void)startExitWithRetentionPolicy:(long long)a0 exitSource:(unsigned short)a1 completionHandler:(id /* block */)a2;
- (void)startTrackingParticipantAssetTrashStateIfNeeded;
- (void)stopTrackingParticipantAssetTrashedStateIfNeeded;
- (BOOL)supportsCloudUpload;
- (BOOL)updatePeopleRulesForAllTombstonedPersons;
- (BOOL)updatePeopleRulesForTombstonePersonUUID:(id)a0 replaceWithPersonUUID:(id)a1;
- (void)updateRulesDataWithCloudSyncableRulesData:(id)a0;
- (void)userViewedAssetTrashNotificationWithManagedObjectContext:(id)a0;

@end
