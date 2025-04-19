@class NSNumber, NSMutableSet, NSRecursiveLock;

@interface IMMobileNetworkManager : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens;
@property (nonatomic) BOOL registered;
@property (nonatomic) BOOL shouldBringUpDataContext;
@property (nonatomic) BOOL isDataPossible;
@property (nonatomic) BOOL isDataContextActive;
@property (nonatomic) BOOL isDataIndicatorNone;
@property (nonatomic) BOOL isDataContextUsable;
@property (readonly, nonatomic) BOOL isAirplaneModeEnabled;
@property (readonly, nonatomic) BOOL isWiFiEnabled;
@property (readonly, nonatomic) BOOL isWiFiUsable;
@property (readonly, nonatomic) BOOL isWiFiAssociated;
@property (readonly, nonatomic) BOOL isWiFiCaptive;
@property (readonly, nonatomic) BOOL isHostingWiFiHotSpot;
@property (readonly, nonatomic) BOOL autoAssociateWiFi;
@property (readonly, nonatomic) BOOL autoAssociateCellular;
@property (readonly, nonatomic) BOOL disableFastDormancy;
@property (readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;
@property (readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property (readonly, retain, nonatomic) NSNumber *wiFiSignalStrength;
@property (readonly, retain, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, retain, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, nonatomic) BOOL dataConnectionExists;
@property (readonly, nonatomic) BOOL has2GDataConnection;
@property (readonly, nonatomic) BOOL hasLTEDataConnection;
@property (readonly, nonatomic) BOOL isDataSwitchEnabled;
@property (readonly, nonatomic) BOOL isDataConnectionActive;
@property (readonly, nonatomic) BOOL inValidSIMState;
@property (readonly, nonatomic) BOOL requiresSIMInserted;
@property (readonly, nonatomic) BOOL isSIMLocked;
@property (readonly, nonatomic) BOOL isSIMRemoved;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeFastDormancyDisableToken:(id)a0;
- (void)addFastDormancyDisableToken:(id)a0;
- (void)addWiFiAutoAssociationClientToken:(id)a0;
- (void)removeWiFiAutoAssociationClientToken:(id)a0;
- (void)showNetworkOptions;
- (void)_adjustCellularAutoAssociation;
- (BOOL)_isDataConnectionAvailable;
- (BOOL)_legacy_inValidSIMState;
- (void)_lockedAdjustCellularAutoAssociation;
- (void)_makeDataConnectionAvailable:(BOOL)a0;
- (id)_telephonyDataSIMStatus;
- (void)addCellularAutoAssociationClientToken:(id)a0;
- (void)removeCellularAutoAssociationClientToken:(id)a0;
- (void)setDataConnectionActive:(BOOL)a0;
- (void)showSIMUnlock;

@end
