@class NSString, GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataElementExistsExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) NSString *elementIdentifier;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *trueExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *falseExpression;

+ (Class)modelClass;

- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
