@interface STKAnimatedImage : NSObject {
    void /* unknown type, empty encoding */ images;
    void /* unknown type, empty encoding */ durations;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ size;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 maxCount:(long long)a1 maxDimension:(double)a2 identifier:(id)a3;
- (id)initWithImages:(id)a0 durations:(id)a1 identifier:(id)a2;
- (id)initWithURL:(id)a0 maxCount:(long long)a1 maxDimension:(double)a2 identifier:(id)a3;

@end
