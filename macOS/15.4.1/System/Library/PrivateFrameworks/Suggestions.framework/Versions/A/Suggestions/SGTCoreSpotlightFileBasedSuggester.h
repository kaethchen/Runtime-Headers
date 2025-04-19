@class SGTCoreSpotlightFileCollector;

@interface SGTCoreSpotlightFileBasedSuggester : SGTSearchQuerySuggester {
    SGTCoreSpotlightFileCollector *_collector;
}

+ (id)suggesterForFiles;

- (void).cxx_destruct;
- (id)collector;
- (id)rankingQueriesForQuery:(id)a0;

@end
