@class _MLTJSONReader;

@interface _MLTModelUpdateTestDataProvider : NSObject <MLBatchProvider>

@property (retain, nonatomic) _MLTJSONReader *jsonReader;
@property BOOL forTraining;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithRecipePath:(id)a0 forTraining:(BOOL)a1 error:(id *)a2;

@end
