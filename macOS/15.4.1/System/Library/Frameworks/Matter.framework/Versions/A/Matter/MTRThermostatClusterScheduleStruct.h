@class NSString, NSArray, NSData, NSNumber;

@interface MTRThermostatClusterScheduleStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *scheduleHandle;
@property (copy, nonatomic) NSNumber *systemMode;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *presetHandle;
@property (copy, nonatomic) NSArray *transitions;
@property (copy, nonatomic) NSNumber *builtIn;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
