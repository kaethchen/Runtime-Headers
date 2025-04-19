@class NSArray, NSString, NUColorSpace, NSNumber;

@interface _NUFlexRangeProperties : NSObject <NUFlexRangeProperties>

@property (nonatomic) unsigned long long version;
@property (nonatomic) float baseHeadroom;
@property (nonatomic) float alternateHeadroom;
@property (copy, nonatomic) NSArray *channelInfo;
@property (nonatomic) BOOL useBaseColor;
@property (retain, nonatomic) NSNumber *compatibilityGainMapHeadroom;
@property (retain, nonatomic) NUColorSpace *alternateColorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)flexRangePropertiesWithGainMapMetadata:(struct CGImageMetadata { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
