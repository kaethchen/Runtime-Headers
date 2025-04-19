@class CKDLogicalDeviceContext;

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>

@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void).cxx_destruct;
- (void)addClouddThrottle:(id)a0;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;
- (void)clearAllClouddThrottles;
- (id)initWithDeviceContext:(id)a0;
- (void)postClouddWalrusUpdateNotification;

@end
