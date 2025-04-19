@class NSString, SFSearchResult_SpotlightExtras;

@interface SPMessageTracingSearchSession : NSObject

@property (nonatomic) double startTimeStamp;
@property (nonatomic) double endTimeStamp;
@property (nonatomic) double started;
@property (nonatomic) double timeBeganPreviewingCurrentResult;
@property (retain, nonatomic) NSString *openMethod;
@property (nonatomic) BOOL hadQuery;
@property (nonatomic) BOOL searchWindowDidExpand;
@property (nonatomic) BOOL didEndByClearing;
@property (nonatomic) BOOL didEnd;
@property (retain, nonatomic) SFSearchResult_SpotlightExtras *selectedResult;
@property (retain, nonatomic) SFSearchResult_SpotlightExtras *previewedResult;
@property (retain, nonatomic) SFSearchResult_SpotlightExtras *engagedResult;
@property (retain, nonatomic) NSString *topHitCategory;
@property (retain, nonatomic) NSString *NLPQueryCategory;
@property (retain, nonatomic) NSString *NLPQueryParseConfidence;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) double parsecQueryDuration;
@property (nonatomic) unsigned long long parsecQueryResultCount;
@property (nonatomic) unsigned long long parsecQuerySectionCount;
@property (nonatomic) unsigned long long countOfQueries;
@property (nonatomic) long long parsecQueriesCompleted;
@property (nonatomic) long long parsecQueriesLongerThan3CharactersCompleted;
@property (nonatomic) long long parsecQueriesWithResults;
@property (nonatomic) long long parsecQueriesErrored;

- (id)init;
- (void).cxx_destruct;
- (void)didStartParsecQuery;
- (void)parsecQuery:(id)a0 didFinishWithResultsCount:(long long)a1 sectionCount:(long long)a2 success:(BOOL)a3;

@end
