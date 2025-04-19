@interface AVBPTPLocalClockPort : AVBPTPPort

@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyStabilityUpper;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (void)_updateFromProperties:(id)a0;

@end
