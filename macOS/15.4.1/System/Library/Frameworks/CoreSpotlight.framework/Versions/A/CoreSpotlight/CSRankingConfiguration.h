@class NSArray, NSString, NSDictionary;

@interface CSRankingConfiguration : NSObject

@property (readonly, nonatomic) NSArray *bundleIDs;
@property (readonly, nonatomic) NSString *nlpContextID;
@property (readonly, nonatomic) BOOL enablePommesRanking;
@property (readonly, nonatomic) BOOL enablePommesSuggestions;
@property (readonly, nonatomic) BOOL enableSemanticSearch;
@property (readonly, nonatomic) BOOL enableExtendedEmbeddingTimeout;
@property (readonly, nonatomic) BOOL enableUniversalSuggestions;
@property (readonly, nonatomic) BOOL enableSuggestions;
@property (readonly, nonatomic) BOOL isCJK;
@property (readonly, nonatomic) BOOL isMail;
@property (readonly, nonatomic) BOOL isNotes;
@property (readonly, nonatomic) BOOL isPhotos;
@property (readonly, nonatomic) BOOL isPommesZKW;
@property (readonly, nonatomic) BOOL isPommesCtl;
@property (readonly, nonatomic) BOOL isSpotlight;
@property (readonly, nonatomic) BOOL isSettings;
@property (readonly, nonatomic) BOOL isSafari;
@property (readonly, nonatomic) BOOL isSearch;
@property (readonly, nonatomic) long long maxSuggestionCount;
@property (readonly, nonatomic) NSDictionary *suggestionRankingWeights;

- (void).cxx_destruct;
- (id)initWithQueryContext:(id)a0;

@end
