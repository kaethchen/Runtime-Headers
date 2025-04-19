@class NSString, NUPixelFormat, NUColorSpace;
@protocol NUAuxiliaryImage;

@interface NUCMPhotoAuxiliaryImageProperties : NSObject <NUAuxiliaryImageProperties> {
    id _container;
    long long _type;
    id<NUAuxiliaryImage> _auxImage;
    NSString *_auxiliaryImageURN;
}

@property (readonly) NSString *auxiliaryImageTypeCGIdentifier;
@property (readonly, nonatomic) struct { long long width; long long height; } size;
@property (readonly, nonatomic) NUPixelFormat *pixelFormat;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly, nonatomic) struct CGImageMetadata { } *compatibilityMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)auxiliaryImage:(out id *)a0;
- (id)auxiliaryCoreGraphicsInfoDictionary:(out id *)a0;
- (struct CGImageMetadata { } *)auxiliaryDataInfoMetadata;
- (id)auxiliaryImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)depthCameraCalibrationData;
- (id)initWithProperties:(id)a0 decompressionContainer:(struct CMPhotoDecompressionContainer { } *)a1;

@end
