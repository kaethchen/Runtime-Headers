@interface GEOAddressFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter>

@property (readonly, nonatomic) unsigned long long optionsToInclude;
@property (readonly, nonatomic) unsigned long long optionsToExclude;

+ (id)filterExcludingAllOptions;
+ (id)filterIncludingAllOptions;

- (BOOL)_applyToSubTypeFilter:(id)a0 error:(id *)a1;
- (BOOL)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)initWithOptionsToInclude:(unsigned long long)a0 optionsToExclude:(unsigned long long)a1;

@end
