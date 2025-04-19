@class NSString, GCGenericDevicePhysicalInputModel, GCGenericDeviceDriverModel, NSNumber;

@interface GCGenericDeviceModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *productCategory;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSNumber *formFitting;
@property (copy, nonatomic) GCGenericDeviceDriverModel *driver;
@property (copy, nonatomic) GCGenericDevicePhysicalInputModel *physicalInput;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
