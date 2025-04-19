@class PHAsset, PNWallpaperCropResult;

@interface PGLandscapeWallpaperSuggestionCandidate : NSObject

@property (readonly) PHAsset *asset;
@property (readonly) PNWallpaperCropResult *cropResult;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;

@end
