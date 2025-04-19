@class NSError, LAContext, NSData;

@interface ICLocalAuthentication : NSObject

@property (class, readonly, nonatomic) long long biometricsPolicy;
@property (class, readonly, nonatomic) LAContext *biometricsContext;
@property (class, readonly, nonatomic) NSError *biometricsContextError;
@property (class, readonly, nonatomic) BOOL biometricsAvailable;
@property (class, readonly, nonatomic) BOOL biometricsEnrolled;
@property (class, readonly, nonatomic) BOOL biometricsLockedOut;
@property (class, readonly, nonatomic) long long biometricsType;
@property (class, readonly, copy, nonatomic) NSData *biometricsPolicyState;
@property (class, readonly, nonatomic) BOOL hasPasscode;

+ (void)setHasPasscode:(BOOL)a0;
+ (void)checkBiometricsPolicyState;
+ (void)refreshBiometricsContext;
+ (void)refreshHasPasscode;
+ (void)setBiometricsContext:(id)a0;
+ (void)setBiometricsContextError:(id)a0;

@end
