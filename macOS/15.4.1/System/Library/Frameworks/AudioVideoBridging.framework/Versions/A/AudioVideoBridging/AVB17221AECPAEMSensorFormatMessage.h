@class AVB17221AEMSensorFormat;

@interface AVB17221AECPAEMSensorFormatMessage : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) AVB17221AEMSensorFormat *sensorFormat;

+ (id)keyPathsForValuesAffectingSensorFormat;

- (unsigned long long)minimumMutableCommandSpecificLength;
- (id)sensorFormat;
- (void)setSensorFormat:(id)a0;

@end
