@class NSString;

@interface PGPrecisionRecallEvaluation : NSObject

@property (readonly, nonatomic) unsigned long long falseNegatives;
@property (readonly, nonatomic) unsigned long long falsePositives;
@property (readonly, nonatomic) unsigned long long trueNegatives;
@property (readonly, nonatomic) unsigned long long truePositives;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *category;

- (id)description;
- (void).cxx_destruct;
- (double)precision;
- (id)csvHeader;
- (void)evaluateWithGroundTruthResult:(BOOL)a0 andInferenceResult:(BOOL)a1;
- (void)evaluateWithGroundTruthResults:(id)a0 andInferenceResults:(id)a1;
- (double)fMeasure;
- (double)fMeasure:(double)a0;
- (id)initWithIdentifier:(id)a0 category:(id)a1;
- (id)initWithIdentifier:(id)a0 category:(id)a1 truePositives:(unsigned long long)a2 falsePositives:(unsigned long long)a3 falseNegatives:(unsigned long long)a4 trueNegatives:(unsigned long long)a5;
- (double)recall;

@end
