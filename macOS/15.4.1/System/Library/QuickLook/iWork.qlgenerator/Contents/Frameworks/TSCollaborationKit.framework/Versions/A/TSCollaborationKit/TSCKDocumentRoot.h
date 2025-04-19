@class TSCKCollaborationCommandHistory, NSMutableArray, TSCKActivityStreamTransformationManager, TSCKDocumentSupport, TSCKActivityStream;
@protocol TSCKDocumentRootDelegate;

@interface TSCKDocumentRoot : TSKDocumentRoot {
    NSMutableArray *_iCloudTeardownStack;
}

@property (readonly, nonatomic) TSCKDocumentSupport *tsck_documentSupport;
@property (readonly, weak, nonatomic) id<TSCKDocumentRootDelegate> tsck_delegate;
@property (readonly, nonatomic) BOOL areActivityStreamAsyncTransformationsEnabled;
@property (readonly, nonatomic) BOOL isActivityStreamEnabled;
@property (readonly, nonatomic) BOOL areActivityStreamNotificationsSupported;
@property (readonly, nonatomic) TSCKActivityStream *activityStream;
@property (readonly, nonatomic) TSCKActivityStreamTransformationManager *activityStreamTransformationManager;
@property (readonly, nonatomic) unsigned long long maxMediaItemFileSize;
@property (readonly, nonatomic) unsigned long long maxEmbeddedMediaItemFileSize;
@property (readonly, nonatomic) unsigned long long maximumDocumentSize;
@property (readonly, nonatomic) unsigned long long availableSizeForMediaItems;
@property (readonly, nonatomic) unsigned long long minLargeDataLengthInBytes;
@property (readonly, nonatomic) BOOL hasICloudConflict;
@property (readonly, nonatomic) BOOL isCommandControllerConfiguredForCollaboration;
@property (readonly, nonatomic) TSCKCollaborationCommandHistory *collaborationCommandHistory;
@property (readonly, nonatomic) TSCKCollaborationCommandHistory *collaborationCommandHistoryIfLoaded;

+ (BOOL)isActivityStreamEnabled;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)willClose;
- (long long)addObserverForICloudTeardownWithBlock:(id /* block */)a0;
- (BOOL)hasICloudTeardownObserver;
- (void)removeICloudTeardownObserver:(long long)a0;
- (BOOL)isCollaborativeClient;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)additionalDocumentSupportPropertiesForWrite;
- (void)backgroundDocumentDidLoad;
- (id)currentAuthorShareParticipantID;
- (long long)addObserverForICloudTeardownSuspendingCollaboration:(BOOL)a0 block:(id /* block */)a1;
- (id)boostPrimaryThreadQualityOfService;
- (id)currentAuthorPrivateIDs;
- (void)documentDidLoadWithCommandDispatcher:(id)a0 commandExecutor:(id)a1;
- (void)dumpReaderWriterThreads;
- (BOOL)isCollaborativeClientOrServer;
- (BOOL)isCollaborativeServer;
- (void)notifyICloudTeardownObserversWithReason:(unsigned long long)a0;
- (void)p_addUploadObserver;
- (id)setUpControllersForBackground:(BOOL)a0 commandExecutor:(id)a1;
- (BOOL)shouldDropActivityStream;
- (BOOL)shouldDropCachedCollaborationData;
- (BOOL)shouldDropOperationHistoryWithDocumentRevision:(id)a0;

@end
