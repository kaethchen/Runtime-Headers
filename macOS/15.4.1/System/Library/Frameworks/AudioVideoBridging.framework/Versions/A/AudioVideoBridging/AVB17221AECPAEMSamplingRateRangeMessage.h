@class AVB17221AEMSamplingRate, AVB17221AEMSamplingRateRange;

@interface AVB17221AECPAEMSamplingRateRangeMessage : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) AVB17221AEMSamplingRate *minimumSamplingRate;
@property (copy, nonatomic) AVB17221AEMSamplingRate *maximumSamplingRate;
@property (copy, nonatomic) AVB17221AEMSamplingRateRange *samplingRateRange;

+ (id)keyPathsForValuesAffectingMaximumSamplingRate;
+ (id)keyPathsForValuesAffectingMinimumSamplingRate;
+ (id)keyPathsForValuesAffectingSamplingRateRange;

- (id)maximumSamplingRate;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (id)minimumSamplingRate;
- (id)samplingRateRange;
- (void)setMaximumSamplingRate:(id)a0;
- (void)setMinimumSamplingRate:(id)a0;
- (void)setSamplingRateRange:(id)a0;

@end
