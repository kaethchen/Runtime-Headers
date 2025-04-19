@class NSArray;

@interface AIMLInstrumentationStreams.SiriConversationPublisher : BMBookmarkablePublisher {
    void /* unknown type, empty encoding */ upstream;
    void /* unknown type, empty encoding */ inner;
    void /* unknown type, empty encoding */ trackingTag;
}

@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;

@end
