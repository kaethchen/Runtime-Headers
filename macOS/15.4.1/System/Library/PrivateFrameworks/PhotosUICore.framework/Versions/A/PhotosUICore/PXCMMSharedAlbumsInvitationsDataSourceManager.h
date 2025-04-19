@class PXCMMSharedAlbumsInvitationsDataSourceState, NSString, NSMutableOrderedSet, PXCMMSharedAlbumsInvitationsDataSource, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXCMMSharedAlbumsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
}

@property (readonly, nonatomic) PXCMMSharedAlbumsInvitationsDataSource *dataSource;
@property (retain, nonatomic) PXCMMSharedAlbumsInvitationsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingSharedAlbumObjectIDsToFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)createInitialDataSource;
- (id)mediaProvider;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2;
- (void)_workerQueue_fetchRemainingSharedAlbumsInBatches;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (id)sharedAlbums;
- (void)startLoadingIfNeeded;

@end
