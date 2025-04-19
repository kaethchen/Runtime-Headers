@class MRImageManager, NSString, NSMutableDictionary, NSMutableSet, MRImage;

@interface MRAssetMaster : NSObject {
    NSMutableSet *_unusedPlayers;
}

@property (readonly) NSString *path;
@property (readonly) MRImageManager *imageManager;
@property (readonly) MRImage *thumbnail;
@property (nonatomic) double timestamp;
@property (readonly) struct CGSize { double width; double height; } originalSize;
@property (readonly) BOOL isValid;
@property (readonly) BOOL isEmbeddedAsset;
@property (readonly) BOOL isSupportedMovie;
@property (readonly) NSMutableDictionary *players;

- (void)dealloc;
- (void)invalidate;
- (BOOL)purgeResources;
- (id)initWithPath:(id)a0 originalSize:(struct CGSize { double x0; double x1; })a1 isEmbeddedAsset:(BOOL)a2 isSupportedMovie:(BOOL)a3 andImageManager:(id)a4;
- (void)relinquishPlayer:(id)a0;
- (id)retainedByUserPlayerForSize:(struct CGSize { double x0; double x1; })a0 andOptions:(id)a1;
- (id)thumbnailForFlagsMonochromatic:(BOOL)a0 mipmap:(BOOL)a1 powerOfTwo:(BOOL)a2;

@end
