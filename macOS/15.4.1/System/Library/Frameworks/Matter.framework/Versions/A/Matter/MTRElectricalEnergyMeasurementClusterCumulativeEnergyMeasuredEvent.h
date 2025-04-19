@class MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct;

@interface MTRElectricalEnergyMeasurementClusterCumulativeEnergyMeasuredEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct *energyImported;
@property (copy, nonatomic) MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct *energyExported;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
