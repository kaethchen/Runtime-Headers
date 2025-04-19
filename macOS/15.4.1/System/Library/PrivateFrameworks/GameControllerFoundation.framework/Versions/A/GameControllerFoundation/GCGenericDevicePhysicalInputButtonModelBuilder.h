@interface GCGenericDevicePhysicalInputButtonModelBuilder : GCGenericDevicePhysicalInputElementModelBuilder

@property (nonatomic) double pressedThreshold;
@property (nonatomic) double touchedThreshold;
@property (nonatomic) long long sourcePressedValueExtendedEventFieldIndex;
@property (nonatomic) long long sourceTouchedValueExtendedEventFieldIndex;

+ (Class)modelClass;

- (void)reset;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
