@interface MTFullFeedResponse : PodcastsFoundation.BaseFeedResponse {
    void /* unknown type, empty encoding */ fullFeedRequest;
}

- (void).cxx_destruct;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)itemInSection:(long long)a0 row:(long long)a1;
- (id)itemsFor:(long long)a0;

@end
