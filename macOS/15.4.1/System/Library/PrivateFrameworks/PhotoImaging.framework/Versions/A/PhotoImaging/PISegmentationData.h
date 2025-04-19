@class PFPosterLayout, NSDictionary, PIParallaxColorAnalysis, PFWallpaperCompoundDeviceConfiguration;
@protocol PISegmentationItem, PFParallaxAssetRegions;

@interface PISegmentationData : NSObject

@property (readonly, nonatomic) id<PISegmentationItem> item;
@property (readonly, nonatomic) struct __CVBuffer { } *segmentationBuffer;
@property (readonly, nonatomic) unsigned long long classification;
@property (readonly, nonatomic) id<PFParallaxAssetRegions> regions;
@property (readonly, nonatomic) PFPosterLayout *originalLayout;
@property (readonly, nonatomic) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (readonly, copy, nonatomic) NSDictionary *scores;
@property (readonly, nonatomic) PIParallaxColorAnalysis *colorAnalysis;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSegmentationItem:(id)a0;

@end
