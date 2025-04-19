@interface RWIServiceLockdownConnectionToRelay : RWIServiceLockdownConnection

+ (id)connectionWithDevice:(id)a0 mobileDeviceConnection:(id)a1 delegate:(id)a2;

- (id)serviceName;
- (void)closeInternal;
- (id)initWithDevice:(id)a0 mobileDeviceConnection:(id)a1 delegate:(id)a2;

@end
