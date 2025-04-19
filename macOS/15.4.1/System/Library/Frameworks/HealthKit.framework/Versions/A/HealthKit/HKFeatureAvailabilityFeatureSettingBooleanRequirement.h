@class NSString;

@interface HKFeatureAvailabilityFeatureSettingBooleanRequirement : HKFeatureAvailabilityOnboardingRecordRequirement

@property (readonly, copy, nonatomic) NSString *settingsKey;
@property (readonly, nonatomic) BOOL settingsValue;
@property (readonly, nonatomic) BOOL isSatisfiedWhenSettingIsAbsent;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 settingsKey:(id)a1 settingsValue:(BOOL)a2 isSatisfiedWhenSettingIsAbsent:(BOOL)a3;
- (id)isSatisfiedWithOnboardingRecord:(id)a0 dataSource:(id)a1 error:(id *)a2;

@end
