@class NSString, NSArray, CSSuggestion, EMSearchableIndexTopHitsQuery, EMSearchableIndexTopHitsQueryResult, NSObject, EFFuture, MFMessageCriterion;
@protocol OS_os_log, MFSearchableIndexQueryResultProcessor, MFMessageConsumer;

@interface MFSearchableIndexTopHitsResultsCollector : NSObject <EFLoggable, MFSearchableIndexTopHitsResultsCollectorBuilder, MFSearchableIndexQueryResultProvider>

@property (class, retain, nonatomic) EMSearchableIndexTopHitsQueryResult *mostRecentTopHitsQueryResult;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EMSearchableIndexTopHitsQuery *topHitsQuery;
@property (retain, nonatomic) id<MFSearchableIndexQueryResultProcessor> processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *filterQueries;
@property (retain, nonatomic) CSSuggestion *updatedSuggestion;
@property (retain, nonatomic) id<MFMessageConsumer> target;
@property (retain, nonatomic) MFMessageCriterion *criterion;
@property (nonatomic) unsigned int options;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) EFFuture *gatheredFuture;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (BOOL)isCancelled;
- (void)_processTopHitsQueryResult:(id)a0;
- (id)initWithSearchPhrase:(id)a0 processor:(id)a1 builder:(id /* block */)a2;

@end
