@interface PodcastsFoundation.BaseFeedResponse : NSObject <MTMAPIResponse> {
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ showMetadata;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ parsedCache;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)itemInSection:(long long)a0 row:(long long)a1;
- (id)itemsFor:(long long)a0;

@end
