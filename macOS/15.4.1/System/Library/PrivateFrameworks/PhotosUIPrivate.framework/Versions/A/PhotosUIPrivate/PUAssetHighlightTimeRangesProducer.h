@class NSArray;

@interface PUAssetHighlightTimeRangesProducer : NSObject {
    void /* unknown type, empty encoding */ highlightTimeRanges;
    void /* unknown type, empty encoding */ mediaAnalyzer;
    void /* unknown type, empty encoding */ analysisProgress;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ asset;
@property (nonatomic, retain) void /* unknown type, empty encoding */ searchQueryMatchInfo;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) NSArray *highlightTimeRanges;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMediaAnalyzer:(id)a0;

@end
