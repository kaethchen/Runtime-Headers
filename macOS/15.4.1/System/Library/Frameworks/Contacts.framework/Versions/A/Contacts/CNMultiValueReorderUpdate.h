@class NSOrderedSet;

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate

@property (readonly, copy, nonatomic) NSOrderedSet *values;

- (id)description;
- (void).cxx_destruct;
- (id)initWithValues:(id)a0;
- (void)applyToMutableMultiValue:(id)a0 withIdentifierMap:(id)a1;
- (long long)compareIndexOfIdentifier:(id)a0 toIndexOfIdentifier:(id)a1;
- (void)applyToABCDContact:(id)a0 orderedABCDOwnedObjects:(id)a1 propertyDescription:(id)a2;

@end
