@class NSHashTable, NSString, NSRecursiveLock, NSThread, NSRunLoop, NSDictionary, NSMutableSet, NSNumber;

@interface CUTWiFiManager : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSThread *wifiThread;
@property (retain, nonatomic) NSRunLoop *wifiRunLoop;
@property (nonatomic) struct __CFRunLoopSource { } *runLoopSource;
@property (nonatomic) void *wifiManager;
@property (nonatomic) void *wifiDevice;
@property (nonatomic) void *currentNetwork;
@property (nonatomic) void *dynamicStore;
@property (nonatomic) int linkToken;
@property (retain, nonatomic) NSHashTable *delegateMap;
@property (retain, nonatomic) NSHashTable *wowClients;
@property (copy, nonatomic) NSDictionary *lastWiFiPowerInfo;
@property (retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens;
@property (readonly, nonatomic) BOOL isWiFiEnabled;
@property (readonly, nonatomic) BOOL isWiFiAssociated;
@property (readonly, nonatomic) BOOL isWiFiCaptive;
@property (readonly, nonatomic) BOOL isHostingWiFiHotSpot;
@property (readonly, nonatomic) BOOL isWoWSupported;
@property (readonly, nonatomic) BOOL isWoWEnabled;
@property (readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;
@property (readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property (readonly, nonatomic) NSNumber *wiFiSignalStrength;
@property (readonly, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, nonatomic) NSString *currentSSID;
@property (nonatomic) BOOL autoAssociateWiFiAsForegroundClient;
@property (readonly, nonatomic) BOOL autoAssociateWiFi;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)_adjustWoWState;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_createDynamicStore;
- (BOOL)_isPrimaryCellular;
- (void)_updateIsWiFiAssociatedAsync:(BOOL)a0;
- (void)_updateIsWiFiEnabled;
- (double)_wifiMeasurementErrorForInterval:(double)a0;
- (void)addWiFiAutoAssociationClientToken:(id)a0;
- (void)addWoWClient:(id)a0;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(id /* block */)a0;
- (BOOL)hasWiFiAutoAssociationClientToken:(id)a0;
- (BOOL)hasWoWClient:(id)a0;
- (void)removeWiFiAutoAssociationClientToken:(id)a0;
- (void)removeWoWClient:(id)a0;
- (void)showNetworkOptions;

@end
