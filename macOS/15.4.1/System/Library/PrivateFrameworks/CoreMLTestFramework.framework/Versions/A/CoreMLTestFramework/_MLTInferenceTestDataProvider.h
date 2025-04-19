@class NSDictionary;

@interface _MLTInferenceTestDataProvider : NSObject <MLBatchProvider>

@property (readonly) NSDictionary *inputFeatureDict;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithInputFeaturesDictionary:(id)a0 error:(id *)a1;

@end
