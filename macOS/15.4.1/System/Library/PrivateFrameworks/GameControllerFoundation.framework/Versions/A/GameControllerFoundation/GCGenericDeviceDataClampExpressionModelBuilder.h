@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataClampExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *minExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *maxExpression;

+ (Class)modelClass;

- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
