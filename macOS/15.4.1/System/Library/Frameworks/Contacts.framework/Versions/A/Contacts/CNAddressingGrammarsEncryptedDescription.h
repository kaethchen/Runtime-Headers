@class NSString;

@interface CNAddressingGrammarsEncryptedDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)coreDataKey;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)equivalentLabelSets;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)CNValueForContact:(id)a0;
- (id)_encryptedValueFromLabeledValue:(id)a0;
- (BOOL)canSaveLabeledValue:(id)a0;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (void)copyFromLabeledValue:(id)a0 toOwnedObject:(id)a1;
- (id)coreDataOwnedEntityName;
- (BOOL)isNonnull;
- (Class)labeledValueClass;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)standardLabels;
- (id)stringForIndexingForContact:(id)a0;
- (id)subCoreDataPredicatePropertiesByKey;

@end
