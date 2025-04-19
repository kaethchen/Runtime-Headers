@class BKDevice, NSObject;
@protocol OS_dispatch_queue;

@interface UNCBiometricResource : NSObject {
    BOOL _isPasscodeSet;
    BOOL _isBiometricUnlockAllowed;
    BOOL _hasEnrolledPearlIdentities;
    NSObject<OS_dispatch_queue> *_queue;
    BKDevice *_pearlDevice;
}

@property (readonly, nonatomic) BOOL hasPearlCapability;
@property (readonly, nonatomic) BOOL isPearlEnabledAndEnrolled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateIsBiometricUnlockAllowed;
- (void)_initializeBiometricKit;
- (void)_registerForBKEnrollmentChange;
- (void)_registerForBiometricUnlockAllowedChange;
- (void)_registerForPasscodeChange;
- (void)_unregisterForBKEnrollmentChange;
- (void)_unregisterForBiometricUnlockAllowedChange;
- (void)_updateHasEnrolledPearlIdentities;
- (void)_updateIsPasscodeSet;

@end
