@interface DefaultUIHelper : NSObject

+ (id)sharedInstance;

- (id)identityKeysForEntityName:(id)a0;
- (id)_attributedStringForRecordNode:(id)a0 relationshipName:(id)a1 withComparisonNodes:(id)a2;
- (id)_attributedStringForValueInRecordNode:(id)a0 propertyName:(id)a1 isIdentifierProperty:(BOOL)a2 isChangedProperty:(BOOL)a3;
- (id)_colorSwatchTextAttachmentForColor:(id)a0 borderColor:(id)a1;
- (id)_attributedStringForRecordNode:(id)a0 forKeys:(id)a1 joinerString:(id)a2 withComparisonNodes:(id)a3;
- (id)_attributedStringForRecordNode:(id)a0 relationshipName:(id)a1 withComparisonNodes:(id)a2 childChangeType:(int)a3;
- (id)_prependedLabelForNode:(id)a0 relationshipName:(id)a1 comparisonNodes:(id)a2 changeType:(int)a3;
- (BOOL)attributedString:(id *)a0 forRecordNode:(id)a1 dependentPropertyNames:(id)a2 withComparisonNodes:(id)a3;
- (BOOL)attributedString:(id *)a0 forRecordNode:(id)a1 propertyName:(id)a2 withComparisonNodes:(id)a3;
- (BOOL)attributedString:(id *)a0 forRecordNode:(id)a1 withComparisonNodes:(id)a2;
- (BOOL)attributedStringLabel:(id *)a0 forRecordNode:(id)a1 propertyName:(id)a2 withComparisonNodes:(id)a3;
- (BOOL)identityString:(id *)a0 forRecordNode:(id)a1 withComparisonNodes:(id)a2;
- (BOOL)orderedPropertyNames:(id *)a0 forPropertyNames:(id)a1 forRecordNode:(id)a2 withComparisonNodes:(id)a3;
- (BOOL)relationshipIdentityString:(id *)a0 forRecordNode:(id)a1 withComparisonNodes:(id)a2;

@end
