@interface _HKMedicalRecordComparisonFilter : _HKComparisonFilter

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (BOOL)isSupportedKeyPath:(id)a0;

- (BOOL)_acceptsRecordWithDate:(id)a0;
- (BOOL)_acceptsRecordWithManuallyEnteredIdentifier:(unsigned long long)a0;
- (BOOL)_acceptsRecordWithState:(unsigned long long)a0;
- (BOOL)acceptsDataObject:(id)a0;

@end
