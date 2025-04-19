@interface WFToggleAccessibilityContextualAction : WFContextualAction

@property (readonly, nonatomic) unsigned long long setting;

+ (BOOL)supportsSecureCoding;
+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSetting:(unsigned long long)a0;
- (id)settingBiomeStreamIdentifier;
- (id)_staticDisplayStringForDecoding;
- (id)associatedSettingsPreference;
- (BOOL)availableFromLockedContext;
- (id)settingDescriptionFromSetting:(unsigned long long)a0;

@end
