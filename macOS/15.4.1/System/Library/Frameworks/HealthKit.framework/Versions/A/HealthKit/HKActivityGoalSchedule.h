@class HKQuantity;

@interface HKActivityGoalSchedule : HKSample <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long goalType;
@property (retain, nonatomic) HKQuantity *mondayGoal;
@property (retain, nonatomic) HKQuantity *tuesdayGoal;
@property (retain, nonatomic) HKQuantity *wednesdayGoal;
@property (retain, nonatomic) HKQuantity *thursdayGoal;
@property (retain, nonatomic) HKQuantity *fridayGoal;
@property (retain, nonatomic) HKQuantity *saturdayGoal;
@property (retain, nonatomic) HKQuantity *sundayGoal;

+ (BOOL)_isConcreteObjectClass;
+ (id)activityGoalScheduleWithDate:(id)a0 goalType:(long long)a1 goal:(id)a2 device:(id)a3 metadata:(id)a4;
+ (id)activityGoalScheduleWithDate:(id)a0 goalType:(long long)a1 mondayGoal:(id)a2 tuesdayGoal:(id)a3 wednesdayGoal:(id)a4 thursdayGoal:(id)a5 fridayGoal:(id)a6 saturdayGoal:(id)a7 sundayGoal:(id)a8 device:(id)a9 metadata:(id)a10;
+ (BOOL)supportsEquivalence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;

@end
