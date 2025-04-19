@class NSDictionary;

@interface CSUserQueryContext : CSSearchQueryContext {
    BOOL _enableSuggestionTokens;
    NSDictionary *_queryParserOptions;
}

@property (nonatomic) BOOL enableRankedResults;
@property (nonatomic) BOOL disableSemanticSearch;
@property (nonatomic) long long maxResultCount;
@property (nonatomic) long long maxSuggestionCount;
@property (nonatomic) long long maxRankedResultCount;

+ (id)userQueryContext;
+ (id)userQueryContextWithCurrentSuggestion:(id)a0;

- (void).cxx_destruct;
- (id)getParserOptions;
- (void)updateWithOptions:(id)a0;

@end
