@class NSString, CLDispatchSilo, NSData, CLLocationManager;

@interface CLServiceSessionInternal : NSObject <CLIdentifiableClientProtocol> {
    CLDispatchSilo *_silo;
    void *_locationdConnection;
    id /* block */ _clientCallback;
}

@property BOOL shouldBeRunning;
@property (readonly, nonatomic) int sessionType;
@property (retain, nonatomic) NSString *identityToken;
@property (retain, nonatomic) NSData *storageToken;
@property (retain, nonatomic) CLLocationManager *manager;
@property (weak, nonatomic) id /* block */ weakClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alwaysSessionWithLocationManager:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (id)passiveSessionWithLocationManager:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (id)sessionWithLocationManager:(id)a0 type:(int)a1 queue:(id)a2 handler:(id /* block */)a3;
+ (id)whenInUseSessionWithLocationManager:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)tearDown;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)createConnection;
- (void)destroyConnection;
- (void)handleMessageDiagnostics:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithLocationManager:(id)a0 serviceSessionType:(int)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)manageConnection;
- (void)updateIdentityToken:(id)a0 withStorageToken:(id)a1;

@end
