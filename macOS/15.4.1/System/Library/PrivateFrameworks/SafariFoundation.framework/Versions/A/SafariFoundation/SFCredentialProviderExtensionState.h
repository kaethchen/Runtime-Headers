@class NSString, SFExternalCredentialIdentityStoreIdentifier;

@interface SFCredentialProviderExtensionState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL supportsIncrementalUpdates;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier;
@property (readonly, copy, nonatomic) NSString *providerBundleID;

+ (id)credentialProviderExtensionWithDisabledState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEnabledState:(BOOL)a0 supportsIncrementalUpdates:(BOOL)a1;
- (id)initWithEnabledState:(BOOL)a0 supportsIncrementalUpdates:(BOOL)a1 localizedDisplayName:(id)a2 credentialIdentityStoreIdentifier:(id)a3 providerBundleID:(id)a4;
- (id)initWithEnabledState:(BOOL)a0 supportsIncrementalUpdates:(BOOL)a1 localizedDisplayName:(id)a2 providerBundleID:(id)a3;

@end
