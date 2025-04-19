@class APSigningAuthorityPoolManager, NSMutableArray, APUnfairLock;

@interface APSigningAuthorityPoolManagerWrapper : NSObject <APSigning>

@property (retain, nonatomic) APUnfairLock *lock;
@property (retain, nonatomic) NSMutableArray *waitingRequests;
@property (retain, nonatomic) APSigningAuthorityPoolManager *poolManager;
@property (readonly, nonatomic) BOOL isReady;
@property (readonly, nonatomic) long long internalState;

- (void).cxx_destruct;
- (void)signatureForData:(id)a0 completion:(id /* block */)a1;
- (id)signatureForData:(id)a0 error:(id *)a1;
- (void)_poolManagerStateChangedTo:(long long)a0;
- (void)_replyToWaitingClients:(id)a0 state:(long long)a1;
- (id)initWithName:(id)a0 poolSize:(unsigned long long)a1 numberToStash:(unsigned long long)a2 setupCompletion:(id /* block */)a3;
- (BOOL)rotateWithError:(id *)a0;
- (void)signatureForData:(id)a0 waitIfSigningIsNotReady:(BOOL)a1 completion:(id /* block */)a2;

@end
