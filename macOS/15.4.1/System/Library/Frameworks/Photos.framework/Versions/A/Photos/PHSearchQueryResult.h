@class NSArray, PHSearchQueryMatchDetails, NSAttributedString, PHSearchQuery;

@interface PHSearchQueryResult : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *queryStringReceivedFromSpotlight;
@property (readonly, nonatomic) NSArray *unfilteredAssetSearchResults;
@property (readonly, nonatomic) PHSearchQuery *searchQuery;
@property (readonly, nonatomic) NSArray *searchResults;
@property (readonly, nonatomic) NSArray *rankedAssetSearchResults;
@property (readonly, nonatomic) NSArray *rankedCollectionSearchResults;
@property (readonly, nonatomic) NSArray *searchSuggestions;
@property (readonly, nonatomic) PHSearchQueryMatchDetails *queryMatchDetails;
@property (readonly, copy, nonatomic) NSAttributedString *annotatedQueryString;
@property (readonly, nonatomic) BOOL isUnsafeQuery;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)jsonDictionary;
- (id)initWithSearchQuery:(id)a0;
- (id)initWithSearchQuery:(id)a0 searchResults:(id)a1 unfilteredAssetSearchResults:(id)a2 rankedAssetSearchResults:(id)a3 rankedCollectionSearchResults:(id)a4 searchSuggestions:(id)a5 queryMatchDetails:(id)a6 annotatedQueryString:(id)a7 queryStringReceivedFromSpotlight:(id)a8 isUnsafeQuery:(BOOL)a9;
- (id)redactedJSONDictionary;

@end
