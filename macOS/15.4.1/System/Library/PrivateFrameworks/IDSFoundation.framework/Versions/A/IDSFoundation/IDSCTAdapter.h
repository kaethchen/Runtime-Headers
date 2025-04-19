@class NSMutableDictionary, NSHashTable;

@interface IDSCTAdapter : NSObject {
    NSHashTable *_listeners;
    id _coreTelephonyClient;
    id _cache;
    NSMutableDictionary *_registrationStateByLabelID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BOOL dualSIMCapabilityEnabled;
@property (readonly, nonatomic) BOOL isAnySIMUsable;
@property (readonly, nonatomic) BOOL isAnySIMInserted;
@property (readonly, nonatomic) BOOL supportsIdentification;
@property (readonly, nonatomic) BOOL supportsSMS;
@property (readonly, nonatomic) BOOL doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
@property (readonly, nonatomic) BOOL hasMultipleSIMs;

+ (id)sharedInstance;
+ (BOOL)isPhoneNumber:(id)a0 equivalentToExistingPhoneNumber:(id)a1;

- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (BOOL)isPhoneNumberEmergencyNumber:(id)a0;
- (id)SIMForIdentifier:(id)a0;
- (id)currentSIMsWithError:(id *)a0;
- (id)CTPNRForSIM:(id)a0;
- (id)carrierBundleValueFromAllSIMsForKey:(id)a0 ofType:(Class)a1 withFallback:(id)a2;
- (id)carrierBundleValueFromSIM:(id)a0 forKey:(id)a1 ofType:(Class)a2 withFallback:(id)a3;
- (id)contextForSim:(id)a0;
- (id)initWithCoreTelephonyClient:(id)a0 systemMonitor:(id)a1;
- (BOOL)isPNRNumber:(id)a0 andPhoneBookNumber:(id)a1 differentEnoughFromSIMIdentifier:(id)a2 toReregisterWithNewNumber:(id *)a3;

@end
