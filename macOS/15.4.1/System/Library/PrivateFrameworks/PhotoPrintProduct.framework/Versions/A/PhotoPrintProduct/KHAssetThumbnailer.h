@class KHAsset;

@interface KHAssetThumbnailer : NSOperation {
    KHAsset *_asset;
}

+ (void)queueThumbnailGenerationForAsset:(id)a0;

- (void)dealloc;
- (void)main;
- (id)initWithAsset:(id)a0;
- (id)_generateThumbForSize:(int)a0;
- (id)_thumbPathForSize:(int)a0;

@end
