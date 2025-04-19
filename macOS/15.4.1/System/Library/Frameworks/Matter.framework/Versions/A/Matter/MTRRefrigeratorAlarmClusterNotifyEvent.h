@class NSNumber;

@interface MTRRefrigeratorAlarmClusterNotifyEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *inactive;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *mask;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
