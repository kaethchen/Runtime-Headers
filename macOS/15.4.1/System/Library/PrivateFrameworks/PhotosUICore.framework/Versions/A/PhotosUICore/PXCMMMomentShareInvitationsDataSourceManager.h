@class PXCMMMomentShareInvitationsDataSource, NSString, NSMutableOrderedSet, PHPhotoLibrary, NSObject, PXCMMMomentShareInvitationsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMMomentShareInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
    PXCMMMomentShareInvitationsDataSourceState *_state;
    NSMutableOrderedSet *_remainingMomentShareObjectIDsToFetch;
    long long _filter;
}

@property (readonly, nonatomic) PXCMMMomentShareInvitationsDataSource *dataSource;
@property (readonly, nonatomic) long long fetchLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mostRecentCreationDate;
+ (id)mostRecentCreationDateForPhotoLibrary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setFilter:(long long)a0;
- (id)createInitialDataSource;
- (id)mediaProvider;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2 changedObjects:(id)a3;
- (void)_startLoadingIfNeeded;
- (void)_workerQueue_fetchRemainingMomentSharesInBatchesWithMomentShares:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 fetchLimit:(long long)a1;
- (id)momentShares;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;

@end
