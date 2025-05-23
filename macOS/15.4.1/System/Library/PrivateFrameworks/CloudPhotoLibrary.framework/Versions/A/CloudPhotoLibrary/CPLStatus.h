@class NSData, NSDate, NSURL, NSArray, CPLAccountFlags, NSMutableDictionary, NSDictionary, NSMutableSet, NSObject, Protocol;
@protocol CPLStatusDelegate, OS_dispatch_queue;

@interface CPLStatus : NSObject {
    BOOL _forCPL;
    NSMutableSet *_changedKeys;
    NSURL *_statusFileURL;
    NSMutableDictionary *_status;
    NSObject<OS_dispatch_queue> *_lock;
    Protocol *_delegationProtocol;
    SEL _delegationSelector;
}

@property (copy, nonatomic) NSDate *lastCompletePrefetchDate;
@property (copy, nonatomic) NSDate *lastPruneDate;
@property (nonatomic) BOOL hasChangesToProcess;
@property (nonatomic) BOOL containerHasBeenWiped;
@property (nonatomic) BOOL iCloudLibraryClientVersionTooOld;
@property (nonatomic) BOOL isStuckInExitForSharedLibrary;
@property (nonatomic) BOOL iCloudLibraryClientIsNotAuthenticated;
@property (copy, nonatomic) NSDate *lastSuccessfulSyncDate;
@property (copy, nonatomic) NSDate *initialSyncDate;
@property (copy, nonatomic) NSDate *initialDownloadDate;
@property (nonatomic) BOOL isExceedingQuota;
@property (nonatomic) BOOL isExceedingSharedLibraryQuota;
@property (nonatomic) unsigned long long estimatedCountOfRemainingRecordsDuringSharedLibraryExit;
@property (nonatomic) long long busyState;
@property (copy, nonatomic) NSDate *exitDeleteTime;
@property (nonatomic) BOOL iCloudLibraryHasBeenWiped;
@property (nonatomic) BOOL iCloudLibraryExists;
@property (copy, nonatomic) NSData *accountFlagsData;
@property (readonly, nonatomic) NSDate *cloudAssetCountPerTypeLastCheckDate;
@property (nonatomic, getter=isWalrusEnabled) BOOL walrusEnabled;
@property (nonatomic, getter=isKeychainCDPEnabled) BOOL keychainCDPEnabled;
@property (nonatomic, getter=isUpgradeSuggestedToAccessAllPhotos) BOOL upgradeSuggestedToAccessAllPhotos;
@property (nonatomic) long long serverFeatureCompatibleVersion;
@property (copy, nonatomic) NSArray *disabledFeatures;
@property (nonatomic) long long accountEPPCapability;
@property (readonly, nonatomic) long long maximumAccountEPPCapability;
@property (readonly, nonatomic) BOOL hasValidSystemBudget;
@property (readonly, nonatomic) BOOL hasCellularBudget;
@property (readonly, nonatomic) BOOL hasBatteryBudget;
@property (readonly, nonatomic) BOOL hasFinishedInitialDownload;
@property (readonly, nonatomic) BOOL isBlockedBySnapshot;
@property (readonly, nonatomic) NSDictionary *cloudAssetCountPerType;
@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (readonly, nonatomic, getter=isConnectedToNetwork) BOOL connectedToNetwork;
@property (readonly, nonatomic, getter=isCellularRestricted) BOOL cellularRestricted;
@property (readonly, nonatomic, getter=isInAirplaneMode) BOOL inAirplaneMode;
@property (readonly, nonatomic) BOOL hasLowBatteryLevel;
@property (readonly, nonatomic) BOOL isConstrainedNetwork;
@property (readonly, nonatomic) BOOL isBlockedByLowPowerMode;
@property (readonly, nonatomic) BOOL hasHeavyResourceUsage;
@property (readonly, nonatomic) BOOL hasPoorNetworkQuality;
@property (readonly, nonatomic) BOOL hasModerateThermalPressure;
@property (readonly, nonatomic) BOOL hasThermalPressure;
@property (readonly, nonatomic) BOOL hasPoorSystemConditions;
@property (readonly, nonatomic) long long blockedReason;
@property (readonly, nonatomic) long long unBlockedReason;
@property (readonly, nonatomic) long long clientFeatureCompatibleVersion;
@property (readonly, nonatomic) BOOL lowDiskSpace;
@property (readonly, nonatomic) BOOL veryLowDiskSpace;
@property (weak, nonatomic) id<CPLStatusDelegate> delegate;

+ (id)descriptionForAccountEPPCapability:(long long)a0;

- (void).cxx_destruct;
- (void)_save;
- (id)statusDescription;
- (id)initWithClientLibraryBaseURL:(id)a0;
- (BOOL)writeInitialSyncMarker:(id *)a0;
- (void)refetchFromDisk;
- (BOOL)_deleteInitialSyncMarkerWithError:(id *)a0;
- (void)_loadIfNecessary;
- (void)_setObjectInStatus:(id)a0 forKey:(id)a1;
- (id)_statusClient;
- (void)_statusDidChange;
- (BOOL)_writeInitialSyncMarkerForDate:(id)a0 error:(id *)a1;
- (void)checkInitialSyncMarker;
- (id)initWithClientLibraryBaseURLForCPLEngine:(id)a0;
- (void)preventDelegateWithDelegationClass:(id)a0 selector:(SEL)a1;
- (void)setCloudAssetCountPerType:(id)a0 updateCheckDate:(BOOL)a1;
- (void)setConnectedToNetwork:(BOOL)a0 cellularIsRestricted:(BOOL)a1 inAirplaneMode:(BOOL)a2;
- (void)setHasCellularBudget:(BOOL)a0 hasBatteryBudget:(BOOL)a1 hasLowBatteryLevel:(BOOL)a2 isConstrainedNetwork:(BOOL)a3 isBlockedByLowPowerMode:(BOOL)a4 hasHeavyResourceUsage:(BOOL)a5 hasPoorNetworkQuality:(BOOL)a6 hasModerateThermalPressure:(BOOL)a7 hasThermalPressure:(BOOL)a8 hasPoorSystemConditions:(BOOL)a9 isBudgetValid:(BOOL)a10 blockedReason:(long long)a11 unBlockedReason:(long long)a12;
- (void)setLowDiskSpace:(BOOL)a0 veryLowDiskSpace:(BOOL)a1;

@end
