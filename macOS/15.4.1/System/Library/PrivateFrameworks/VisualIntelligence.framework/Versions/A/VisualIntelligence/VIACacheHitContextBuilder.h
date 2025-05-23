@class NSString;

@interface VIACacheHitContextBuilder : NSObject {
    unsigned long long _queryID;
    unsigned long long _cachedResultsQueryID;
    NSString *_applicationIdentifier;
    NSString *_engagementSuggestionType;
}

- (void).cxx_destruct;
- (id)build;
- (id)setQueryID:(unsigned long long)a0;
- (id)setEngagementSuggestionType:(id)a0;
- (id)setApplicationIdentifer:(id)a0;
- (id)setCachedResultQueryID:(unsigned long long)a0;

@end
