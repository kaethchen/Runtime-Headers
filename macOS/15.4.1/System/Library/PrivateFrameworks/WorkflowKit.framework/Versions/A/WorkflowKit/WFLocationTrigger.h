@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger

@property (copy, nonatomic) CLCircularRegion *region;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

+ (BOOL)supportsSecureCoding;
+ (id)timestampDateFormatter;
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)requiresNotification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isDateWithinTimeRange:(id)a0;
- (BOOL)hasValidConfiguration;

@end
