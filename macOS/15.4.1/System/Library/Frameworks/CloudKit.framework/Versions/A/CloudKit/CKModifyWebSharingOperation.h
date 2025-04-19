@class NSArray, NSMutableDictionary, CKModifyWebSharingOperationInfo, NSString, NSMutableArray;
@protocol CKModifyWebSharingOperationCallbacks;

@interface CKModifyWebSharingOperation : CKDatabaseOperation <CKModifyWebSharingOperationCallbacks>

@property (readonly, nonatomic) id<CKModifyWebSharingOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyWebSharingOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *recordIDsToShare;
@property (retain, nonatomic) NSArray *recordIDsToUnshare;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (retain, nonatomic) NSMutableArray *sharedRecordIDs;
@property (retain, nonatomic) NSMutableArray *unsharedRecordIDs;
@property (copy, nonatomic) NSArray *recordIDsToShareReadWrite;
@property (copy, nonatomic) id /* block */ recordSharedBlock;
@property (copy, nonatomic) id /* block */ recordUnsharedBlock;
@property (copy, nonatomic) id /* block */ webShareRecordsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleWebSharingInitiationForRecordID:(id)a0 sharingKey:(id)a1 baseSharingToken:(id)a2 error:(id)a3;
- (void)handleWebSharingRevocationForRecordID:(id)a0 error:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithRecordIDsToWebShare:(id)a0 recordIDsToUnshare:(id)a1;

@end
