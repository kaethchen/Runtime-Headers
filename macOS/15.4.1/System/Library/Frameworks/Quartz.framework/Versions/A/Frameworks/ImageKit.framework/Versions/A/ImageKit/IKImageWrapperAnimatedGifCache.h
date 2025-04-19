@class NSMutableDictionary;

@interface IKImageWrapperAnimatedGifCache : NSObject {
    NSMutableDictionary *_framesCache;
    int _frameCount;
}

- (void)dealloc;
- (id)init;
- (int)frameCount;
- (void)setFrameCount:(int)a0;
- (id)objectForKey:(id)a0 atIndex:(int)a1;
- (void)setObject:(id)a0 forKey:(id)a1 atIndex:(int)a2;

@end
