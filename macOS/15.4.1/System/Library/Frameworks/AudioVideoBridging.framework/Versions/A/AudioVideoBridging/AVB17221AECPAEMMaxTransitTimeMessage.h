@interface AVB17221AECPAEMMaxTransitTimeMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned long long maxTransitTime;

+ (id)keyPathsForValuesAffectingMaxTransitTime;

- (id)init;
- (unsigned long long)maxTransitTime;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setMaxTransitTime:(unsigned long long)a0;

@end
