@class MTRDemandResponseLoadControlClusterDutyCycleControlStruct, MTRDemandResponseLoadControlClusterTemperatureControlStruct, MTRDemandResponseLoadControlClusterHeatingSourceControlStruct, NSData, MTRDemandResponseLoadControlClusterPowerSavingsControlStruct, NSNumber, MTRDemandResponseLoadControlClusterAverageLoadControlStruct;

@interface MTRDemandResponseLoadControlClusterLoadControlEventStatusChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *eventID;
@property (copy, nonatomic) NSNumber *transitionIndex;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *criticality;
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
