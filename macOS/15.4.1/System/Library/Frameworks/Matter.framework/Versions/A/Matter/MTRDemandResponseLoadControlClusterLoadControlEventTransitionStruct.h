@class MTRDemandResponseLoadControlClusterDutyCycleControlStruct, MTRDemandResponseLoadControlClusterTemperatureControlStruct, MTRDemandResponseLoadControlClusterHeatingSourceControlStruct, MTRDemandResponseLoadControlClusterPowerSavingsControlStruct, NSNumber, MTRDemandResponseLoadControlClusterAverageLoadControlStruct;

@interface MTRDemandResponseLoadControlClusterLoadControlEventTransitionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *control;
@property (copy, nonatomic) MTRDemandResponseLoadControlClusterTemperatureControlStruct *temperatureControl;
@property (copy, nonatomic) MTRDemandResponseLoadControlClusterAverageLoadControlStruct *averageLoadControl;
@property (copy, nonatomic) MTRDemandResponseLoadControlClusterDutyCycleControlStruct *dutyCycleControl;
@property (copy, nonatomic) MTRDemandResponseLoadControlClusterPowerSavingsControlStruct *powerSavingsControl;
@property (copy, nonatomic) MTRDemandResponseLoadControlClusterHeatingSourceControlStruct *heatingSourceControl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
