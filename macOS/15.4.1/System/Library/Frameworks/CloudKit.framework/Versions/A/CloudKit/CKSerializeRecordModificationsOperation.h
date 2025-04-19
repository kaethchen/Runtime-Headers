@class NSArray, NSString, NSData, CKSerializeRecordModificationsOperationInfo;
@protocol CKSerializeRecordModificationsOperationCallbacks;

@interface CKSerializeRecordModificationsOperation : CKDatabaseOperation <CKSerializeRecordModificationsOperationCallbacks>

@property (copy, nonatomic) NSData *serializedModifications;
@property (readonly, nonatomic) id<CKSerializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKSerializeRecordModificationsOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *recordsToSave;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (copy, nonatomic) id /* block */ serializeCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleSerialization:(id)a0 error:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;
- (void)performCKOperation;

@end
