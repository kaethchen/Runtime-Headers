@class NSString, SGTInput, NSArray;

@interface SGTSearchQueryContext : NSObject

@property unsigned long long searchId;
@property unsigned long long maxCount;
@property BOOL matchesFinderFilesOnly;
@property BOOL matchesSupportFiles;
@property BOOL isNLSearch;
@property struct _NSRange { unsigned long long location; unsigned long long length; } NLRange;
@property long long NLScope;
@property (retain) NSString *queryString;
@property (retain) NSString *inputString;
@property (retain) SGTInput *input;
@property (retain) NSArray *rankingTerms;
@property (retain) NSArray *attributeNames;
@property (retain) NSArray *additionalAttributeNames;
@property (retain) NSArray *sortingAttributeNames;
@property (retain) NSArray *scopes;
@property (retain) NSArray *excludeScopes;
@property (retain) NSArray *includeBundles;

- (void).cxx_destruct;

@end
