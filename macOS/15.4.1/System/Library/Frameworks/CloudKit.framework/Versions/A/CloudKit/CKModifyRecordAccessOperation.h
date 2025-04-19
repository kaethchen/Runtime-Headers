@class NSArray, CKModifyRecordAccessOperationInfo, NSMutableDictionary, NSString, NSMutableArray;
@protocol CKModifyRecordAccessOperationCallbacks;

@interface CKModifyRecordAccessOperation : CKDatabaseOperation <CKModifyRecordAccessOperationCallbacks>

@property (readonly, nonatomic) id<CKModifyRecordAccessOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyRecordAccessOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *recordIDsToGrant;
@property (retain, nonatomic) NSArray *recordIDsToRevoke;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (retain, nonatomic) NSMutableArray *grantedRecordIDs;
@property (retain, nonatomic) NSMutableArray *revokedRecordIDs;
@property (copy, nonatomic) id /* block */ recordAccessGrantedBlock;
@property (copy, nonatomic) id /* block */ recordAccessRevokedBlock;
@property (copy, nonatomic) id /* block */ recordAccessCompletionBlock;
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
- (void)handleRecordAccessInitiationForRecordID:(id)a0 accessToken:(id)a1 referenceIdentifier:(id)a2 error:(id)a3;
- (void)handleRecordAccessRevocationForRecordID:(id)a0 error:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithRecordIDsToGrantAccess:(id)a0 recordIDsToRevokeAccess:(id)a1;

@end
