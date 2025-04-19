@protocol MLBatchProvider;

@interface _MLTValidationDataBatchProviderWrapper : NSObject <MLBatchProvider>

@property (retain) id<MLBatchProvider> provider;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithBatchProvider:(id)a0;

@end
