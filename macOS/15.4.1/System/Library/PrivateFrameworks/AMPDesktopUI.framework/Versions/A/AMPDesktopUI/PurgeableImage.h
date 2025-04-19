@class ImageDataCache;

@interface PurgeableImage : NSImage

@property (weak, nonatomic) ImageDataCache *cache;
@property (nonatomic) const void *buffer;

- (void)dealloc;
- (void).cxx_destruct;

@end
