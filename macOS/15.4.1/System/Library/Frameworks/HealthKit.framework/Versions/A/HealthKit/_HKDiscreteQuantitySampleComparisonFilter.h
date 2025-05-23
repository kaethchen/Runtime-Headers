@interface _HKDiscreteQuantitySampleComparisonFilter : _HKComparisonFilter

+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (BOOL)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;

- (BOOL)acceptsDataObject:(id)a0;

@end
