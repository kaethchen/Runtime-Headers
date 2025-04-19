@class PPTopicStore;

@interface PPSpotlightScoring : NSObject {
    PPTopicStore *_topicStore;
    long long _sandboxExtensionHandle;
}

+ (id)defaultInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTopicStore:(id)a0;
- (BOOL)refreshSpotlightScoringCacheWithError:(id *)a0;
- (id)spotlightQueryScore:(id)a0 error:(id *)a1;

@end
