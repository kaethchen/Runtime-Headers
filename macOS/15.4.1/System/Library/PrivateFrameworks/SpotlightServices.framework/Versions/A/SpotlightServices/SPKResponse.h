@class NSArray, NSDictionary, NSString, NSError, PRSRankingConfiguration;

@interface SPKResponse : NSObject

@property (retain) PRSRankingConfiguration *rankingConfiguration;
@property (readonly) int kind;
@property (readonly) unsigned long long queryId;
@property (readonly) NSError *error;
@property (readonly) NSArray *sections;
@property (readonly) NSDictionary *groupedResults;
@property BOOL topHitIsIn;
@property BOOL noChangeInResultsSinceLastResponse;
@property BOOL parsecFinished;
@property BOOL metadataFinished;
@property BOOL corespotlightFinished;
@property (retain) NSString *fbq;
@property BOOL queryResponseComplete;
@property (retain) NSString *userQueryString;
@property BOOL isRewrite;
@property BOOL didReceiveLaterThanRenderTimeout;
@property (retain) NSString *correctedQuery;
@property BOOL suggestionsAreBlended;
@property (retain) NSArray *serverSuggestionResults;
@property (retain) NSArray *localSuggestionResults;
@property (readonly) NSArray *added;
@property (readonly) NSArray *changed;
@property (readonly) NSArray *removed;

- (id)description;
- (void).cxx_destruct;
- (id)initWithQueryID:(unsigned long long)a0 kind:(int)a1 sections:(id)a2;
- (id)initWithQueryID:(unsigned long long)a0 kind:(int)a1 sections:(id)a2 groupedResults:(id)a3 error:(id)a4;
- (id)initWithQueryID:(unsigned long long)a0 sections:(id)a1;
- (id)initWithQueryID:(unsigned long long)a0 error:(id)a1;
- (id)initWithQueryID:(unsigned long long)a0 kind:(int)a1 sections:(id)a2 groupedResults:(id)a3;

@end
