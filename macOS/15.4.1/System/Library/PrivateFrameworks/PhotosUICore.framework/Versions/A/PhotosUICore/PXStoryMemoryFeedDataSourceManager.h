@class PXUpdater, NSString, PXLibraryFilterState, PXFetchResultBasedMemoriesDataSourceManager, PHPhotoLibrary;

@interface PXStoryMemoryFeedDataSourceManager : PXSectionedDataSourceManager <PXStoryMutableMemoryFeedDataSourceManager, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXPreferencesObserver>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *allMemoriesDataSourceManager;
@property (readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL hasAnyFavorites;
@property (readonly, nonatomic) BOOL wantsFavoritesOnly;
@property (readonly, nonatomic) BOOL hasAnyMemories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)createInitialDataSource;
- (void)didPerformChanges;
- (void)_invalidateChildDataSourceManagers;
- (void)_invalidateDataSource;
- (void)_invalidateHasAnyFavorites;
- (void)_setDataSourceToEmpty;
- (void)_updateChildDataSourceManagers;
- (void)_updateDataSource;
- (void)_updateHasAnyFavorites;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)preferencesDidChange;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)setHasAnyFavorites:(BOOL)a0;
- (void)setWantsFavoritesOnly:(BOOL)a0;

@end
