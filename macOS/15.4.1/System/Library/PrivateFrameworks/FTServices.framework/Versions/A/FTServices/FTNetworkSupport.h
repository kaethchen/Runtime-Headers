@interface FTNetworkSupport : NSObject {
    BOOL _enableCriticalReliability;
    BOOL _criticalReliabilityEnabledState;
}

@property (readonly, nonatomic) BOOL allowAnyNetwork;
@property (readonly, nonatomic) BOOL validNetworkEnabled;
@property (readonly, nonatomic) BOOL validNetworkActive;
@property (readonly, nonatomic) BOOL validNetworkReachable;
@property (readonly, nonatomic) BOOL wiFiActiveAndReachable;
@property (readonly, nonatomic) BOOL willSearchForNetwork;
@property (readonly, nonatomic) BOOL dataActiveAndReachable;
@property (readonly, nonatomic) BOOL networkEnabled;
@property (readonly, nonatomic) BOOL networkActive;
@property (readonly, nonatomic) BOOL networkReachable;
@property (nonatomic) BOOL enableCriticalReliability;

+ (id)sharedInstance;

- (BOOL)validNetworkEnabledForBundleId:(id)a0;
- (void)_clearReliabilityTimeoutInterval;
- (void)_reallySetCriticalReliability:(BOOL)a0;
- (void)_setReliabilityTimeoutInterval;
- (void)_tryToEnableReliability;
- (BOOL)validNetworkActiveForBundleId:(id)a0;
- (BOOL)validNetworkReachableForBundleId:(id)a0;
- (BOOL)willSearchForNetworkForBundleId:(id)a0;

@end
