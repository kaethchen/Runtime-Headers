@class NSString, NSMutableSet, WPDeviceScanner, WPZoneTracker;
@protocol CRKWiProxTrackerScannerDelegate;

@interface CRKWiProxTrackerScanner : NSObject <WPZoneTrackerDelegate, WPDeviceScannerDelegate>

@property (retain, nonatomic) WPZoneTracker *zoneTracker;
@property (retain, nonatomic) WPDeviceScanner *deviceScanner;
@property (weak, nonatomic) id<CRKWiProxTrackerScannerDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *deviceScanRegistrations;
@property (retain, nonatomic) NSMutableSet *zoneRegistrations;
@property (retain, nonatomic) NSMutableSet *enteredZones;
@property (retain, nonatomic) NSMutableSet *zonesPendingReentry;
@property (nonatomic, getter=isInRescanOffInterval) BOOL inRescanOffInterval;
@property (readonly, nonatomic) long long zoneTrackerState;
@property (readonly, nonatomic) long long deviceScannerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (void)registerForZoneChangesMatching:(id)a0;
- (void)deviceScannerDidUpdateState:(id)a0;
- (void)registerForDevicesMatching:(id)a0 options:(id)a1;
- (void)scanner:(id)a0 didFailToRegisterDevices:(id)a1 withError:(id)a2;
- (void)scanner:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (void)scanner:(id)a0 foundRequestedDevices:(id)a1;
- (void)unregisterAllDeviceChanges;
- (void)unregisterAllZoneChanges;
- (void)unregisterForZoneChanges:(id)a0;
- (void)zoneTracker:(id)a0 didFailToRegisterZones:(id)a1 withError:(id)a2;
- (void)zoneTracker:(id)a0 enteredZone:(id)a1;
- (void)zoneTracker:(id)a0 exitedZone:(id)a1;
- (void)zoneTrackerDidUpdateState:(id)a0;
- (void)ensurePassiveScanAlways;
- (void)finishedRescanInterval;
- (void)scheduleRescanInterval;

@end
