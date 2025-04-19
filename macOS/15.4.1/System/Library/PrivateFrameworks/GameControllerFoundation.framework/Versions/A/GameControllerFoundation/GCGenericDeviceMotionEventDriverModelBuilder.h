@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceMotionEventDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *accelerometerXExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *accelerometerYExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *accelerometerZExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *gyroXExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *gyroYExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *gyroZExpression;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (void)initializeWithModel:(id)a0;

@end
