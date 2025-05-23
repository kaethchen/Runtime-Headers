@class NSArray, NSMutableArray, NSDate;

@interface SDBetaManager : NSObject

@property (retain, nonatomic) NSArray *cachedPrograms;
@property (retain, nonatomic) NSDate *lastCached;
@property (nonatomic) unsigned long long cachedPlatform;
@property (retain) NSMutableArray *postMigrationTasks;
@property BOOL isMigratingFromProfiles;

+ (id)sharedManager;
+ (BOOL)_canMacEnrollInBetaSoftware;
+ (id)_currentBetaProgram;
+ (BOOL)_isEnrolledInBetaProgram;
+ (BOOL)canFileFeedbackOnThisDevice:(id *)a0;
+ (void)canFileFeedbackOnThisDeviceWithCompletion:(id /* block */)a0;
+ (BOOL)isBuildPrefix:(id)a0 greaterThanOrEqualToBuild:(id)a1;

- (void).cxx_destruct;
- (void)invalidateCache;
- (id)parseProgramsResponse:(id)a0 platforms:(unsigned long long)a1 shouldCache:(BOOL)a2 skipsBuildMatching:(BOOL)a3;
- (id)_assetServerURLString;
- (id)_brainServerURLString;
- (BOOL)_canCurrentDeviceEnrollInBetaUpdates;
- (void)_changeFBAVisibilityWithUserIdentifier:(id)a0 isVisible:(BOOL)a1;
- (void)_deleteBetaProgram;
- (void)_deleteSeedingAppleAccountWithCompletion:(id /* block */)a0;
- (id)_deviceAppleIDUsername;
- (void)_enrollUsingSeedingConfiguration:(id)a0;
- (void)_enrollUsingSeedingConfiguration:(id)a0 userIdentifier:(id)a1;
- (void)_finallyQueryProgramsForSystemAccountsWithPlatforms:(unsigned long long)a0 credentials:(id)a1 betaEnrollmentTokens:(id)a2 shouldSavePrograms:(BOOL)a3 completion:(id /* block */)a4;
- (BOOL)_hasMigratedProfiles;
- (BOOL)_isEnrolledInBetaProgram;
- (BOOL)_isEnrollmentAllowedByDeviceManagement_legacy;
- (BOOL)_isUsingSeedingAppleID;
- (void)_markMigrationComplete;
- (void)_migrateFromProfilesIfNeeded;
- (void)_privilegedDeleteBetaProgram;
- (void)_queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_resetAssetAudience;
- (void)_saveAppleAccountIdentifier:(id)a0;
- (void)_saveAppleAccountIdentifierWithAlternateDSID:(id)a0 completion:(id /* block */)a1;
- (void)_saveBetaProgram:(id)a0;
- (id)_seedingAppleIDUsername;
- (void)_setAssetAudienceString:(id)a0;
- (void)_setAssetServerURLString:(id)a0;
- (void)_setBrainServerURLString:(id)a0;
- (void)_setMemberEnrolled:(BOOL)a0;
- (void)_synchronizeCFPreferences;
- (BOOL)_unenrollFromBetaProgramWithUserIdentifier:(id)a0;
- (id)availableBetaProgramsForPlatforms:(unsigned long long)a0;
- (void)cachePrograms:(id)a0 forPlatforms:(unsigned long long)a1;
- (BOOL)canCurrentDeviceEnrollInBetaUpdates;
- (void)canFileFeedbackOnDevice:(id)a0 completion:(id /* block */)a1;
- (BOOL)canToggleFBAVisibility;
- (void)deleteSeedingAppleAccountForCurrentDeviceWithCompletion:(id /* block */)a0;
- (id)deviceAppleIDUsernameForCurrentDevice;
- (void)enrollCurrentDeviceWithEnrollmentMetadata:(id)a0 completion:(id /* block */)a1;
- (void)enrollDevice:(id)a0 inBetaProgram:(id)a1 completion:(id /* block */)a2;
- (void)enrollDevice:(id)a0 withEnrollmentMetadata:(id)a1 completion:(id /* block */)a2;
- (void)enrollInProgramWithToken:(id)a0 userIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)enrollInProgramWithToken:(id)a0 userIdentifier:(id)a1 shouldSaveToken:(BOOL)a2 completion:(id /* block */)a3;
- (id)enrolledBetaProgramForCurrentDevice;
- (void)enrolledBetaProgramForDevice:(id)a0 completion:(id /* block */)a1;
- (id)enrollmentMetadataForCurrentDevice;
- (void)enrollmentMetadataForCurrentDeviceWithCompletion:(id /* block */)a0;
- (void)enrollmentMetadataForDevice:(id)a0 completion:(id /* block */)a1;
- (void)ensureThisRunsAfterMigration:(id /* block */)a0;
- (void)getAppleIDAuthenticationAccountForAlternateDSID:(id)a0 attempt:(long long)a1 completion:(id /* block */)a2;
- (void)getMigrationProgramForAssetAudience:(id)a0 completion:(id /* block */)a1;
- (void)invalidateCacheWithCompletion:(id /* block */)a0;
- (BOOL)isCacheValidForPlatforms:(unsigned long long)a0;
- (BOOL)isCacheValidForPlatforms:(unsigned long long)a0 withMDMConfigurationDate:(id)a1;
- (BOOL)isCurrentDeviceUsingSeedingAppleID;
- (void)isDeviceEnrolledInBetaProgram:(id)a0 completion:(id /* block */)a1;
- (id)membershipURL;
- (id)membershipURLForPlatforms:(unsigned long long)a0;
- (id)migrateURLForAssetAudience:(id)a0;
- (void)queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)saveAppleAccountIdentifierWithAlternateDSIDForCurrentDevice:(id)a0 completion:(id /* block */)a1;
- (id)seedingAppleIDUsernameForCurrentDevice;
- (void)seedingAppleIDUsernameForCurrentDeviceWithCompletion:(id /* block */)a0;
- (id)serverURLWithPath:(id)a0 arguments:(id)a1;
- (void)setProfilesEnabledFromHeaderInResponse:(id)a0;
- (void)unenrollDevice:(id)a0 completion:(id /* block */)a1;
- (void)validateBetaEnrollmentTokens:(id)a0 errorHandler:(id /* block */)a1;
- (void)verifyAssetAudience:(id)a0 programID:(long long)a1 accountID:(id)a2 skipEnrollmentCheck:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void)verifyAssetAudience:(id)a0 programID:(long long)a1 accountID:(id)a2 withCompletion:(id /* block */)a3;
- (void)verifyAssetAudience:(id)a0 programID:(long long)a1 withCompletion:(id /* block */)a2;
- (void)verifyCatalog:(id)a0 withCompletion:(id /* block */)a1;
- (id)verifyURLForAssetAudience:(id)a0 programID:(long long)a1;
- (id)verifyURLForCatalog:(id)a0;

@end
