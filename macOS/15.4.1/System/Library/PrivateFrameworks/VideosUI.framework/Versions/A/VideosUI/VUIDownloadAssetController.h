@class VUIMediaEntityAssetControllerState, VUIVideosPlayable, VUIContentRating, TVDownloadManagerProvider, NSString, NSObject, VUIDownloadItem;
@protocol OS_dispatch_queue;

@interface VUIDownloadAssetController : NSObject <VUIMediaEntityAssetController, TVDownloadManagerObserver>

@property (retain, nonatomic) TVDownloadManagerProvider *downloadController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) VUIDownloadItem *downloadItem;
@property (readonly, nonatomic) BOOL supportsStartingDownload;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) BOOL contentAllowsCellularDownload;
@property (readonly, nonatomic) VUIContentRating *contentRating;
@property (readonly, nonatomic) NSString *brandID;
@property (readonly, nonatomic) NSString *brandName;
@property (readonly, nonatomic) BOOL allowsManualDownloadRenewal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)pauseDownload;
- (void)resumeDownload;
- (id)availabilityEndDate;
- (void)_notifyListenersStateDidChange:(id)a0;
- (id)convertToVUIMediaEntityAssetControllerStateFromTVDownloadState:(id)a0;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)a0;
- (void)_enqueueCompletionQueueBlock:(id /* block */)a0;
- (BOOL)_isDownloadedOrDownloading;
- (void)_onProcessingQueue_cancelAndRemoveDownloadWithCompletion:(id /* block */)a0;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_invalidateAndSetState;
- (void)_onProcessingQueue_startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 completion:(id /* block */)a2;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)a0 downloadProgress:(double)a1 bytesDownloaded:(unsigned long long)a2 bytesToDownload:(unsigned long long)a3 supportsPausing:(BOOL)a4 supportsCancellation:(BOOL)a5 notify:(BOOL)a6;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)a0 notify:(BOOL)a1;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)a0 progress:(id)a1;
- (BOOL)canRenewKeys;
- (void)cancelAndRemoveDownload;
- (void)cancelAndRemoveDownloadWithCompletion:(id /* block */)a0;
- (void)cancelKeyFetch;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (id)downloadExpirationDate;
- (void)downloadManager:(id)a0 didAddDownloads:(id)a1;
- (void)downloadManager:(id)a0 downloadDidError:(id)a1 withError:(id)a2;
- (void)downloadManager:(id)a0 downloadDidFinish:(id)a1;
- (void)downloadManager:(id)a0 downloadDidProgress:(id)a1;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithVideosPlayable:(id)a0;
- (void)loadInitialDownloadState;
- (BOOL)renewsOfflineKeysAutomatically;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 prefer3DOrImmersiveDownload:(BOOL)a3 completion:(id /* block */)a4;

@end
