@class NSArray, NSString;

@interface HMRestrictedGuestHomeAccessSchedule : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *weekDayRules;
@property (copy) NSArray *yearDayRules;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (BOOL)doDaysOfTheWeek:(unsigned long long)a0 containWeekday:(id)a1;
+ (BOOL)isDate:(id)a0 inTimeZone:(id)a1 withinAllowedWeekDayScheduleRules:(id)a2;
+ (BOOL)isDate:(id)a0 withinAllowedTimeForSchedule:(id)a1 forHomeInTimeZone:(id)a2;
+ (BOOL)isDate:(id)a0 withinAllowedYearDayScheduleRules:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithWeekDayRules:(id)a0;
- (id)initWithWeekDayRules:(id)a0 yearDayRules:(id)a1;
- (id)initWithYearDayRules:(id)a0;

@end
