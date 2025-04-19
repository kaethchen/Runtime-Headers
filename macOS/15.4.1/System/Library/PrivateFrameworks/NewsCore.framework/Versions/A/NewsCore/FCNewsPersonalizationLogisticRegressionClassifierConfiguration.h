@class NSNumber;

@interface FCNewsPersonalizationLogisticRegressionClassifierConfiguration : NSObject

@property (retain, nonatomic) NSNumber *l2Penalty;
@property (retain, nonatomic) NSNumber *l1Penalty;
@property (retain, nonatomic) NSNumber *maximumIterations;
@property (retain, nonatomic) NSNumber *stepSize;
@property (retain, nonatomic) NSNumber *convergenceThreshold;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
