@class NSArray, NSString, NSMutableDictionary, SGTSpotlightCollector;

@interface SGTSearchQuerySuggesterReserved : NSObject {
    NSArray *attributeNames;
    NSString *baseQuery;
    unsigned long long queryID;
    NSArray *searchScope;
    NSArray *excludeSearchScope;
    NSArray *includeSearchBundle;
    NSArray *additionalAttributeNames;
    NSArray *sortingAttributeNames;
    NSMutableDictionary *shortNameToAttributes;
    BOOL matchesFinderFilesOnly;
    BOOL matchesSupportFiles;
    BOOL canGenerateTopHits;
    BOOL runWarmingQuery;
    SGTSpotlightCollector *collector;
}

- (void).cxx_destruct;

@end
