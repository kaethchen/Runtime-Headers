@class NSMutableArray;
@protocol CKDOperationCallbackProxy, CKShareAccessRequestOperationCallbacks;

@interface CKDShareAccessRequestOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *shareURLsToRequestAccessFor;
@property (retain, nonatomic) id<CKShareAccessRequestOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ shareAccessRequestCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (int)operationType;
- (void)_handleShareAccessRequestedForURL:(id)a0 responseCode:(id)a1;
- (void)_performCallbackForURL:(id)a0 error:(id)a1;
- (BOOL)_shareAccessRequest;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)isEmail:(id)a0;
- (BOOL)isPhoneNumber:(id)a0;
- (BOOL)makeStateTransition;

@end
