@class NSDictionary, IMDReplayStorageIterationContext, IMDReplayStorageController;

@interface IMDReplayController : NSObject {
    IMDReplayStorageController *_suspendedStorageController;
}

@property (retain, nonatomic) NSDictionary *syncTaskByServiceName;
@property (retain, nonatomic) IMDReplayStorageIterationContext *heldDeletionContext;
@property (copy, nonatomic) id /* block */ automationCompletionBlock;
@property (retain, nonatomic) IMDReplayStorageController *storageController;
@property (readonly, nonatomic) BOOL isRecordingReplayDB;

+ (id)sharedInstance;
+ (long long)batchSize;

- (void)dealloc;
- (id)init;
- (void)_fetchNexBatchOfMessagesAndReplay;
- (void)_processBatch:(id)a0;
- (void)deleteReplayDBIfNotUnderFirstUnlock;
- (void)endRecordingReplayDatabase;
- (id)initWithStorageController:(id)a0;
- (void)overrideStorageControllerWithDatabaseFromPath:(id)a0;
- (void)replayMessages;
- (void)replayMessagesWithCompletion:(id /* block */)a0;
- (void)restoreDefaultStoreControllerInstance;
- (void)scheduleSyncTaskForServices:(id)a0;
- (void)startRecordingReplayDatabase;
- (BOOL)storeMessage:(id)a0 type:(unsigned char)a1 error:(id *)a2;

@end
