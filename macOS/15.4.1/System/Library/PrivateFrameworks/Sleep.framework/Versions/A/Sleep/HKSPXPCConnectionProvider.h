@class NSMutableDictionary, NSXPCConnection, HKSPXPCConnectionInfo, NSString;
@protocol HKSPXPCConnectionProviderDelegate, HKSPXPCHeartbeatListener;

@interface HKSPXPCConnectionProvider : NSObject <BSDescriptionProviding, HKSPXPCHeartbeatListenerDelegate>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
@property (readonly, nonatomic) HKSPXPCConnectionInfo *connectionInfo;
@property (readonly, nonatomic) id<HKSPXPCHeartbeatListener> heartbeatListener;
@property (readonly, copy, nonatomic) id /* block */ connectionProvider;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } pendingMessagesLock;
@property (readonly, nonatomic) NSMutableDictionary *pendingMessages;
@property (readonly, nonatomic) BOOL invalidated;
@property (weak, nonatomic) id<HKSPXPCConnectionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithConnectionInfo:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isInvalidated;
- (void)sendMessage:(id)a0;
- (id)initWithConnectionInfo:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)_withLock:(id /* block */)a0;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection;
- (void)performRemoteBlock:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
- (void)_addPendingMessage:(id)a0;
- (void)_removePendingMessage:(id)a0;
- (void)_retryPendingMessages;
- (id)initWithConnectionInfo:(id)a0 connectionProvider:(id /* block */)a1 heartbeatListener:(id)a2;
- (void)listenerDidReceiveHeartbeat:(id)a0;
- (void)performRemoteBlock:(id /* block */)a0 withErrorHandler:(id /* block */)a1 doSynchronously:(BOOL)a2;

@end
