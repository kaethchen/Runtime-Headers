@class NSArray, NSString, NSData, CKDeserializeRecordModificationsOperationInfo;
@protocol CKDeserializeRecordModificationsOperationCallbacks;

@interface CKDeserializeRecordModificationsOperation : CKDatabaseOperation <CKDeserializeRecordModificationsOperationCallbacks>

@property (copy, nonatomic) NSArray *recordsToSave;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (readonly, nonatomic) id<CKDeserializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKDeserializeRecordModificationsOperationInfo *operationInfo;
@property (retain, nonatomic) NSData *serializedModifications;
@property (copy, nonatomic) id /* block */ deserializeCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleDeserializationOfSaves:(id)a0 deletes:(id)a1 error:(id)a2;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithSerializedModifications:(id)a0;

@end
