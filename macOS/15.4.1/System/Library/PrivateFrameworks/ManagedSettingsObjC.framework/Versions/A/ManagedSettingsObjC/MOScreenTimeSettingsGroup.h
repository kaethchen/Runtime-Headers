@class NSDictionary, MOPersistableKeyStringDictionarySettingMetadata;

@interface MOScreenTimeSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOPersistableKeyStringDictionarySettingMetadata *applicationShieldPoliciesMetadata;
@property (class, readonly, nonatomic) MOPersistableKeyStringDictionarySettingMetadata *categoryShieldPoliciesMetadata;
@property (class, readonly, nonatomic) MOPersistableKeyStringDictionarySettingMetadata *webDomainShieldPoliciesMetadata;

@property (retain, nonatomic) NSDictionary *applicationShieldPolicies;
@property (retain, nonatomic) NSDictionary *categoryShieldPolicies;
@property (retain, nonatomic) NSDictionary *webDomainShieldPolicies;

+ (id)groupName;

@end
