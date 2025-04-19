@class NSString, ML3SpotlightNameCache, NSArray;

@interface ML3SpotlightMatchPredicate : ML3Predicate {
    ML3SpotlightNameCache *_names;
    NSArray *_searchProperties;
}

@property (readonly, nonatomic) NSString *searchString;

+ (id)predicateWithProperties:(id)a0 searchString:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)SQLJoinClausesForClass:(Class)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)initWithSearchString:(id)a0 matchingProperties:(id)a1;
- (id)spotlightPredicate;

@end
