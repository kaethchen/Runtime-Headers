@interface HDRFlexRangeParameters : NSObject <NSCopying>

@property (nonatomic) unsigned long long version;
@property (nonatomic) float baseHeadroom;
@property (nonatomic) float alternateHeadroom;
@property (nonatomic) BOOL isMono;
@property (nonatomic) float channelMin;
@property (nonatomic) float channelMax;
@property (nonatomic) float channelGamma;
@property (nonatomic) float channelBaseOffset;
@property (nonatomic) float channelAlternateOffset;
@property (nonatomic) void /* unknown type, empty encoding */ channelMinRGB;
@property (nonatomic) void /* unknown type, empty encoding */ channelMaxRGB;
@property (nonatomic) void /* unknown type, empty encoding */ channelGammaRGB;
@property (nonatomic) void /* unknown type, empty encoding */ channelBaseOffsetRGB;
@property (nonatomic) void /* unknown type, empty encoding */ channelAlternateOffsetRGB;
@property (nonatomic) BOOL useBaseColor;
@property (nonatomic) struct CGColorSpace { } *alternateColorSpace;

+ (id)flexRangeParametersFromDictionary:(id)a0;
+ (id)flexRangeParametersFromMetadata:(struct CGImageMetadata { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)createFlexRangeDictionary;
- (struct CGImageMetadata { } *)createFlexRangeMetadata;

@end
