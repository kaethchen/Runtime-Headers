@class NSString, NSXPCConnection;

@interface PODaemonCoreConnection : NSObject <PODaemonCoreProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) NSString *volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_connectToService;
- (id)initWithVolume:(id)a0;
- (void)deviceConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)insertTokenForUserName:(id)a0 completion:(id /* block */)a1;
- (void)loginConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)retrievePendingSSOTokenForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)retrieveStashedDecryptionContextForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)retrieveStashedSSOTokenForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)saveCachedContextsToDiskWithCompletion:(id /* block */)a0;
- (void)savePendingSSOTokens:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)saveStashedDecryptionContext:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)saveStashedSSOTokens:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)updateLoginStateForIdentifier:(id)a0 state:(id)a1 loginDate:(id)a2 loginType:(id)a3 completion:(id /* block */)a4;
- (void)useVolume:(id)a0 completion:(id /* block */)a1;
- (void)userConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)userLoginStateForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)verifyTokenForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;

@end
