@class NSString;
@protocol FCFeedPersonalizing;

@interface FCAssertPreparedFeedPersonalizer : NSObject <FCFeedPersonalizing>

@property (readonly, nonatomic) id<FCFeedPersonalizing> target;
@property (nonatomic, getter=isPreparedForUse) BOOL preparedForUse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (double)decayedPublisherDiversificationPenalty;
- (void)fetchAggregateMapForPersonalizingItem:(id)a0 completion:(id /* block */)a1;
- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (id)rankTagIDsDescending:(id)a0;
- (id)scoresForTagIDs:(id)a0;
- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;

@end
