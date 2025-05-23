@class POUIRegistrationWindow, NSString, LAContext, NSData, POExtension, NSNumber, POProfile;

@interface PORegistrationContext : NSObject

@property (getter=isRepair) BOOL repair;
@property (getter=isNewPasswordUser) BOOL newPasswordUser;
@property (getter=isNewSmartCarddUser) BOOL newSmartCardUser;
@property BOOL newUserBindingComplete;
@property BOOL userNotified;
@property BOOL resetKeys;
@property (getter=isRetry) BOOL retry;
@property int failureCount;
@property long long state;
@property int authMethod;
@property long long options;
@property (retain) NSString *extensionIdentifier;
@property (retain) NSString *containerAppBundleIdentifier;
@property (retain) NSString *registrationToken;
@property BOOL useSharedDeviceKeys;
@property BOOL deviceKeysShouldChange;
@property BOOL migratingDeviceKeys;
@property BOOL userSEPKeyInvalid;
@property (retain, nonatomic) NSNumber *signingAlgorithm;
@property (retain, nonatomic) NSNumber *userSigningAlgorithm;
@property (retain, nonatomic) NSNumber *encryptionAlgorithm;
@property (retain) NSString *loginUserName;
@property (retain) NSString *userName;
@property (retain) LAContext *credentialContext;
@property BOOL authorizationProvided;
@property (retain) NSString *smartCardTokenId;
@property (retain) NSData *smartCardHash;
@property (retain) POExtension *ssoExtension;
@property long long protocolVersion;
@property (retain) POProfile *profile;
@property (retain) POUIRegistrationWindow *registrationUI;
@property BOOL userIsPlatformSSOUser;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isUserNotification;

@end
