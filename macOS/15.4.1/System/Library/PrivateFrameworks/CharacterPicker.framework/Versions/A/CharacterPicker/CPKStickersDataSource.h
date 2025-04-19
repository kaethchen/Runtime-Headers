@class NSTimer, STKImageGlyphDataSource, NSLock;

@interface CPKStickersDataSource : NSObject {
    NSLock *_cachedLengthVariablesLock;
}

@property (retain) NSTimer *deadlockTimer;
@property unsigned long long previousCachedLength;
@property unsigned long long cachedLength;
@property (readonly) BOOL stickerCountDidChange;
@property (readonly) BOOL hasStickers;
@property (readonly) unsigned long long numberOfItems;
@property (retain) STKImageGlyphDataSource *imageDataSource;

+ (id)sharedSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)itemAtIndex:(long long)a0;
- (void)reset;
- (void)refresh;
- (BOOL)didCacheNumberOfItems;
- (void)didDeleteSticker;
- (void)imageGlyphDataSourceDidUpdate;

@end
