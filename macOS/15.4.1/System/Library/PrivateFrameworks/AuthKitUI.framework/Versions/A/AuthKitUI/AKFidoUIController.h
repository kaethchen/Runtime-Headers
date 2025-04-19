@class AKFidoRVSRemoteViewController, AKFidoRVSBootstrapper, AAFXPCSession, NSString, NSWindow;

@interface AKFidoUIController : NSObject <AAFXPCSessionDelegate, AKFidoRVSServiceDelegate, AKFidoInterface>

@property (retain, nonatomic) NSWindow *hostWindow;
@property (retain, nonatomic) NSWindow *remoteWindow;
@property (retain, nonatomic) AKFidoRVSRemoteViewController *helper;
@property (retain, nonatomic) AKFidoRVSBootstrapper *remoteViewServiceBootstrapper;
@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismiss;
- (id)initWithHostWindow:(id)a0;
- (id)initWithXPCSession:(id)a0;
- (void)registerFidoKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)verifyFidoKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)verifyFidoKeyWithFidoContext:(id)a0 completion:(id /* block */)a1;
- (void)verifyFidoRecoveryWithContext:(id)a0 recoveryToken:(id)a1 completion:(id /* block */)a2;

@end
