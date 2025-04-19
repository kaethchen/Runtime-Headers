@class NSArray;

@interface AIMLInstrumentationStreams.BiomeEventGraphsPublisher : BMBookmarkablePublisher {
    void /* unknown type, empty encoding */ windowLength;
    void /* unknown type, empty encoding */ mergedStream;
    void /* unknown type, empty encoding */ inner;
    void /* unknown type, empty encoding */ trackingTag;
}

@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;

@end
