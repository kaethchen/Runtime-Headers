@class NSMutableDictionary, HMDCharacteristicReadWriteNetworkInformation;

@interface HMDCharacteristicReadWriteLogEventManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDCharacteristicReadWriteLogEventManager *sharedInstance;

@property (readonly, nonatomic) NSMutableDictionary *accessoryStatisticsByHMDAccessoryUUID;
@property (retain) HMDCharacteristicReadWriteNetworkInformation *networkInformationCache;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_compareIPSignatures:(id)a0 secondSignature:(id)a1;
- (void)_setupNetworkCacheWithWifiManager:(id)a0;
- (void)_updateBluetoothStatisticsForLogEvent:(id)a0;
- (void)_updateNetworkStatisticsForLogEvent:(id)a0;
- (void)_updateWiFiStatisticsForLogEvent:(id)a0;
- (double)elapsedTimeInterval:(double)a0;
- (void)updateStatisticsForLogEvent:(id)a0;

@end
