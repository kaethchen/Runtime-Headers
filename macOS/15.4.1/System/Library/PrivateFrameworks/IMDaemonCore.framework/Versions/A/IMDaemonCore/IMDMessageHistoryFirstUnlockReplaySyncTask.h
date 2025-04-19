@class NSString, NSMutableDictionary, IMDAccountController, IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : NSObject <IMDMessageHistorySyncTask> {
    NSString *_className;
    IMDReplayController *_replayController;
}

@property (retain, nonatomic) IMDAccountController *accountController;
@property (retain, nonatomic) NSMutableDictionary *taskGroupedByServiceName;
@property (copy, nonatomic) id /* block */ syncTaskCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id /* block */)_createProcessBatchBlockWithServiceSession:(id)a0;
- (id /* block */)_createSyncCompletionBlockForServiceSession:(id)a0;
- (void)_setupAndBeginSync;
- (id)initWithReplayController:(id)a0 accountController:(id)a1;
- (void)startSyncTask:(id /* block */)a0;
- (unsigned long long)syncTaskType;

@end
