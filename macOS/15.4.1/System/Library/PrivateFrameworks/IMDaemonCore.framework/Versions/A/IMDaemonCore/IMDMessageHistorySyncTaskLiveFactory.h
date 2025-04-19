@class NSString, IMDReplayController, IMDAccountController, IMDCKSyncController;

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject <IMDMessageHistorySyncTaskFactory> {
    IMDCKSyncController *_ckSyncController;
    IMDAccountController *_accountController;
    IMDReplayController *_replayController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)_initWithAccountController:(id)a0 replayController:(id)a1;
- (id)_newFirstUnlockReplaySyncTask;
- (id)newSyncTaskForType:(unsigned long long)a0;

@end
