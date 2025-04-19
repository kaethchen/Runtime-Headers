@class NSData, NSNumber, NSString;

@interface MTRThermostatClusterPresetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *presetHandle;
@property (copy, nonatomic) NSNumber *presetScenario;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *coolingSetpoint;
@property (copy, nonatomic) NSNumber *heatingSetpoint;
@property (copy, nonatomic) NSNumber *builtIn;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
