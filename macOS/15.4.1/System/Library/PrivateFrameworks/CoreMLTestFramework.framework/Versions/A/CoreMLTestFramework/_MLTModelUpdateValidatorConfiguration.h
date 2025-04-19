@class NSString, _MLTLogger;
@protocol MLBatchProvider;

@interface _MLTModelUpdateValidatorConfiguration : NSObject

@property (retain) NSString *recipePath;
@property (retain) _MLTLogger *logger;
@property BOOL useBatchPrediction;
@property (retain) id<MLBatchProvider> validationDataProvider;

- (id)init;
- (void).cxx_destruct;

@end
