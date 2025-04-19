@interface _TtCC21UserNotificationsCore29RemoteNotificationsProperties14DeviceObserver : NSObject <IDSServiceDelegate, SFAuthenticationManagerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ idsService;
    void /* unknown type, empty encoding */ sharingManager;
    void /* unknown type, empty encoding */ queue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;

@end
