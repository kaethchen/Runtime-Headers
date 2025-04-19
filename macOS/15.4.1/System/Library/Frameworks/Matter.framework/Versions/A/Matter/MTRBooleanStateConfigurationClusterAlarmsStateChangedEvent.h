@class NSNumber;

@interface MTRBooleanStateConfigurationClusterAlarmsStateChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *alarmsActive;
@property (copy, nonatomic) NSNumber *alarmsSuppressed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
