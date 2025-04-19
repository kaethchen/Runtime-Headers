@class CTSignalStrengthMeasurements;

@interface CTXPCGetSignalStrengthMeasurementsResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSignalStrengthMeasurements *measurements;

+ (id)allowedClassesForArguments;

- (id)initWithSignalStrengthMeasurements:(id)a0;

@end
