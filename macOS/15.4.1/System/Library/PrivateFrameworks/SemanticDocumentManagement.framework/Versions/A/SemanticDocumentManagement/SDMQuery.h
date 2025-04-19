@class NSString, HelpSDMIndex;
@protocol SDMQueryDelegateProtocol;

@interface SDMQuery : NSOperation

@property (readonly, retain, nonatomic) NSString *helpbookID;
@property (retain, nonatomic) NSString *focusedHelpbookID;
@property (readonly, retain, nonatomic) NSString *queryString;
@property (readonly, retain, nonatomic) id<SDMQueryDelegateProtocol> delegate;
@property (readonly, retain, nonatomic) id outsideQuery;
@property (readonly, retain, nonatomic) id sdmModel;
@property (readonly, nonatomic) int requestedCount;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *groupName;
@property (nonatomic) int queryType;
@property (retain, nonatomic) HelpSDMIndex *sdmIndex;

- (void)dealloc;
- (void)run;
- (BOOL)cancelled;
- (id)_createResultsForHelpbook:(id)a0 fromMapResults:(id)a1 topScoreForScaling:(float)a2;
- (id)_createRescoredResultsForHelpbook:(id)a0 fromMapResults:(id)a1 topScoreForScaling:(float)a2;
- (id)initWithString:(id)a0 helpbookID:(id)a1 requestedCount:(int)a2 delegate:(id)a3 sdmModel:(id)a4 outsideQuery:(id)a5;

@end
