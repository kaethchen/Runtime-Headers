@interface GEOResultTypeAutocompleteFilter : NSObject <GEOAutocompleteFilter>

@property (readonly, nonatomic) unsigned long long types;

- (id)init;
- (BOOL)_legacy_applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (BOOL)_modern_applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (BOOL)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (id)initWithResultTypes:(unsigned long long)a0;

@end
