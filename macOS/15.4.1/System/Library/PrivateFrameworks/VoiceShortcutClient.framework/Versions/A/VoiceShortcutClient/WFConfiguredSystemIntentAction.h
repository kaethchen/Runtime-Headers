@class NSArray, INAppIntent, WFExecutableAppShortcutIdentifier;

@interface WFConfiguredSystemIntentAction : WFConfiguredSystemAction

@property (retain, nonatomic) INAppIntent *intent;
@property (retain, nonatomic) WFExecutableAppShortcutIdentifier *appShortcutIdentifier;
@property (retain, nonatomic) NSArray *contextualParameters;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)associatedBundleIdentifier;
- (id)initWithIntent:(id)a0 named:(id)a1 previewIcon:(id)a2 appShortcutIdentifier:(id)a3 contextualParameters:(id)a4 shortcutsMetadata:(id)a5;
- (id)initWithIntent:(id)a0 named:(id)a1 previewIcon:(id)a2 appShortcutIdentifier:(id)a3 contextualParameters:(id)a4 shortcutsMetadata:(id)a5 colorScheme:(id)a6;

@end
