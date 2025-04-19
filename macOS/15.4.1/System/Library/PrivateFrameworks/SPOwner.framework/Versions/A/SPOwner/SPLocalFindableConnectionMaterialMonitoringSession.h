@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue, SPLocalFindableConnectionMaterialMonitoringXPCProtocol;

@interface SPLocalFindableConnectionMaterialMonitoringSession : NSObject <SPLocalFindableConnectionMaterialMonitoringXPCClientProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPLocalFindableConnectionMaterialMonitoringXPCProtocol> proxy;
@property (copy, nonatomic) id /* block */ sessionInvalidatedCallback;
@property (copy, nonatomic) id /* block */ peripheralConnectionMaterialCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (id)init;
- (void).cxx_destruct;
- (void)invalidationHandler:(id)a0;
- (void)interruptionHandler:(id)a0;
- (void)peripheralConnectionMaterialForAccessoryIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)startLocalFindableConnectionMaterialMonitoringWithCompletion:(id /* block */)a0;
- (void)stopLocalFindableConnectionMaterialMonitoringWithCompletion:(id /* block */)a0;
- (void)updatedConnectionMaterialForAccessory:(id)a0 connectionMaterial:(id)a1;

@end
