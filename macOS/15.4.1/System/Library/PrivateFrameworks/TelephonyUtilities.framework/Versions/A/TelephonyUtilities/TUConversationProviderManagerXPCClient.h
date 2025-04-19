@class NSSet, NSXPCConnection, NSXPCInterface, NSString, NSObject;
@protocol OS_dispatch_queue, TUConversationProviderManagerXPCServer;

@interface TUConversationProviderManagerXPCClient : NSObject <TUConversationProviderManagerXPCClient, TUConversationProviderManagerDataSource>

@property (class, readonly, copy, nonatomic) NSSet *conversationProviderManagerAllowedClasses;
@property (class, retain, nonatomic) id<TUConversationProviderManagerXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUConversationProviderManagerXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *conversationProviderManagerClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *conversationProviderManagerServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL hasRequestedInitialState;
@property (nonatomic) BOOL hasInitialState;
@property (nonatomic) int shouldConnectToken;
@property (nonatomic) BOOL shouldConnectToHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_requestInitialStateIfNecessary;
- (void)_invokeCompletionHandler:(id /* block */)a0;
- (void)_requestInitialStateWithCompletionHandler:(id /* block */)a0;
- (id)asynchronousServerWithErrorHandler:(id /* block */)a0;
- (void)conversationProviderForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)doesHandle:(id)a0 correspondToConversationProvider:(id)a1 completionHandler:(id /* block */)a2;
- (void)generatePseudonymHandleForConversationProvider:(id)a0 expiryDuration:(double)a1 URI:(id)a2 completionHandler:(id /* block */)a3;
- (void)registerConversationProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerForCallbacksForProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerWithCompletionHandler:(id /* block */)a0;
- (void)renewPseudonymHandle:(id)a0 forConversationProvider:(id)a1 expirationDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)revokePseudonymHandle:(id)a0 forConversationProvider:(id)a1 completionHandler:(id /* block */)a2;
- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (oneway void)updateConversationProviders:(id)a0;

@end
