@class NSSet, NSArray, NSString, SGTInput, _SGTSpotlightSuggesterTiming;

@interface _SGTLegacySpotlightQueryContext : NSObject {
    unsigned long long queryID;
    NSSet *attributeNames;
    NSArray *additionalAttributeNames;
    NSString *inputString;
    SGTInput *input;
    struct _NSRange { unsigned long long location; unsigned long long length; } NLRange;
    BOOL isNLSearch;
    long long NLScope;
    _SGTSpotlightSuggesterTiming *timing;
    BOOL hasFilterQuery;
}

- (void).cxx_destruct;

@end
