@class HMDAppleMediaAccessoryDiagnosticInfoController, NSString, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue;

@interface HMDDeviceSetupConfiguringController : HMFObject <HMFLogging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ rpCompanionLinkClientFactory;
@property (retain, nonatomic) HMDAppleMediaAccessoryDiagnosticInfoController *diagnosticInfoController;
@property (retain, nonatomic) RPCompanionLinkClient *client;
@property unsigned long long requestIDRegistrationDelay;
@property unsigned long long restartRPClientDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)_registerRequest:(id)a0;
- (id)_activeDevicesWithMediaRouteIdentifier:(id)a0;
- (void)_queryWithRequestID:(id)a0 mediaRouteIdentifier:(id)a1 rpDevice:(id)a2 additionalKeys:(id)a3 withCompletion:(id /* block */)a4;
- (void)_registerRequest:(id)a0 after:(long long)a1;
- (void)_setupCompanionLinkClient;
- (void)_setupRPClientAfter:(long long)a0;
- (BOOL)_shouldRegisterRequest;
- (void)_tearDownCompanionLinkClient;
- (id)initWithDiagnosticInfoController:(id)a0;
- (id)initWithDiagnosticInfoControllerInternal:(id)a0;
- (id)initWithQueue:(id)a0 rpCompanionLinkClientFactory:(id /* block */)a1 diagnosticInfoController:(id)a2;
- (void)queryConfiguringState:(id)a0 additionalKeys:(id)a1 withCompletion:(id /* block */)a2;
- (void)registerRequestID;
- (void)setupRPClient;

@end
