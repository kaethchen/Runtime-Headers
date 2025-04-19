@interface AVB17221AECPAEMGetPTPPortPDelayMonitoringCountResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short maximum24HourMeasurements;
@property (nonatomic) unsigned short countOf24HourMeasurements;
@property (nonatomic) unsigned short maximum15MinuteMeasurements;
@property (nonatomic) unsigned short countOf15MinuteMeasurements;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingCountOf15MinuteMeasurements;
+ (id)keyPathsForValuesAffectingCountOf24HourMeasurements;
+ (id)keyPathsForValuesAffectingMaximum15MinuteMeasurements;
+ (id)keyPathsForValuesAffectingMaximum24HourMeasurements;

- (id)init;
- (void)setCountOf15MinuteMeasurements:(unsigned short)a0;
- (void)setMaximum15MinuteMeasurements:(unsigned short)a0;
- (unsigned short)countOf15MinuteMeasurements;
- (unsigned short)countOf24HourMeasurements;
- (unsigned short)maximum15MinuteMeasurements;
- (unsigned short)maximum24HourMeasurements;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setCountOf24HourMeasurements:(unsigned short)a0;
- (void)setMaximum24HourMeasurements:(unsigned short)a0;

@end
