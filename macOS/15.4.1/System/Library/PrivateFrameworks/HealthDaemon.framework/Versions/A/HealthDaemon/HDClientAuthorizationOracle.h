@class NSString, HDProfile, NSUUID, _HKEntitlements, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HDClientAuthorizationOracle : NSObject {
    HDProfile *_profile;
    NSString *_sourceBundleIdentifier;
    _HKEntitlements *_entitlements;
    BOOL _clientHasPrivateEntitlement;
    NSMutableArray *_authorizationRequestIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_transactionSessionIdentifier;
    _Atomic BOOL _invalidated;
}

@property (readonly) BOOL clientHasAuthorizationForAllTypes;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isAuthorizedToReadObject:(id)a0 error:(id *)a1;
- (void)performIfAuthorizedToReadTypes:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (id)additionalAuthorizationPredicateForObjectType:(id)a0 error:(id *)a1;
- (void)authorizationStatusForType:(id)a0 completion:(id /* block */)a1;
- (id)authorizationStatusRecordForType:(id)a0 error:(id *)a1;
- (id)authorizationStatusRecordsForTypes:(id)a0 error:(id *)a1;
- (void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)a0 clientProcess:(id)a1 completion:(id /* block */)a2;
- (void)createRecalibrateEstimatesRequestRecordForSampleType:(id)a0 sourceEntity:(id)a1 effectiveDate:(id)a2 handler:(id /* block */)a3;
- (void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)a0 error:(id)a1;
- (void)enqueueAuthorizationRequestToWriteTypes:(id)a0 readTypes:(id)a1 authorizationNeededHandler:(id /* block */)a2 requestCompletionHandler:(id /* block */)a3;
- (void)enqueueObjectAuthorizationRequestWithContext:(id)a0 sourceEntity:(id)a1 promptIfNeeded:(BOOL)a2 authorizationNeededHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (id)filteredObjectsForReadAuthorization:(id)a0 anchor:(id)a1 error:(id *)a2;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)a0 promptHandler:(id /* block */)a1 requestCompletionHandler:(id /* block */)a2;
- (void)handleAuthorizationRequestsWithPromptHandler:(id /* block */)a0 requestCompletionHandler:(id /* block */)a1;
- (void)handleObjectAuthorizationRequestsWithPromptHandler:(id /* block */)a0 objectType:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasAuthorizationBypassToReadType:(id)a0;
- (id)initWithSourceBundleIdentifier:(id)a0 entitlements:(id)a1 profile:(id)a2;
- (BOOL)isAuthorizationStatusDeterminedForTypes:(id)a0 error:(id *)a1;
- (void)performIfAuthorizedToDeleteObjects:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)performIfAuthorizedToDeleteObjectsWithTypes:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)performIfAuthorizedToReadObjects:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)performIfAuthorizedToSaveObjects:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)performIfAuthorizedToSaveObjectsWithTypes:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (BOOL)performReadAuthorizationTransactionWithError:(id *)a0 handler:(id /* block */)a1;
- (void)updateDefaultAuthorizationStatusesForSource:(id)a0 completion:(id /* block */)a1;

@end
