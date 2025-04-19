@class CMContinuityCaptureProximityMonitor, NSArray, NSString, RPRemoteDisplayDevice, NSMutableDictionary, NSDictionary, RPCompanionLinkClient, NSObject, RPRemoteDisplayDiscovery, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureDiscoverySession : NSObject <CMContinuityCaptureProximityMonitorDelegate> {
    NSDictionary *_availableClientDeviceByIdentifiers;
    NSMutableDictionary *_availableCapabilitiesByIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _activated;
    RPCompanionLinkClient *_rpCompanionLinkClient;
    RPRemoteDisplayDiscovery *_rpRemoteDisplayDiscovery;
    CMContinuityCaptureProximityMonitor *_proximityMonitor;
    NSArray *_incompatibleOSMajorVersion15Devices;
    struct { long long major; long long minor; long long patch; } _currentDeviceVersion;
    NSMutableSet *_incompatibleDeviceByNotificationData;
    BOOL _invalidated;
    NSString *_currentUserSelectedInSessionDeviceIdentifier;
    RPRemoteDisplayDevice *_currentUserSelectedInSessionDevice;
    BOOL _useCachedCapabilitiesIfApplicable;
    NSMutableSet *_observedDevices;
    NSMutableDictionary *_sidebandNotificationHandlersForIdentifier;
}

@property (readonly, nonatomic) BOOL invalidated;
@property (readonly) NSArray *availableClientDevices;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long transportErrorFlags;

+ (void)invalidate;
+ (id)sharedInstance;
+ (id)rapportDeviceIdentifier:(id)a0;
+ (void)unscheduleAllNotificationForDeviceIdentifier:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithQueue:(id)a0;
- (void)updateState;
- (id)_deviceForIdentifier:(id)a0;
- (BOOL)setupRPClient;
- (void)addSidebandMessageNotificationHandler:(id /* block */)a0 forDeviceIdentifier:(id)a1;
- (id)allowedDeviceIdentifiers:(id)a0 sidecarDevices:(id)a1;
- (void)boostDiscoveryForReason:(id)a0 completion:(id /* block */)a1;
- (id)currentDeviceList;
- (id)currentUserSelectedInSessionDeviceIdentifier;
- (void)device:(id)a0 isNearby:(BOOL)a1;
- (void)discardUserSelectedDeviceIfApplicableWithReason:(id)a0;
- (id)discoveredCompatibleDevices:(id)a0 rapportDevices:(id)a1;
- (id)discoveredRapportDevices;
- (id)discoveredSidecarDevices;
- (BOOL)isSessionInitiatedOnCommunalDevice;
- (BOOL)isUserSelectedDeviceIfApplicable:(id)a0;
- (void)receiveDeviceChangeNotification:(id)a0;
- (void)removeSidebandMessageNotificationHandlerForDeviceIdentifier:(id)a0;
- (id)rpRemoteDisplayDiscovery;
- (void)setupProxyMonitoring;
- (void)setupRPRemoteDisplayDiscovery;
- (void)showIncompatableDeviceNotificationIfApplicable;
- (id)validateCapabilitiesAndCacheIncompatibleNotificationIfApplicable:(id)a0 majorVersion:(unsigned long long)a1;
- (BOOL)validateSessionInfoForEvent:(id)a0;

@end
