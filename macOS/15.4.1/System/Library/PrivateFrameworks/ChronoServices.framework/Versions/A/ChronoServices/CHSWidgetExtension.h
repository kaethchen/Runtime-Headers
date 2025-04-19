@class NSString, CHSExtensionIdentity, CHSEntitlementCollection, NSArray;

@interface CHSWidgetExtension : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying> {
    unsigned long long _hashValue;
    BOOL _hasValidHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CHSEntitlementCollection *entitlements;
@property (readonly, copy, nonatomic) CHSEntitlementCollection *entitlements;
@property (readonly, nonatomic) CHSExtensionIdentity *identity;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *containerBundleLocalizedDisplayName;
@property (readonly, nonatomic) long long dataProtectionLevel;
@property (readonly, nonatomic) NSArray *orderedControlDescriptors;
@property (readonly, nonatomic) NSArray *orderedWidgetDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)extensionBundleIdentifier;
- (id)descriptors;
- (id)containerBundleIdentifier;
- (id)controlDescriptorForKind:(id)a0;
- (id)copyFilteredToOptions:(id)a0;
- (id)initFromExtension:(id)a0;
- (id)initFromExtension:(id)a0 includeIntents:(BOOL)a1;
- (BOOL)isLinkedOnOrAfter:(unsigned long long)a0;
- (id)orderedDescriptors;
- (id)sourceDeviceIdentifier;
- (id)succinctDescriptionBuilderWithBundleIDInsteadOfFullIdentity:(BOOL)a0;
- (id)succinctDescriptionWithBundleIDWithoutFullIdentity;
- (id)widgetDescriptorForKind:(id)a0;

@end
