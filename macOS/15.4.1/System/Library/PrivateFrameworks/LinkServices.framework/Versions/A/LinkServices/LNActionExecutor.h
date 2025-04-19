@class NSUUID, NSString, LNActionExecutorPassthroughDelegate, LNProgressPropertySynchronizer, LNActionExecutorOptions, LNAction, LNActionMetadata, NSProgress, NSObject, LNConnection;
@protocol LNActionExecutorDelegate, OS_os_activity;

@interface LNActionExecutor : NSObject <LNConnectionClientInterface, NSXPCProxyCreating, NSProgressReporting>

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (retain, nonatomic) LNActionExecutorPassthroughDelegate *showOutputActionPassthroughDelegate;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } progressSubscriptionLock;
@property (retain, nonatomic) id progressSubscriber;
@property (retain, nonatomic) NSProgress *executionProgress;
@property (retain, nonatomic) LNProgressPropertySynchronizer *progressPropertySynchronizer;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (copy, nonatomic) LNActionMetadata *_showOutputActionMetadata;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) LNConnection *connection;
@property (readonly, copy, nonatomic) LNActionExecutorOptions *options;
@property (readonly, copy, nonatomic) LNAction *action;
@property (weak, nonatomic) id<LNActionExecutorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void)dealloc;
- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)setState:(long long)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)perform;
- (void)requestActionConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestCancelTimeout;
- (void)requestContinueInApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestExtendTimeout;
- (void)requestOpenURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterDisambiguation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterNeedsValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestViewSnippetEnvironmentWithCompletion:(id /* block */)a0;
- (void)getXPCListenerConnectionInterfaceWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_logTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)donateActionIfNecessary:(id)a0 result:(id)a1 completionHandler:(id /* block */)a2;
- (void)getConnectionInterfaceWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPrimaryConnectionInterfaceWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAction:(id)a0 connection:(id)a1 options:(id)a2;
- (void)openActionURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAppProtectionUnlockWithCompletionHandler:(id /* block */)a0;
- (void)requestViewSnippetSizeWithCompletion:(id /* block */)a0;
- (void)runShowOutputActionIfNecessary:(id)a0 completionHandler:(id /* block */)a1;
- (void)setCompletedWithError:(id)a0;
- (BOOL)shouldDismissSiri;
- (void)unsubscribeProgressObservation;
- (BOOL)validateEntitlementsForConnection:(id)a0;
- (BOOL)validateURLSchemeBeforeLaunching;

@end
