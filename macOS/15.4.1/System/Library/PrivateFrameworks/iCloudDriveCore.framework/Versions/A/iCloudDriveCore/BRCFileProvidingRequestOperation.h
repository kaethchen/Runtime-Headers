@class NSError, NSString, NSSet, BRCDocumentItem, BRCAccountSession, NSMutableArray, NSMutableSet, BRCXPCClient;
@protocol BRCDownloadTrackerManaging;

@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCOperationSubclass> {
    NSString *_etagIfLoser;
    NSString *_stageFileName;
    unsigned long long _options;
    BRCAccountSession *_session;
    BRCXPCClient *_client;
    NSMutableSet *_trackerFileObjects;
    NSMutableSet *_appLibrariesMonitored;
    BRCDocumentItem *_documentItem;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    BOOL _isFinished;
    BOOL _isMonitoringReachability;
    id<BRCDownloadTrackerManaging> _downloadTrackersManager;
}

@property (readonly, nonatomic) NSSet *trackedFileObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (int)kind;
- (void)main;
- (void)addCompletionCallback:(id /* block */)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)networkReachabilityChanged:(BOOL)a0;
- (BOOL)shouldRetryForError:(id)a0;
- (void)_detachAllTrackedDocID:(id)a0 error:(id)a1;
- (void)_finishAfterWaitingForDocumentsWithID:(id)a0 withEtagIfLoser:(id)a1 error:(id)a2;
- (void)_provideDocument:(id)a0;
- (void)_provideItem;
- (void)downloadTrackedForFileObjectID:(id)a0 withEtagIfLoser:(id)a1 didFinishWithError:(id)a2;
- (id)initWithDocumentItem:(id)a0 client:(id)a1 session:(id)a2 downloadTrackersManager:(id)a3;
- (id)initWithDocumentItem:(id)a0 client:(id)a1 session:(id)a2 downloadTrackersManager:(id)a3 etagIfLoser:(id)a4 stageFileName:(id)a5 options:(unsigned long long)a6;

@end
