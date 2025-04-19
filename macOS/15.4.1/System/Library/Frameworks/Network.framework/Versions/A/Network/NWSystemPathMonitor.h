@class NSMutableDictionary, NWPathEvaluator, NWMonitor, NSObject;
@protocol OS_dispatch_source, OS_nw_interface_use_observer;

@interface NWSystemPathMonitor : NSObject

@property (retain) NWMonitor *vpnMonitor;
@property (retain) NWPathEvaluator *primaryEvaluator;
@property int vpnNotifyToken;
@property int symptomsNotifyToken;
@property (retain) NSMutableDictionary *perAppVPNEvaluators;
@property (retain) NSObject<OS_dispatch_source> *smoothingTimer;
@property void *fallbackWatcher;
@property (retain) NSObject<OS_dispatch_source> *mptcpWatcher;
@property (retain) NSObject<OS_nw_interface_use_observer> *interfaceUseObserver;
@property (nonatomic, getter=isVPNActive) BOOL vpnActive;
@property (nonatomic, getter=isWiFiPrimary) BOOL wifiPrimary;
@property (nonatomic, getter=isEthernetPrimary) BOOL ethernetPrimary;
@property (nonatomic) BOOL interfaceInUse;

+ (id)sharedSystemPathMonitor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)eventFired;
- (BOOL)getSymptomsFallback;
- (void)registerForSymptomsFallbackNotification;
- (void)registerForVPNNotifications;
- (void)startWatchingApplicationStates;
- (void)stopWatchingApplicationStates;
- (void)updateFlags;
- (void)updateVPNMonitor;

@end
