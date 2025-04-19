@interface CNAddressingGrammarsDescription : CNAddressingGrammarsEncryptedDescription

- (id)init;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)CNValueForContact:(id)a0;
- (id)_encryptedValueFromLabeledValue:(id)a0;
- (BOOL)canSaveLabeledValue:(id)a0;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (BOOL)crashOnNilTransformedValues;
- (id /* block */)fromPlistTransform;
- (BOOL)isNonnull;
- (Class)labeledValueClass;
- (id /* block */)ownedObjectToLabeledValueValueTransform;
- (id /* block */)plistTransform;
- (void)setCNValue:(id)a0 onContact:(id)a1;

@end
