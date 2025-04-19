@class NSString;

@interface PowerUIRelevantDrainPredictionResult : NSObject

@property (nonatomic) double confidence;
@property (nonatomic) double threshold;
@property (nonatomic) BOOL significantDrainAhead;
@property (nonatomic) unsigned long long suggestedLimit;
@property (retain, nonatomic) PowerUIRelevantDrainPredictionResult *prevStageResult;
@property (nonatomic) long long predictionScheme;
@property (retain, nonatomic) NSString *predictionSchemeString;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setScheme:(long long)a0;
- (void)setSuggestedLimitForSignificantDrain:(unsigned long long)a0;

@end
