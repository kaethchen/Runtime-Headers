@class NSString;
@protocol FCPersonalizationFunctionProviding, FCFeedPersonalizing;

@interface FCLegacyFeedPersonalizer : NSObject <FCFeedPersonalizing, FCPersonalizationFunctionProviding>

@property (readonly, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (readonly, nonatomic) id<FCPersonalizationFunctionProviding> functionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (double)decayedPublisherDiversificationPenalty;
- (id)diversifyItems:(id)a0 limit:(unsigned long long)a1;
- (id)initWithFeedPersonalizer:(id)a0 functionProvider:(id)a1;
- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (void)prewarmWithTabiScores:(id)a0 configurationSet:(long long)a1;
- (id)rankTagIDsDescending:(id)a0;
- (id)scoresForTagIDs:(id)a0;
- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;

@end
