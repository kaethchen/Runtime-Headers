@class NSString, EMSearchableIndexQueryExpression, NSMutableDictionary, NSObject, EMSearchableIndexUserQuery, EFPromise, EFFuture, MFMessageCriterion;
@protocol OS_os_log, MFSearchableIndexQueryResultProcessor, MFMessageConsumer;

@interface MFSearchableIndexQueryResultCollector : NSObject <EFLoggable, MFSearchableIndexQueryResultProcessorDelegate, MFSearchableIndexQueryResultCollectorBuilder, MFSearchableIndexQueryResultProvider>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EMSearchableIndexUserQuery *query;
@property (retain, nonatomic) EMSearchableIndexQueryExpression *expression;
@property (retain, nonatomic) id<MFSearchableIndexQueryResultProcessor> processor;
@property (retain, nonatomic) EFPromise *gatheredPromise;
@property (retain, nonatomic) NSMutableDictionary *attachmentIDToMessageID;
@property (retain, nonatomic) EMSearchableIndexQueryExpression *originalExpression;
@property (nonatomic) BOOL live;
@property (copy, nonatomic) id /* block */ recoveryBlock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<MFMessageConsumer> target;
@property (retain, nonatomic) MFMessageCriterion *criterion;
@property (nonatomic) unsigned int options;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) EFFuture *gatheredFuture;

+ (id)queryResultCollectorWithExpression:(id)a0 processor:(id)a1 builder:(id /* block */)a2;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)_persistentIDIfValidFromItemIdentifier:(id)a0;
- (void)_processRemovedIdentifiers:(id)a0;
- (void)_processSearchableItems:(id)a0 queryIdentifier:(id)a1;
- (id)criterionForSearchableIndexQueryResultProcessor:(id)a0;
- (BOOL)hasFinishedGatheringForSearchableIndexQueryResultProcessor:(id)a0;
- (id)initWithExpression:(id)a0 processor:(id)a1 builder:(id /* block */)a2;
- (id)messageConsumerForSearchableIndexQueryResultProcessor:(id)a0;

@end
