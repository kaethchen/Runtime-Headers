@class CWWiFiUIProxyClient, NSString, CWWiFiClient, AirPortOptionsTabView, CWInterface;

@interface AirPortOptionsTabViewItem : NSTabViewItem <CWWiFiUIProxyClientDelegate> {
    AirPortOptionsTabView *_AirPortOptionsTabView;
    id _owner;
}

@property (copy) NSString *interfaceName;
@property (readonly) CWInterface *interface;
@property (readonly) CWWiFiClient *wifiClient;
@property (readonly) CWWiFiUIProxyClient *wifiUIClient;
@property (readonly) BOOL isWiFiNetworkSyncEnabled;
@property (readonly) unsigned long long modifierFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (id)interface;
- (void)clientConnectionInterrupted;
- (BOOL)hasUnsavedChanges;
- (void)__asyncQueryWiFiNetworkSyncStatus;
- (BOOL)applyForService:(struct __SCNetworkService { } *)a0 withAuthorization:(id)a1;
- (id)initForOwner:(id)a0;
- (void)logMessageTracerAdvancedPrefs;
- (void)refreshForService:(struct __SCNetworkService { } *)a0;
- (void)setHasUnsavedChanges:(BOOL)a0;
- (void)updateScanUI:(BOOL)a0;

@end
