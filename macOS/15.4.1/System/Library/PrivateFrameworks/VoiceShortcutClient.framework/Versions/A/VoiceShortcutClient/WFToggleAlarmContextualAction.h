@class NSString;

@interface WFToggleAlarmContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSString *alarmIdentifier;
@property (readonly, copy, nonatomic) NSString *alarmName;
@property (readonly, nonatomic) unsigned long long operation;

+ (BOOL)supportsSecureCoding;
+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)settingBiomeStreamIdentifier;
- (id)_staticDisplayStringForDecoding;
- (BOOL)availableFromLockedContext;
- (id)displayStringFromOperation:(unsigned long long)a0 alarmName:(id)a1;
- (id)initWithAlarmIdentifier:(id)a0 alarmName:(id)a1 alarmData:(id)a2 operation:(unsigned long long)a3;
- (id)initWithAlarmIdentifier:(id)a0 alarmName:(id)a1 operation:(unsigned long long)a2;
- (BOOL)showsUserInterfaceWhenRunning;

@end
