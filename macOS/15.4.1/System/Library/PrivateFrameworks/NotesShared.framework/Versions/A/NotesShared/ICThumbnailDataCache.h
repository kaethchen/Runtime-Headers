@class ICCache;

@interface ICThumbnailDataCache : NSObject

@property (retain, nonatomic) ICCache *imageCache;

- (id)init;
- (void).cxx_destruct;
- (id)thumbnailDataForKey:(id)a0;
- (void)removeAllThumbnailData;
- (void)removeThumbnailDataForKey:(id)a0;
- (void)setThumbnailData:(id)a0 forKey:(id)a1;

@end
