@interface GCGenericDeviceDataProcessorExpressionModelBuilder : NSObject

@property (class, readonly) Class modelClass;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
