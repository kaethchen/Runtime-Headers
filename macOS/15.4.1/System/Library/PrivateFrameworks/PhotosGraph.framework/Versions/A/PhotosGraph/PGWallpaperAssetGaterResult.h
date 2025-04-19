@interface PGWallpaperAssetGaterResult : NSObject

@property (nonatomic) BOOL passesSegmentation;
@property (nonatomic) BOOL passesSettlingEffect;
@property (nonatomic) BOOL didTimeout;
@property (readonly, nonatomic) BOOL passesAnyGating;

- (unsigned long long)availableFeatures;

@end
