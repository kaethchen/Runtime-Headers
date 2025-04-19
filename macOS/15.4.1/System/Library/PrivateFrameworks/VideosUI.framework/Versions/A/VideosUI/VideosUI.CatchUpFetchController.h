@class NSArray, NSError, VUIImage;

@interface VideosUI.CatchUpFetchController : VUIMediaInfoFetchController {
    void /* unknown type, empty encoding */ clipItems;
    void /* unknown type, empty encoding */ mediaInfo;
    void /* unknown type, empty encoding */ selectedAudioOption;
    void /* unknown type, empty encoding */ prewarmPlayer;
    void /* unknown type, empty encoding */ imageOperationQueue;
    void /* unknown type, empty encoding */ operations;
}

@property (nonatomic, copy) NSArray *mediaInfos;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)mediaInfoContainsPlayerAtIndex:(unsigned long long)a0;
- (void)appendMediaInfos:(id)a0;
- (id)initWithMediaInfos:(id)a0;
- (void)loadImageAtIndex:(unsigned long long)a0 completion:(void (^)(VUIImage *, NSError *, BOOL))a1;
- (id)loadPlayerAtIndex:(unsigned long long)a0;
- (BOOL)mediaInfoContainsImageAtIndex:(unsigned long long)a0;

@end
