@class HMFMessageDispatcher, NSString, HMDHome, NSOperationQueue, NSMapTable;

@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSOperationQueue *_queue;
    NSMapTable *_receivers;
}

@property (readonly) HMFMessageDispatcher *dispatcher;
@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) BOOL shouldRelayMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (id)initWithTransport:(id)a0;
- (id)logIdentifier;
- (void)deregisterReceiver:(id)a0;
- (void)registerForMessage:(id)a0 receiver:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (id)initWithHome:(id)a0;
- (BOOL)allowLocalFallbackForMessage:(id)a0;
- (id)initWithHome:(id)a0 dispatcher:(id)a1;
- (id)operationForMessage:(id)a0 error:(id *)a1;
- (BOOL)shouldRelayMessage:(id)a0;
- (id)syncOperationManager;
- (id)wrapReceiver:(id)a0;

@end
