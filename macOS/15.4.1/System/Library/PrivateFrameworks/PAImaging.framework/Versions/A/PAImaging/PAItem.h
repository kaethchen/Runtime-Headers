@class PHAsset;

@interface PAItem : NSObject

@property (retain) PHAsset *asset;

+ (id)itemForAsset:(id)a0;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (void)assetDidChange:(id)a0;

@end
