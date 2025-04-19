@class CHSIntentReference, NSString, CHSExtensionIdentity;

@interface CHSWidget : NSObject <BSXPCSecureCoding, BSDescriptionProviding, CHSWidgetIdentifiable, NSCopying, NSSecureCoding> {
    NSString *_kind;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) CHSIntentReference *intentReference;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, copy, nonatomic) NSString *personaIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)matches:(id)a0;
- (id)intent;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)extensionBundleIdentifier;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 family:(long long)a3 intent:(id)a4;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 family:(long long)a2 intent:(id)a3 activityIdentifier:(id)a4;
- (BOOL)matchesPersonality:(id)a0;
- (id)_loggingIdentifierWithMetrics:(id)a0;
- (id)_loggingIdentifierWithMetrics:(id)a0 prefix:(id)a1;
- (id)_loggingIdentifierWithoutMetrics;
- (id)containerBundleIdentifier;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 family:(long long)a3 intent:(id)a4 activityIdentifier:(id)a5;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 family:(long long)a2 intent:(id)a3;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 family:(long long)a2 intent:(id)a3 activityIdentifier:(id)a4 personaIdentifier:(id)a5;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 family:(long long)a2 intentReference:(id)a3 activityIdentifier:(id)a4;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 family:(long long)a2 intentReference:(id)a3 activityIdentifier:(id)a4 personaIdentifier:(id)a5;
- (id)initWithPersonality:(id)a0 family:(long long)a1 intent:(id)a2;
- (id)initWithWidgetIdentity:(id)a0 family:(long long)a1 intent:(id)a2 activityIdentifier:(id)a3;
- (id)sourceDeviceIdentifier;
- (id)widgetByRemovingPersona;
- (id)widgetByReplacingIntent:(id)a0;

@end
