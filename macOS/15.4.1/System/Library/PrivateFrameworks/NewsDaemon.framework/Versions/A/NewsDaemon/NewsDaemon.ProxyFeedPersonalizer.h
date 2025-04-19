@interface NewsDaemon.ProxyFeedPersonalizer : NSObject <FCFeedPersonalizing> {
    void /* unknown type, empty encoding */ proxyConnection;
}

- (id)init;
- (void).cxx_destruct;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (double)decayedPublisherDiversificationPenalty;
- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (id)rankTagIDsDescending:(id)a0;
- (id)scoresForTagIDs:(id)a0;
- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;

@end
