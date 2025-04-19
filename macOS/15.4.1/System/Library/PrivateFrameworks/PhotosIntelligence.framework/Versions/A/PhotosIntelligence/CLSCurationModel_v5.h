@class CLSNSFWModel, CLSCLIPprintModel, CLSCityNatureModel, CLSWallpaperScoreModel;

@interface CLSCurationModel_v5 : CLSCurationModel_v4

@property (readonly) CLSWallpaperScoreModel *wallpaperScoreModel;
@property (readonly) CLSCLIPprintModel *CLIPprintModel;
@property (readonly) CLSCityNatureModel *cityNatureModel;
@property (readonly) CLSNSFWModel *nsfwModel;

+ (id)baseSpecificationWithSpecification:(id)a0;

- (void).cxx_destruct;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)a0;
- (BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)a0 statistics:(struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; struct { unsigned int x0; } x13; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x14; } *)a1;
- (BOOL)isShowcasingFoodWithAsset:(id)a0;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)a0;
- (id)initWithCurationModelSpecification:(id)a0;

@end
