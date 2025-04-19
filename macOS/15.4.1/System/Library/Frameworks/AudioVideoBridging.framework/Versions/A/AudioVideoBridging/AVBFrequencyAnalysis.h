@interface AVBFrequencyAnalysis : NSObject

@property (nonatomic) double averagePeriod;
@property (nonatomic) double averageFrequency;
@property (nonatomic) double averageTimeError;
@property (nonatomic) double lowestFrequency;
@property (nonatomic) double highestFrequency;

- (id)initWithTimeErrorSequence:(id)a0;

@end
