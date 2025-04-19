@class NSHashTable, NSMutableDictionary, NSDictionary, LACCacheSync, NSError, NSObject, BKDevice;
@protocol OS_dispatch_queue, LACBiometryDelegate;

@interface LACBiometryHelper : NSObject {
    NSMutableDictionary *_databaseHashesByUserId;
    LACCacheSync *_biolockoutStateCache;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) NSError *fault;
@property (readonly, nonatomic) NSError *permanentError;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSDictionary *identities;
@property (readonly, nonatomic) NSDictionary *adminIdentities;
@property (readonly, nonatomic) BKDevice *device;
@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) BOOL hasInternalSensor;
@property (readonly, nonatomic) BOOL supportsAccessories;
@property (readonly, nonatomic) BOOL hasPairedAccessory;
@property (readonly, nonatomic) BOOL hasPairedAccessoryConnected;
@property (weak, nonatomic) id<LACBiometryDelegate> delegate;

+ (id)sharedInstance;
+ (id)touchIdInstance;
+ (id)faceIdInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_setup;
- (id)catacombUUID:(id)a0;
- (id)dumpStatus;
- (BOOL)isLockedOutForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (BOOL)_isTrustedAccessorySupported;
- (BOOL)isEnrolled:(id)a0 error:(id *)a1;
- (void)_checkOperationShouldFinishDueToClamshellAfterLastAccessoryLost;
- (id)_errorDisconnected:(BOOL)a0 notEnrolled:(BOOL)a1;
- (unsigned int)_uidFromUserId:(id)a0;
- (id)_protectedConfigurationForUser:(id)a0;
- (id)_biolockoutStateForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (void)_clearHashes;
- (id)_dumpEnvironmentForUser:(id)a0;
- (void)_handleAccessoriesChangedNotification;
- (void)_handleEnrollmentChangedNotification;
- (void)_handleLockoutStateChangedNotification;
- (id)_identitiesForUser:(id)a0 adminOnly:(BOOL)a1;
- (BOOL)_isClamshellPreventingOperationOnInternalSensor;
- (BOOL)_isEnrolled:(id)a0 adminOnly:(BOOL)a1 hardwareMustBeAvailable:(BOOL)a2 error:(id *)a3;
- (id)_lockoutErrorForExtendedState:(long long)a0 userId:(id)a1;
- (void)_processAccessory:(id)a0;
- (void)_refreshAccessories;
- (void)_refreshIdentitiesDueToAccessoryChange:(BOOL)a0;
- (void)_setupDeviceWithDescriptor:(id)a0;
- (void)_setupWithFault:(id)a0;
- (void)_setupWithPermanentError:(id)a0;
- (BOOL)_shouldCacheIdentities;
- (BOOL)_shouldRetryAvailableDevices;
- (id)biometryDatabaseHashForUser:(id)a0 error:(id *)a1;
- (id)biometryLostErrorForUser:(id)a0 request:(id)a1;
- (BOOL)deviceHasBiometryWithError:(id *)a0;
- (id)initWithBiometryType:(long long)a0;
- (BOOL)isAnyUserEnrolledWithAdminRole:(BOOL)a0 error:(id *)a1;
- (BOOL)isAnyUserEnrolledWithError:(id *)a0;
- (BOOL)isBiometryOnForApplePay:(id)a0;
- (BOOL)isBiometryOnForUnlock:(id)a0;
- (BOOL)isEnrolledWithoutHardware:(id)a0 error:(id *)a1;
- (BOOL)isIdentificationEnabled:(id)a0;
- (BOOL)isLockedOutForUser:(id)a0 adminOnly:(BOOL)a1 request:(id)a2 error:(id *)a3;
- (BOOL)isNotLockedOutForAnyUserWithAdminRole:(BOOL)a0 request:(id)a1 error:(id *)a2;
- (BOOL)isPeriocularMatchingEnabledForUser:(id)a0;
- (id)lockoutErrorForState:(long long)a0 userId:(id)a1;
- (void)resetBiometry;
- (BOOL)userPresent:(BOOL *)a0 error:(id *)a1;

@end
