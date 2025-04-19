@class NSString, NSArray, NSNumber;

@interface GCGenericDevicePhysicalInputElementModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *names;
@property (copy, nonatomic, getter=isAnalog) NSNumber *analog;
@property (copy, nonatomic) NSString *localizedNameKey;
@property (copy, nonatomic) NSString *symbolName;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
