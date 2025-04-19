@class NSMutableDictionary, NSMutableArray;
@protocol CKDOperationCallbackProxy, CKDeclineSharesOperationCallbacks;

@interface CKDDeclineSharesOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL;
@property (retain, nonatomic) NSMutableArray *shareURLsToDecline;
@property (retain, nonatomic) id<CKDeclineSharesOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ declineCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (int)operationType;
- (BOOL)_declineShares;
- (void)_handleShareURLDeclined:(id)a0 responseCode:(id)a1;
- (void)_performCallbackForURL:(id)a0 error:(id)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;

@end
