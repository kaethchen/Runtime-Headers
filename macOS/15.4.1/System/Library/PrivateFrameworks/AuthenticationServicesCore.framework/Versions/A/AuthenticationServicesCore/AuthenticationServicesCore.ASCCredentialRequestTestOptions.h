@class NSString;

@interface AuthenticationServicesCore.ASCCredentialRequestTestOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isKeychainSyncEnabled;
    void /* unknown type, empty encoding */ shouldAutoFillFromICloudKeychain;
    void /* unknown type, empty encoding */ localAuthenticationResult;
    void /* unknown type, empty encoding */ hasPasscode;
    void /* unknown type, empty encoding */ biometryType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
