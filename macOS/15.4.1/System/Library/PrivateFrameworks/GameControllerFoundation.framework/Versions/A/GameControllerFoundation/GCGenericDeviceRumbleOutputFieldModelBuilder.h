@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceRumbleOutputFieldModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *offsetExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sizeExpression;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (void)initializeWithModel:(id)a0;

@end
