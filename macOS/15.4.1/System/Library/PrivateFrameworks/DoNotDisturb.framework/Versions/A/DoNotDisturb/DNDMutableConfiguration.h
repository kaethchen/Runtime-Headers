@class NSDictionary, NSSet, DNDSenderConfiguration;

@interface DNDMutableConfiguration : DNDConfiguration

@property (nonatomic) unsigned long long suppressionType;
@property (nonatomic) unsigned long long suppressionMode;
@property (nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (nonatomic) unsigned long long hideApplicationBadges;
@property (nonatomic) unsigned long long allowIntelligentManagement;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic) unsigned long long applicationConfigurationType;
@property (nonatomic) unsigned long long senderConfigurationType;
@property (copy, nonatomic) NSDictionary *allowedApplicationIdentifiers;
@property (copy, nonatomic) NSSet *deniedApplicationIdentifiers;
@property (copy, nonatomic) DNDSenderConfiguration *senderConfiguration;

+ (id)defaultConfiguration;
+ (id)configurationOfType:(unsigned long long)a0;

- (void)setCompatibilityVersion:(long long)a0;
- (void)setSuppressionMode:(unsigned long long)a0;
- (void)setSuppressionType:(unsigned long long)a0;
- (void)removeExceptionForContactGroup:(id)a0;
- (id)_configurationForApplicationIdentifier:(id)a0;
- (BOOL)hasSecureData;
- (void)removeExceptionForApplication:(id)a0;
- (void)removeExceptionForApplication:(id)a0 thread:(id)a1;
- (void)removeExceptionForApplicationIdentifier:(id)a0;
- (void)removeExceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (void)removeExceptionForContact:(id)a0;
- (void)removeExceptionForContactType:(unsigned long long)a0;
- (void)removeExceptionForWebApplicationIdentifier:(id)a0;
- (void)setAllowIntelligentManagement:(unsigned long long)a0;
- (void)setAllowedApplicationIdentifiers:(id)a0;
- (void)setAllowedApplications:(id)a0;
- (void)setAllowedWebApplicationIdentifiers:(id)a0;
- (void)setApplicationConfigurationType:(unsigned long long)a0;
- (void)setDeniedApplicationIdentifiers:(id)a0;
- (void)setDeniedApplications:(id)a0;
- (void)setDeniedWebApplicationIdentifiers:(id)a0;
- (void)setExceptionForApplication:(id)a0;
- (void)setExceptionForApplication:(id)a0 thread:(id)a1;
- (void)setExceptionForApplicationIdentifier:(id)a0;
- (void)setExceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (void)setExceptionForContact:(id)a0;
- (void)setExceptionForContactGroup:(id)a0;
- (void)setExceptionForContactType:(unsigned long long)a0;
- (void)setExceptionForWebApplicationIdentifier:(id)a0;
- (void)setExceptionOfType:(unsigned long long)a0 forApplication:(id)a1;
- (void)setExceptionOfType:(unsigned long long)a0 forApplication:(id)a1 thread:(id)a2;
- (void)setExceptionOfType:(unsigned long long)a0 forApplicationIdentifier:(id)a1;
- (void)setExceptionOfType:(unsigned long long)a0 forApplicationIdentifier:(id)a1 thread:(id)a2;
- (void)setExceptionOfType:(unsigned long long)a0 forContact:(id)a1;
- (void)setExceptionOfType:(unsigned long long)a0 forContactGroup:(id)a1;
- (void)setExceptionOfType:(unsigned long long)a0 forContactType:(unsigned long long)a1;
- (void)setHideApplicationBadges:(unsigned long long)a0;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)a0;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)a0 forApplication:(id)a1;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)a0 forApplicationIdentifier:(id)a1;
- (void)setPhoneCallBypassSettings:(id)a0;
- (void)setSenderConfiguration:(id)a0;
- (void)setSenderConfigurationType:(unsigned long long)a0;

@end
