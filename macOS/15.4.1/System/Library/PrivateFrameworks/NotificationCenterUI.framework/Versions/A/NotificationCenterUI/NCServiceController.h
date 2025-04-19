@class NSString, NSMutableDictionary, NSXPCConnection;

@interface NCServiceController : NSObject <NSXPCListenerDelegate> {
    NSXPCConnection *_ncConnection;
    NSMutableDictionary *_viewServices;
    NSMutableDictionary *_alerts;
    unsigned long long _alertCounter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_reconnect;
- (void)releaseKey:(id)a0;
- (void)_installAlertViewInViewService:(id)a0;
- (void)_checkAlertAndViewService:(id)a0;
- (void)_ncAlive:(id)a0;
- (id)_notificationCenterConnection;
- (id)_optionsDictionaryForAlert:(id)a0;
- (void)_resendExistingAlerts;
- (id)alertForUUID:(id)a0;
- (void)dismissNCAlert:(id)a0 animation:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)displayNCAlert:(id)a0 animated:(BOOL)a1;
- (void)makeAlertKey:(id)a0 completion:(id /* block */)a1;
- (void)registerHostViewService:(id)a0;
- (void)serviceDismissAlertUUID:(id)a0;
- (void)serviceSetDismissalOffsetForAlertUUID:(id)a0 offset:(id)a1 didComplete:(id)a2;

@end
