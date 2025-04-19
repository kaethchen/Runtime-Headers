@class NSString, NUPixelFormat, NUColorSpace;

@interface NUTestPatternAuxiliaryProperties : NSObject <NUAuxiliaryImageProperties>

@property (nonatomic) struct { long long width; long long height; } size;
@property (retain) NSString *auxiliaryImageTypeCGIdentifier;
@property (readonly, nonatomic) NUPixelFormat *pixelFormat;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly, nonatomic) struct CGImageMetadata { } *compatibilityMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)auxiliaryImage:(out id *)a0;
- (id)auxiliaryCoreGraphicsInfoDictionary:(out id *)a0;
- (struct CGImageMetadata { } *)auxiliaryDataInfoMetadata;
- (id)auxiliaryImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)depthCameraCalibrationData;

@end
