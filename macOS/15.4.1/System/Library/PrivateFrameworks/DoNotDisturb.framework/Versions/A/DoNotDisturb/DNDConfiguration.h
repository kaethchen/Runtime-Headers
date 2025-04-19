@class DNDMutableSenderConfiguration, NSSet, NSDictionary, NSMutableSet, NSMutableDictionary, DNDBypassSettings;

@interface DNDConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSMutableSet *allowedWebApplicationIdentifiers;
@property (copy, nonatomic) NSMutableSet *deniedWebApplicationIdentifiers;
@property (readonly, nonatomic) unsigned long long suppressionType;
@property (readonly, nonatomic) unsigned long long suppressionMode;
@property (readonly, nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (readonly, nonatomic) unsigned long long hideApplicationBadges;
@property (readonly, nonatomic) unsigned long long allowIntelligentManagement;
@property (readonly, getter=isSupportedConfiguration) BOOL supportedConfiguration;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly, nonatomic) long long rawCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long applicationConfigurationType;
@property (readonly, copy, nonatomic) NSSet *applicationsWithExceptions;
@property (readonly, copy, nonatomic) NSSet *webApplicationsWithExceptions;
@property (readonly, nonatomic) unsigned long long threadConfigurationType;
@property (readonly, copy, nonatomic) NSDictionary *threadsWithExceptions;
@property (readonly, nonatomic) unsigned long long senderConfigurationType;
@property (readonly, copy, nonatomic) NSSet *contactsWithExceptions;
@property (readonly, copy, nonatomic) DNDBypassSettings *phoneCallBypassSettings;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSMutableDictionary *allowedApplicationIdentifiers;
@property (readonly, copy, nonatomic) NSMutableSet *deniedApplicationIdentifiers;
@property (readonly, copy, nonatomic) DNDMutableSenderConfiguration *senderConfiguration;

+ (unsigned long long)defaultConfigurationType;
+ (unsigned long long)defaultMinimumBreakthroughUrgency;
+ (unsigned long long)defaultSuppressionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (unsigned long long)type;
- (unsigned long long)exceptionForApplication:(id)a0;
- (unsigned long long)exceptionForContactHandle:(id)a0;
- (unsigned long long)exceptionForApplication:(id)a0 thread:(id)a1;
- (void)log:(id)a0 withPrefix:(id)a1;
- (id)_descriptionForRedacted:(BOOL)a0;
- (unsigned long long)_exceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (id)_initWithConfigurationType:(unsigned long long)a0;
- (id)_initWithSuppressionType:(unsigned long long)a0 suppressionMode:(unsigned long long)a1 allowedApplicationIdentifiers:(id)a2 deniedApplicationIdentifiers:(id)a3 allowedWebApplicationIdentifiers:(id)a4 deniedWebApplicationIdentifiers:(id)a5 senderConfiguration:(id)a6 minimumBreakthroughUrgency:(unsigned long long)a7 hideApplicationBadges:(unsigned long long)a8 allowIntelligentManagement:(unsigned long long)a9 compatibilityVersion:(long long)a10 applicationConfigurationType:(unsigned long long)a11 senderConfigurationType:(unsigned long long)a12;
- (id)allowedApplications;
- (id)deniedApplications;
- (void)diffAgainstObject:(id)a0 usingDiffBuilder:(id)a1 withDescription:(id)a2;
- (unsigned long long)exceptionForApplicationIdentifier:(id)a0;
- (unsigned long long)exceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (unsigned long long)exceptionForContact:(id)a0;
- (unsigned long long)exceptionForWebApplicationIdentifier:(id)a0;
- (unsigned long long)threadConfigurationType;

@end
