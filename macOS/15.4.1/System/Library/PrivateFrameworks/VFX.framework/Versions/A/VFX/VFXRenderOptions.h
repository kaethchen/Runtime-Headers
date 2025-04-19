@class NSArray;
@protocol MTLRasterizationRateMap, MTLCommandBuffer;

@interface VFXRenderOptions : NSObject

@property (retain, nonatomic) id<MTLRasterizationRateMap> rasterizationRateMap;
@property (copy, nonatomic) NSArray *viewpoints;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (nonatomic) unsigned long long coordinateSpace;
@property (nonatomic) BOOL waitUntilCompleted;
@property (nonatomic) BOOL shouldLoadFinalColor;
@property (nonatomic) unsigned long long depthPixelFormat;

- (void)dealloc;

@end
