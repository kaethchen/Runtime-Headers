@class NSString, NSArray, NSDictionary;

@interface CNMultiValuePropertyDescription : CNPropertyDescription <CNContactCoreDataMultiValueProperty>

@property (readonly, copy, nonatomic) NSString *coreDataKey;
@property (readonly, retain, nonatomic) NSArray *coreDataRelationshipKeyPathsForPrefetching;
@property (readonly, retain, nonatomic) NSArray *coreDataPropertyKeysForPrefetching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coreDataPredicateKeyPath;
@property (readonly, retain, nonatomic) NSDictionary *subCoreDataPredicatePropertiesByKey;
@property (readonly, nonatomic) long long coreDataBitMask;
@property (readonly, retain, nonatomic) NSDictionary *coreDataBitMaskedValuesMap;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) BOOL isRelationship;
@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) BOOL isSingleValue;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) NSArray *standardLabels;
@property (readonly, nonatomic) NSArray *managedLabels;
@property (readonly, nonatomic) Class labeledValueClass;
@property (readonly, nonatomic) id /* block */ plistTransform;
@property (readonly, nonatomic) id /* block */ fromPlistTransform;

- (id)localizedStringForLabel:(id)a0;
- (id)valueFromCoreDataContact:(id)a0;
- (void)assertValueType:(id)a0;
- (BOOL)canSaveLabeledValue:(id)a0;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;
- (id)coreDataOwnedEntityName;
- (id /* block */)coreDataValueForKeyTransform;
- (BOOL)crashOnNilTransformedValues;
- (BOOL)doesLabeledValue:(id)a0 existInOwnedObjects:(id)a1;
- (BOOL)isEqualIgnoringIdentifiersForContact:(id)a0 other:(id)a1;
- (BOOL)isValidMultiValueValue:(id)a0 error:(id *)a1;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)newOwnedObjectForCoreDataContact:(id)a0;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (id)standardLabelsWithOptions:(unsigned long long)a0;
- (id)stringForIndexingForContact:(id)a0;
- (id)valueWithResetIdentifiers:(id)a0;

@end
