@class _DKEventQuery, NSMutableArray;
@protocol _DKKnowledgeQuerying;

@interface BPSKnowledgeStorePublisher : BPSPublisher

@property (nonatomic) long long remaining;
@property (retain, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) _DKEventQuery *query;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> store;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)completed;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)_updateCachedQueryResults;
- (id)initWithEventQuery:(id)a0 knowledgeStore:(id)a1;
- (id)startWithSubscriber:(id)a0;
- (id)upstreamPublishers;

@end
