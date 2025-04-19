@class NSXPCListener, NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction, AuthenticationHintsDelegate;

@interface SFAuthenticationHintsProvider : NSObject <NSXPCListenerDelegate, AuthenticationHintsDelegate>

@property (retain) NSXPCConnection *userConnection;
@property (retain) NSXPCConnection *clientConnection;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) NSXPCListener *listener;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) id<AuthenticationHintsDelegate> hintsDelegate;
@property (retain) NSMutableDictionary *userXPCConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)start;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startListener;
- (unsigned int)uidForUserName:(id)a0;
- (void)updateXPCConnectionForUserName:(id)a0;
- (void)activate:(id)a0 userName:(id)a1 mode:(long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)activate:(id)a0 userName:(id)a1 sessionUnlocked:(BOOL)a2 reply:(id /* block */)a3;
- (void)authenticateAccountWithAppleID:(id)a0 password:(id)a1 completion:(id /* block */)a2;
- (BOOL)connectionHasEntitlement;
- (void)deactivateWithContext:(id)a0 reply:(id /* block */)a1;
- (void)event:(long long)a0 eventHints:(id)a1 reply:(id /* block */)a2;
- (id)hintsProviderProxy;
- (void)invalidateAllUserConnections;
- (void)notifyUserNameNotAvailable:(id)a0;

@end
