@class SPSearchQueryContext, NSString, PRSRankingItemRanker, NSArray, NSObject, NSMutableArray;
@protocol SPKQueryDelegate;

@interface SPKQuery : NSObject {
    NSMutableArray *_childQueries;
    double _startTime;
}

@property int queryState;
@property (copy) id /* block */ clientResponseHandler;
@property (weak) SPKQuery *parentQuery;
@property (retain) NSString *internalUnmodifiedUserQueryString;
@property unsigned long long queryOptions;
@property (readonly) unsigned long long queryId;
@property (readonly) unsigned long long queryGroupId;
@property (readonly) NSString *userQueryString;
@property (readonly) NSString *trimmedUserQueryString;
@property (retain) NSString *unmodifiedUserQueryString;
@property (nonatomic) BOOL wantsSuggestions;
@property (weak, nonatomic) NSObject<SPKQueryDelegate> *delegate;
@property (readonly) id /* block */ responseHandler;
@property (readonly) PRSRankingItemRanker *ranker;
@property (readonly) NSArray *childQueries;
@property double queryStartTime;
@property (readonly) SPSearchQueryContext *queryContext;
@property (readonly, getter=isParsecQuery) BOOL parsecQuery;
@property (readonly, getter=isURLQuery) BOOL urlQuery;
@property (readonly, getter=isDocumentQuery) BOOL documentQuery;
@property (readonly, getter=isApplicationQuery) BOOL applicationQuery;
@property (readonly, getter=isCalculatorQuery) BOOL calculatorQuery;
@property (readonly, getter=isDictionaryQuery) BOOL dictionaryQuery;
@property (readonly, getter=isExtensionQuery) BOOL extensionQuery;
@property (readonly, getter=isCoreSpotlightQuery) BOOL coreSpotlightQuery;
@property (readonly) BOOL supportsRefinement;

+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (unsigned int)searchDomain;

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (double)startTime;
- (void)cancel;
- (BOOL)isFinished;
- (BOOL)isStarted;
- (void)setRankingQueries:(id)a0;
- (BOOL)isCanceled;
- (BOOL)isCompleted;
- (BOOL)needsIO;
- (BOOL)completedGather;
- (id)getQueryRankingConfigurationWithRanker:(id)a0 spotlightQuery:(id)a1 queryContext:(id)a2;
- (int *)getQueryStatePtr;
- (id)initWithUserQuery:(id)a0;
- (id)initWithUserQuery:(id)a0 options:(unsigned long long)a1;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (BOOL)sendEmptyResponseIfNecessary;
- (BOOL)shouldReturnEarly;
- (void)_queryWillStart;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1;
- (void)_queryDidComplete;
- (void)addChildQuery:(id)a0;

@end
