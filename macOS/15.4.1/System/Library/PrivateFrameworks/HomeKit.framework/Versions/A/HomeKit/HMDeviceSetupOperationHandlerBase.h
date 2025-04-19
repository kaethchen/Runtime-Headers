@class NSString, HMDeviceSetupSession;

@interface HMDeviceSetupOperationHandlerBase : NSObject <HMFLogging, HMDeviceSetupSessionDelegate>

@property (readonly, nonatomic) HMDeviceSetupSession *setupSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)setupSession:(id)a0 didCloseWithError:(id)a1;
- (void)configureSessionForMessages;
- (id)initWithSetupSessionFactory:(id /* block */)a0;
- (void)setupSession:(id)a0 didReceiveExchangeData:(id)a1 completionHandler:(id /* block */)a2;

@end
