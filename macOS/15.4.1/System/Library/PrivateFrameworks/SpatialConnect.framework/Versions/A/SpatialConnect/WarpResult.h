@class NSData;

@interface WarpResult : NSObject

@property (nonatomic) int result;
@property (retain, nonatomic) NSData *parameters;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } roi;
@property (nonatomic) struct CGSRegionObject { } *region;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setDirtyRegionForRegion:(struct CGSRegionObject { } *)a0 warpMode:(int)a1 warpMap:(id)a2 targetTexture:(id)a3;

@end
