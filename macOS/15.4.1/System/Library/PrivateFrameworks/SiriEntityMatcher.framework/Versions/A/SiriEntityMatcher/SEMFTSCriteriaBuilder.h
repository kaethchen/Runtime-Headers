@class NSArray, NSMutableSet;

@interface SEMFTSCriteriaBuilder : NSObject {
    NSArray *_searchTerms;
    unsigned char _searchMode;
    NSMutableSet *_originAppIdFilters;
    NSMutableSet *_fieldTypeFilters;
}

- (void).cxx_destruct;
- (id)build;
- (BOOL)_setError:(id *)a0 withCode:(long long)a1;
- (id)initWithSearchTerms:(id)a0 searchMode:(unsigned char)a1;
- (id)addFieldTypeFilterWithCustomTypeNumber:(id)a0 error:(id *)a1;
- (id)addFieldTypeFilterWithNumber:(id)a0 error:(id *)a1;
- (id)addOriginAppFilterWithAppId:(id)a0 error:(id *)a1;

@end
