@class AVB17221AEMSamplingRate;

@interface AVB17221AEMCRFStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned char type;
@property unsigned short timestampInterval;
@property unsigned char timestampsPerPDU;
@property (copy, nonatomic) AVB17221AEMSamplingRate *samplingRate;

+ (id)keyPathsForValuesAffectingTimestampInterval;
+ (id)keyPathsForValuesAffectingTimestampsPerPDU;
+ (id)keyPathsForValuesAffectingType;

- (id)init;
- (BOOL)isClockFormat;
- (BOOL)isSupportedFormat;
- (unsigned short)maximumIntervalFramesPerIntervalPeriod:(unsigned int)a0;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (id)packetRate;

@end
