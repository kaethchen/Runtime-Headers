@class NSNumber;

@interface MTRValveConfigurationAndControlClusterValveStateChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *valveState;
@property (copy, nonatomic) NSNumber *valveLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
