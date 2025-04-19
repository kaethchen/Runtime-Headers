@class NSCache;

@interface MKResizedArtworkDataSourceCache : MKArtworkDataSourceCache

@property (readonly, copy, nonatomic) id /* block */ resizingBlock;
@property (readonly, copy, nonatomic) NSCache *resizedImageCache;

- (void).cxx_destruct;
- (void)purge;
- (void)_cacheImage:(id)a0 forKey:(id)a1;
- (id)_cachedImageForKey:(id)a0;
- (id)_resizedImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageForArtwork:(id)a0 size:(long long)a1 featureType:(unsigned long long)a2 scale:(double)a3 nightMode:(BOOL)a4 widthPaddingMultiple:(double)a5;
- (id)initWithArtworkManager:(id)a0 imageResizingBlock:(id /* block */)a1;

@end
