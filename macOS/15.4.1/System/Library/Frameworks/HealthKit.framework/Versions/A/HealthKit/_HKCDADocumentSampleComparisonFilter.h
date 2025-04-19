@class NSRegularExpression;

@interface _HKCDADocumentSampleComparisonFilter : _HKComparisonFilter {
    NSRegularExpression *_comparisonExpression;
}

+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (BOOL)isSupportedKeyPath:(id)a0;

- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)a0;
- (void)configureInMemoryFilter;

@end
