@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject {
    NSMutableDictionary *mImageMap;
}

@property (readonly, nonatomic) unsigned long long quality;
@property (readonly, nonatomic) double canvasScale;

- (id)description;
- (void).cxx_destruct;
- (void)cacheProvider:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGImage { } *)degradedImageRefForProvider:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithQuality:(unsigned long long)a0 canvasScale:(double)a1;
- (void)doneCaching:(id)a0 forProvider:(id)a1;
- (Class)imageMapValueClass;
- (double)qualityScaleForSize:(struct CGSize { double x0; double x1; })a0;

@end
