@class TRSession;

@interface HMTRSession : NSObject <HMDeviceSetupOperationTransport>

@property (readonly, weak) TRSession *session;

- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (void)sendRequestData:(id)a0 qualityOfService:(long long)a1 responseHandler:(id /* block */)a2;

@end
