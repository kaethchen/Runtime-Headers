@class NSString, NSXPCConnection;

@interface POServiceCoreConnection : NSObject <POServiceCoreProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property unsigned int uid;
@property BOOL forLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_connectToService;
- (void)getLoginTypeForUser:(id)a0 completion:(id /* block */)a1;
- (void)bypassLoginPolicyForUserName:(id)a0 volume:(id)a1 contextData:(id)a2 completion:(id /* block */)a3;
- (void)exchangeKeyWithPublicKeyData:(id)a0 userName:(id)a1 passwordContext:(id)a2 responseContext:(id)a3 completion:(id /* block */)a4;
- (id)initWithUid:(unsigned int)a0 forLogin:(BOOL)a1;
- (void)insertTokenForUserName:(id)a0 completion:(id /* block */)a1;
- (void)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2 completion:(id /* block */)a3;
- (void)verifyPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)verifyPasswordUser:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)verifyTokenForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;

@end
