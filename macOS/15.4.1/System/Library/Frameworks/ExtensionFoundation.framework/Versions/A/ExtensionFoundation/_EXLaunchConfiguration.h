@class NSArray, NSString, NSDictionary, _EXExtensionIdentity;

@interface _EXLaunchConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _extensionIdentity;
    void /* unknown type, empty encoding */ preferredLanguages;
    void /* unknown type, empty encoding */ sandboxProfileName;
    void /* unknown type, empty encoding */ additionalEnvironmentVariables;
    void /* unknown type, empty encoding */ assertionAttributes;
    void /* unknown type, empty encoding */ networkApplicationID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, retain) void /* unknown type, empty encoding */ instanceIdentifier;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (nonatomic, copy) NSString *sandboxProfileName;
@property (nonatomic, copy) NSDictionary *additionalEnvironmentVariables;
@property (nonatomic, copy) void /* unknown type, empty encoding */ launchPersona;
@property (nonatomic, copy) NSArray *assertionAttributes;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (BOOL)configureLaunchContext:(id)a0 error:(id *)a1;
+ (BOOL)configureRBInfoOnLaunchContext:(id)a0 error:(id *)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionIdentity:(id)a0;
- (BOOL)isLaunchConfigurationEqual:(id)a0;
- (id)rbsProcessIdentityWithHost:(id)a0;

@end
