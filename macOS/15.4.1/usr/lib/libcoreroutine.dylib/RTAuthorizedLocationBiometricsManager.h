@class RTPlatform, RTDefaultsManager, NSDate, RTTrustedTimeCache;

@interface RTAuthorizedLocationBiometricsManager : NSObject

@property (retain, nonatomic) NSDate *dateOfLastUpdate;
@property (retain, nonatomic) NSDate *dateOfMostRecentBiometricAuthentication;
@property (readonly, nonatomic) RTTrustedTimeCache *trustedTimeCache;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTPlatform *platform;

- (void).cxx_destruct;
- (BOOL)_getTimeSinceLastSuccessfulBiometricAuthentication:(double *)a0;
- (BOOL)defaultOverrideTimeSinceLastSuccessfulBiometricAuthentication:(double *)a0;
- (id)initWithTrustedTimeCache:(id)a0 defaultsManager:(id)a1;
- (id)updateDateOfLastSuccessfulBiometricAuthentication;

@end
