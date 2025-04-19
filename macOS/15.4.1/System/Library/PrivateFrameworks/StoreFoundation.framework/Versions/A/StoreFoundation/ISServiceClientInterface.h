@class NSLock, NSString, NSXPCConnection, NSObject, ISServiceDelegate;
@protocol OS_dispatch_queue;

@interface ISServiceClientInterface : ISServiceProxy <ISServiceRemoteObject> {
    NSLock *_serviceProxyLock;
}

@property (readonly) NSXPCConnection *conn;
@property (weak) ISServiceDelegate *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 delegate:(id)a1;
- (id)primaryAccount;
- (void)startService;
- (void)setStoreFrontID:(id)a0;
- (id)accountWithDSID:(id)a0;
- (BOOL)authIsExpired;
- (BOOL)copyAccountID:(id *)a0 byAuthenticatingWithContext:(id)a1 returningError:(id *)a2;
- (void)displayDialog:(id)a0;
- (id)exportedObjectInterface;
- (id)exportedObjectProtocol;
- (id)httpHeadersForURL:(id)a0 withDSID:(id)a1;
- (BOOL)loadURLBagWithType:(long long)a0 returningError:(id *)a1;
- (id)remoteObjectProtocol;
- (BOOL)shouldSendGUIDWithRequestForURL:(id)a0;
- (void)signURLRequest:(id)a0 service:(id)a1;
- (id)storeURLSchemeForAmbiguousURL:(id)a0;
- (id)urlForURLBagKey:(id)a0;
- (BOOL)urlIsTrustedByURLBag:(id)a0;
- (id)valueForURLBagKey:(id)a0;

@end
