@interface EXSEWSCreateNoteOperation : EXSEWSOperation

+ (id)_extendedFieldsForEWSNoteType;
+ (id)_newExtendedFieldTypeForPropertyId:(long long)a0;

- (id)_createEWSItemRequestForNote:(id)a0 inFolder:(id)a1;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
