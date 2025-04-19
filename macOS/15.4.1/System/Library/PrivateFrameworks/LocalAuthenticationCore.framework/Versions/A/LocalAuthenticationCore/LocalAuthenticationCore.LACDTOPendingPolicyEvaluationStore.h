@class NSString, NSArray, NSError;

@interface LocalAuthenticationCore.LACDTOPendingPolicyEvaluationStore : NSObject <LocalAuthenticationCore.LACDTOPendingPolicyEvaluationStoreType> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ taskGroup;
    void /* unknown type, empty encoding */ pendingEvaluationsDict;
}

@property (class, nonatomic, readonly) NSString *storeKey;

@property (nonatomic, readonly) NSArray *pendingEvaluations;

- (id)init;
- (void).cxx_destruct;
- (void)loadWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (void)addPendingEvaluation:(id)a0;
- (id)initWithPersistentStore:(id)a0 workQueue:(id)a1;
- (void)loadPersistedEvaluationsWithCompletion:(id /* block */)a0;
- (id)pendingEvaluationWithIdentifier:(id)a0;
- (void)persistEvaluations;
- (void)removePendingEvaluationWith:(id)a0;

@end
