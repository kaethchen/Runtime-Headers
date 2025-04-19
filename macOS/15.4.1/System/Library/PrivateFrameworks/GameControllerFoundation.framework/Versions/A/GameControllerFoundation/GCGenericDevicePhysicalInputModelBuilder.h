@class NSSet;

@interface GCGenericDevicePhysicalInputModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSSet *elements;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (void)initializeWithModel:(id)a0;

@end
