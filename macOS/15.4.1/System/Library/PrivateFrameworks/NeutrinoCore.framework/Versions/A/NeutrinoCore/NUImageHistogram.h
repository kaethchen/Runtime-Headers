@class NUHistogram;

@interface NUImageHistogram : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) long long binCount;
@property (readonly, nonatomic) struct { double min; double max; } range;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) NUHistogram *red;
@property (readonly, nonatomic) NUHistogram *green;
@property (readonly, nonatomic) NUHistogram *blue;
@property (readonly, nonatomic) NUHistogram *luminance;

+ (Class)_histogramClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)immutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBinCount:(long long)a0 range:(struct { double x0; double x1; })a1;

@end
