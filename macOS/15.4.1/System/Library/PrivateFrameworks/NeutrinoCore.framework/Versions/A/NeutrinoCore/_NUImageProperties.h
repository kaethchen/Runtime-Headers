@class NSMutableDictionary, NSString, NSDictionary, NSURL, NUColorSpace, NUVersion, NSNumber;
@protocol NUSemanticStyleProperties, NURAWImageProperties, NUFlexRangeProperties;

@interface _NUImageProperties : NSObject <NUImageProperties> {
    NSNumber *_gainMapHeadroomValue;
    NSMutableDictionary *_auxiliaryImagesProperties;
}

@property (retain) NSURL *url;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (nonatomic) float contentHeadroom;
@property struct { long long width; long long height; } size;
@property long long orientation;
@property (retain) NSString *fileUTI;
@property long long alphaInfo;
@property long long componentInfo;
@property (retain) id<NURAWImageProperties> rawProperties;
@property double gainMapHeadroom;
@property (retain) id<NUFlexRangeProperties> flexRangeProperties;
@property (retain) id<NUSemanticStyleProperties> semanticStyleProperties;
@property (readonly) BOOL isHDR;
@property (readonly) BOOL hasGainMap;
@property (readonly) NUVersion *meteorPlusGainMapVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGImageMetadata { } *)createGainMapMetadataWithHeadroom:(double)a0;
+ (BOOL)getGainMapHeadroom:(double *)a0 fromMetadata:(struct CGImageMetadata { } *)a1;
+ (BOOL)setGainMapHeadroom:(double)a0 toMakerNote:(id)a1;
+ (void)_computeMeteorPlusGain:(double *)a0 gainMapValue:(double *)a1 forContentHeadroom:(double)a2;
+ (BOOL)getGainMapHeadroom:(double *)a0 fromMakerNote:(id)a1;
+ (BOOL)setGainMapHeadroom:(double)a0 toMetadata:(struct CGImageMetadata { } *)a1;
+ (id)versionFromFlexRangeMetadata:(struct CGImageMetadata { } *)a0;
+ (id)versionFromMetadataTag:(struct CGImageMetadataTag { } *)a0;
+ (id)versionFromMeteorPlusMetadata:(struct CGImageMetadata { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (void)_updateGainMapHeadroomMetadata:(double)a0;
- (double)_computeGainMapHeadroom;
- (void)_updateGainMapMetadata:(struct CGImageMetadata { } *)a0;
- (void)_updateMakerNote:(id)a0;
- (id)auxiliaryImagePropertiesForType:(long long)a0;
- (void)enumerateAuxiliaryImageProperties:(id /* block */)a0;
- (void)resetAuxiliaryImageProperties;
- (void)setAuxiliaryImageProperties:(id)a0 forType:(long long)a1;

@end
