@interface RWIServiceLockdownConnectionToNotificationProxy : RWIServiceLockdownConnection

- (id)serviceName;
- (void)_closeNotificationProxyServiceConnectionFromFaceplant;
- (id)initWithDevice:(id)a0 mobileDeviceConnection:(id)a1 delegate:(id)a2;
- (void)notificationFromDevice:(id)a0;

@end
