@class ACAccountStore;

@interface WCDeviceLookup : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;

- (id)init;
- (void).cxx_destruct;
- (void)checkAllDevicesRunningMinimumiOSVersion:(struct { long long x0; long long x1; })a0 macOSVersion:(struct { long long x0; long long x1; })a1 orInactiveForTimeInterval:(double)a2 completionHandler:(id /* block */)a3;

@end
