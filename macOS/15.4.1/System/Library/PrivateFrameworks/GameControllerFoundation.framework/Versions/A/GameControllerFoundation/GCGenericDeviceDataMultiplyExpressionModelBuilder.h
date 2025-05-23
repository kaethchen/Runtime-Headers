@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataMultiplyExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *leftExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *rightExpression;

+ (Class)modelClass;

- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
