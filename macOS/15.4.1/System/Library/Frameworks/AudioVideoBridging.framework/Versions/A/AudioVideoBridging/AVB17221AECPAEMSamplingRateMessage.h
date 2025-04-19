@class AVB17221AEMSamplingRate;

@interface AVB17221AECPAEMSamplingRateMessage : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) AVB17221AEMSamplingRate *samplingRate;

+ (id)keyPathsForValuesAffectingSamplingRate;

- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
