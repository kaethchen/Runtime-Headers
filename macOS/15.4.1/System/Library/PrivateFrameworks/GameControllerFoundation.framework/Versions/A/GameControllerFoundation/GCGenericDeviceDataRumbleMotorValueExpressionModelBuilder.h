@class NSString;

@interface GCGenericDeviceDataRumbleMotorValueExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) NSString *motorName;

+ (Class)modelClass;

- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
