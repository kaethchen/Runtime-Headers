@class NSDictionary;

@interface _MLTGradientTestDataProvider : NSObject <MLBatchProvider>

@property (retain) NSDictionary *data;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithDataSample:(id)a0;

@end
