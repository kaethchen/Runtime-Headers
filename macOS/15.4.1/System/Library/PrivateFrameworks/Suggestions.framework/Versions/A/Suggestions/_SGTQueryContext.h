@class NSSet, NSArray, NSString, SGTInput, SGTSearchQueryContext;

@interface _SGTQueryContext : NSObject {
    unsigned long long queryID;
    NSSet *attributeNames;
    NSArray *additionalAttributeNames;
    NSString *inputString;
    SGTInput *input;
    struct _NSRange { unsigned long long location; unsigned long long length; } NLRange;
    BOOL isNLSearch;
    long long NLScope;
    SGTSearchQueryContext *originalQueryContext;
}

- (void).cxx_destruct;

@end
