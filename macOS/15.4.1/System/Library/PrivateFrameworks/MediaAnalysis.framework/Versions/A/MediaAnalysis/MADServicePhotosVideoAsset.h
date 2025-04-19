@class PHAsset, NSArray;

@interface MADServicePhotosVideoAsset : MADServiceVideoAsset {
    PHAsset *_photosAsset;
    NSArray *_resources;
}

- (void).cxx_destruct;
- (id)identifier;
- (id)url;
- (id)isSensitive;
- (id)resources;
- (unsigned long long)assetType;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })trimTimeRange;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stillTime;
- (id)scoresForLabels;
- (id)animatedStickerScore;
- (id)initWithPhotosAsset:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;

@end
