@class CATOperationQueue, NSString, NSHashTable, CATTaskClient;

@interface CRKStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol> {
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    NSHashTable *mObservers;
    long long mConnectionAttempt;
    BOOL mConnecting;
}

@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic) BOOL userExpectsReconnect;
@property (readonly, nonatomic) id /* block */ connectionBuilder;
@property (nonatomic) long long maxConnectionAttempts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchResourceFromURL:(id)a0 completion:(id /* block */)a1;
+ (void)setActiveStudentIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)studentDaemonProxy;
+ (void)studentDidAuthenticate:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)disconnect;
- (void)connect;
- (void)enqueueOperation:(id)a0;
- (void)client:(id)a0 didInterruptWithError:(id)a1;
- (void)client:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)clientDidConnect:(id)a0;
- (void)clientDidDisconnect:(id)a0;
- (id)enqueuedOperationForRequest:(id)a0;
- (id)initWithConnectionBuilder:(id /* block */)a0;
- (id)operationForRequest:(id)a0;

@end
