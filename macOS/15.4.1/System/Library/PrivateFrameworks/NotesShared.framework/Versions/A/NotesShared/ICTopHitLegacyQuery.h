@class NSString;

@interface ICTopHitLegacyQuery : ICSearchQuery {
    BOOL _modernResultsOnly;
}

@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (readonly, nonatomic) NSString *highlightString;

- (void).cxx_destruct;
- (double)timeoutInterval;
- (id)initWithQueryString:(id)a0 keyboardLanguage:(id)a1;
- (BOOL)modernResultsOnly;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)a0;

@end
