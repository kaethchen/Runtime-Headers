@class NSString, AXIPCServer, AXDispatchTimer, AXIPCClient, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AXServer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionHandlersLock;
}

@property (copy, nonatomic) NSString *serverIdentifier;
@property (retain, nonatomic) NSMutableArray *assertionWorkBacklog;
@property (retain, nonatomic) AXDispatchTimer *assertionRetryTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assertionWorkQueue;
@property (retain, nonatomic) NSMutableArray *actionHandlers;
@property (retain, nonatomic) AXIPCClient *client;
@property (retain, nonatomic) AXIPCServer *server;
@property (nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)sendMessage:(id)a0;
- (BOOL)_connectIfNecessary;
- (id)_serviceName;
- (void)_initializeAssertionBookkeeping;
- (BOOL)sendSimpleMessage:(id)a0 enqueueError:(id *)a1;
- (int)_actionResultKey;
- (BOOL)_connectServerIfNecessary;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (void)_ensureAssertionsHaveBeenProcessedWithCompletion:(id /* block */)a0;
- (id)_handleActionResult:(id)a0;
- (void)_processAssertionBacklog;
- (void)_registerActionHandler:(id /* block */)a0 withIdentifierCallback:(id /* block */)a1 retryInterval:(double)a2 registrationMessageKey:(int)a3;
- (void)_removeActionHandler:(id)a0 registrationMessageKey:(int)a1;
- (id)_sendMessage:(id)a0 error:(id *)a1;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)acquireAssertionWithType:(id)a0 identifier:(id)a1;
- (void)relinquishAssertionWithType:(id)a0 identifier:(id)a1;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 boolResultHandler:(id /* block */)a2;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 handler:(id /* block */)a2;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 objectResultHandler:(id /* block */)a2;
- (void)sendSimpleMessage:(id)a0;
- (id)sendSimpleMessageWithObjectResult:(id)a0;
- (BOOL)sendSimpleMessageWithResult:(id)a0;

@end
