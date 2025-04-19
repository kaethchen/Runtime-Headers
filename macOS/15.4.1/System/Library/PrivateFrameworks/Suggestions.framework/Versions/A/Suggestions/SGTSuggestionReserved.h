@class NSIndexSet, NSString, NSArray, NSDictionary, SGTQueryGenius, NSURL, SGTCategory;

@interface SGTSuggestionReserved : NSObject {
    NSString *originalTypedString;
    NSString *rawQueryString;
    NSString *additionalRawQuery;
    NSString *displayName;
    NSString *uniquifierString;
    NSString *queryString;
    NSArray *attributeNames;
    NSDictionary *additionalAttributes;
    NSArray *suggestionValues;
    id representedObject;
    SGTQueryGenius *genius;
    long long scope;
    long long type;
    SGTCategory *category;
    NSURL *spotlightScope;
    BOOL additionalRawQueryIsOr;
    BOOL isExactMatch;
    BOOL showsUniquifier;
    BOOL useDefaultScope;
    BOOL intermediateResult;
    BOOL forceLastPosition;
    BOOL enforceStrictMatch;
    BOOL isTopHitCandidate;
    BOOL isRecent;
    NSIndexSet *titleHighlights;
    NSIndexSet *uniquifierHighlights;
    NSString *inputString;
    double score;
    BOOL lastWordMatched;
    unsigned long long alignmentScore;
    struct _NSRange { unsigned long long location; unsigned long long length; } replacementRange;
}

- (void).cxx_destruct;

@end
