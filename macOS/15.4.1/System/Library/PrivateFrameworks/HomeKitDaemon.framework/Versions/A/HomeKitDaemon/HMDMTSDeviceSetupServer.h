@class NSString;

@interface HMDMTSDeviceSetupServer : HMFObject <HMFLogging, MTSXPCDeviceSetupClientProxyDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)clientProxy:(id)a0 performDeviceSetupUsingRequest:(id)a1 completionHandler:(id /* block */)a2;

@end
