@interface _ASDevice : NSObject

@property (class, readonly) BOOL isBiometricAuthenticationAvailable;
@property (class, readonly) BOOL isCompanionAuthenticationAvailable;
@property (class, readonly) BOOL shouldRequireLocalAuthenticationForPasswords;
@property (class, readonly) BOOL shouldRequireLocalAuthenticationForPlatformCredentials;
@property (class, readonly) long long biometryType;
@property (class, readonly) BOOL isCABLEClient;

+ (int)deviceClass;
+ (long long)_localAuthenticationBiometricsAvailability;

@end
