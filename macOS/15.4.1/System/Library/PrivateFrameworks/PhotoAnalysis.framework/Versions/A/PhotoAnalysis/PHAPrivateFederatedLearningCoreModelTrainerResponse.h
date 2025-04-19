@class NSData, NSDictionary;

@interface PHAPrivateFederatedLearningCoreModelTrainerResponse : NSObject

@property (retain, nonatomic) NSData *dataPackage;
@property (retain, nonatomic) NSDictionary *trainingMetrics;

- (void).cxx_destruct;
- (id)initWithDataPackage:(id)a0 trainingMetrics:(id)a1;

@end
