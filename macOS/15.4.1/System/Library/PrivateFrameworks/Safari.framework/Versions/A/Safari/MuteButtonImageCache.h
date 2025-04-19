@class NSMutableDictionary;

@interface MuteButtonImageCache : NSObject {
    NSMutableDictionary *_imageCache;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)buttonImageWithSize:(struct CGSize { double x0; double x1; })a0 state:(long long)a1 color:(id)a2;

@end
