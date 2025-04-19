@interface AVB17221AECPAEMClockSourceMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short clockSourceIndex;

+ (id)keyPathsForValuesAffectingClockSourceIndex;

- (id)init;
- (unsigned short)clockSourceIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setClockSourceIndex:(unsigned short)a0;

@end
