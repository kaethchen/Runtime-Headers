@class NSNumber, NSString;

@interface KHAssetVersion : KHModel {
    NSNumber *_assetId;
    NSString *_key;
    NSString *_path;
}

- (void)dealloc;
- (id)path;
- (void)setPath:(id)a0;
- (id)key;
- (void)setKey:(id)a0;
- (id)assetId;
- (void)setAssetId:(id)a0;
- (void)cachePath:(id)a0;
- (void)cacheKey:(id)a0;
- (void)cacheAssetId:(id)a0;

@end
