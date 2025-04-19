@class APUnfairRecursiveLock, NSString, NSObject, NSMutableArray, APSigningAuthority;
@protocol OS_dispatch_queue;

@interface APSigningAuthorityPoolManager : NSObject <APSigningAuthorityPoolManagement>

@property (nonatomic) unsigned long long poolSize;
@property (nonatomic) unsigned long long numberToStash;
@property (retain, nonatomic) APSigningAuthority *currentSigningAuthority;
@property (retain, nonatomic) NSMutableArray *signingAuthorityPool;
@property (retain, nonatomic) APUnfairRecursiveLock *lock;
@property (nonatomic) double lastStateChangeTime;
@property (nonatomic) double refillStartTime;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long retryLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue;
@property (copy, nonatomic) id /* block */ setupCompletion;
@property (copy, nonatomic) id /* block */ stateChangeHandler;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (id)signatureForData:(id)a0 error:(id *)a1;
- (void)_addSigningAuthorityToPool:(id)a0;
- (void)_callSetupCompletionHandler;
- (void)_clearStashedContextsIfIndicated;
- (void)_endSetup;
- (void)_evaluateRotationEntitlement;
- (void)_handleCompletedSigningAuthority:(id)a0;
- (unsigned long long)_numSigningAuthoritiesToCreate;
- (void)_refillSigningAuthorityPool;
- (void)_removeAllSigningAuthorities;
- (void)_removeSigningAuthority:(id)a0 shouldRefill:(BOOL)a1;
- (BOOL)_retrySetup;
- (BOOL)_rotateWithError:(id *)a0;
- (BOOL)_trySetup;
- (id)initWithName:(id)a0 poolSize:(unsigned long long)a1 numberToStash:(unsigned long long)a2;
- (id)initWithName:(id)a0 poolSize:(unsigned long long)a1 numberToStash:(unsigned long long)a2 setupCompletion:(id /* block */)a3;
- (id)initWithName:(id)a0 poolSize:(unsigned long long)a1 numberToStash:(unsigned long long)a2 stateChangeHandler:(id /* block */)a3 setupCompletion:(id /* block */)a4;
- (BOOL)rotateWithError:(id *)a0;
- (void)setupWithCompletion:(id /* block */)a0;
- (void)setupWithTimeout:(double)a0 completion:(id /* block */)a1;
- (id)signatureForRawData:(id)a0 error:(id *)a1;

@end
