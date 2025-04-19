@protocol MTLRasterizationRateMap;

@interface WarpMap : NSObject

@property (nonatomic) struct _WarpStaticParameters { int warpMode; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } inputSize; float rateMaxSize; float rateMax; float rateMin; float rateFalloffPower; int atlasPaddingWidth; BOOL atlasTranspose; BOOL valid; } staticParams;
@property (nonatomic) struct _WarpDynamicParameters { void /* unknown type, empty encoding */ rateMaxCenter; float rateMax; float rateMin; float atlasRateMaxFadePct; } dynamicParams;
@property (retain, nonatomic) id<MTLRasterizationRateMap> vrrMap;
@property (nonatomic) struct { float rateMax; float rateMin; float rateMax_recip; float rateMin_recip; struct { float w; float h; float w_recip; float h_recip; float x0; float y0; float w0; float w1; float w1_minus_w0_recip; } u; struct { float w; float h; float x0; float x1; float x2; float x3; float x4; float y0; float y1; float y2; float y4; BOOL transposeEnable; } w; } atlasParams;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } roiRegion;

- (void).cxx_destruct;

@end
