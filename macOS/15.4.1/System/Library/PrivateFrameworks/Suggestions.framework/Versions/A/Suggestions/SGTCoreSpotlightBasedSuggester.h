@class SGTCoreSpotlightCollector;

@interface SGTCoreSpotlightBasedSuggester : SGTSearchQuerySuggester {
    SGTCoreSpotlightCollector *_collector;
}

+ (id)suggesterForFiles;
+ (id)suggesterForMails;

- (void).cxx_destruct;
- (id)collector;
- (id)rankingQueriesForQuery:(id)a0;

@end
