@interface TVISAerialStore : TVISStore

+ (id)sharedInstance;
+ (id)_fetchRequestForAssetsMatchingIdentifiers:(id)a0;
+ (id)_fetchRequestForSubcategoriesMatchingIdentifiers:(id)a0;
+ (id)_fetchRequestForSubcategoriesNotMatchingIdentifiers:(id)a0;
+ (id)_fetchRequestForUsersMatchingIdentifiers:(id)a0;

- (id)fetchUserActiveAssetsWithError:(id *)a0;
- (void)removeUserWithIdentifier:(id)a0 error:(id *)a1;
- (id)_downloadableAssetsFromProvider:(id)a0 excludingIdentifiers:(id)a1;
- (id)_fetchCategoryWithIdentifier:(id)a0 error:(id *)a1;
- (id)_fetchRequestForAssetIdentifiersMatchingIdentifiers:(id)a0;
- (id)_fetchRequestForAssetsNotMatchingIdentifiers:(id)a0;
- (id)_fetchRequestForCategoriesMatchingIdentifiers:(id)a0;
- (id)_fetchRequestForCategoriesNotMatchingIdentifiers:(id)a0;
- (id)_fetchRequestForUserActiveCategories;
- (id)_fetchRequestForUserActiveSubcategories;
- (id)_fetchSubcategoryWithIdentifier:(id)a0 error:(id *)a1;
- (void)_setCategoryWithIdentifier:(id)a0 isActive:(BOOL)a1 error:(id *)a2;
- (void)_setSubcategoryWithIdentifier:(id)a0 isActive:(BOOL)a1 error:(id *)a2;
- (void)activateCategoryWithIdentifier:(id)a0 error:(id *)a1;
- (void)activateSubcategoryWithIdentifier:(id)a0 error:(id *)a1;
- (void)deactivateCategoryWithIdentifier:(id)a0 error:(id *)a1;
- (void)deactivateSubcategoryWithIdentifier:(id)a0 error:(id *)a1;
- (unsigned long long)downloadableAssetCountToReachMinimum:(unsigned long long)a0 alreadyDownloadedIDs:(id)a1;
- (id)fetchAllAssetsWithAssetURLMapping:(id)a0 previewImageURLMapping:(id)a1 localizedStringsBundle:(id)a2 preferredLocalizations:(id)a3 error:(id *)a4;
- (id)fetchAllAssetsWithError:(id *)a0;
- (id)fetchAllAssetsWithSortDescriptors:(id)a0 error:(id *)a1;
- (id)fetchAllCategoriesWithAssetURLMapping:(id)a0 previewImageURLMapping:(id)a1 localizedStringsBundle:(id)a2 preferredLocalizations:(id)a3 error:(id *)a4;
- (id)fetchAllCategoriesWithError:(id *)a0;
- (id)fetchAllUsersWithError:(id *)a0;
- (id)fetchAssetsByGroupIdentifier;
- (id)fetchAssetsForCategoryIDs:(id)a0 error:(id *)a1;
- (id)fetchAssetsInNewestGroup;
- (id)fetchAssetsInPlayOrderWithError:(id *)a0;
- (id)fetchAssetsNotExpectedInPlayOrderWithError:(id *)a0;
- (id)fetchAssetsUnexpectedlyInPlayOrderWithError:(id *)a0;
- (id)fetchAssetsWithIDs:(id)a0 error:(id *)a1;
- (id)fetchAssetsWithSortDescriptors:(id)a0 predicate:(id)a1 error:(id *)a2;
- (id)fetchNextDownloadableAssetsExcludingIdentifiers:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
- (id)fetchPinnedAssetsWithError:(id *)a0;
- (BOOL)isMigrationNeededForManifest:(id)a0;
- (BOOL)isMigrationNeededWithPersistentContainer:(id)a0;
- (id)makePersistentContainer;
- (void)migrateAssetGroupsFromManifest:(id)a0 usingContainer:(id)a1;
- (void)migrateIfNeededWithPersistentContainer:(id)a0;
- (void)migrateLocalManifestDataToContainer:(id)a0;
- (BOOL)needsUpdateForManifest:(id)a0;
- (id)protectedURLsForDownloadedAssets:(id)a0;
- (void)setUserWithIdentifier:(id)a0 activeCategoryIdentifiers:(id)a1 activeSubcategoryIdentifiers:(id)a2 pinnedAssetIdentifiers:(id)a3 lastActiveDate:(id)a4 error:(id *)a5;
- (id)storeLog;
- (void)updateLastDownloadDate:(id)a0 forAssetWithIdentifier:(id)a1;
- (void)updatePlayOrderWithAssetIDPlaylist:(id)a0 error:(id *)a1;
- (void)updateWithManifest:(id)a0 error:(id *)a1;

@end
