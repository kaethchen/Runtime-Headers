@class NSString, NSDictionary, NUColorSpace, AVCameraCalibrationData, NUPixelFormat;
@protocol NUAuxiliaryImage;

@interface NUCGAuxiliaryImageProperties : NSObject <NUAuxiliaryImageProperties, NSCopying> {
    id _imageSource;
}

@property (retain) NSDictionary *auxCGInfoDictionary;
@property (retain) id<NUAuxiliaryImage> auxImage;
@property (retain) AVCameraCalibrationData *depthCamCalibrationData;
@property (retain) id auxDataInfoMetadata;
@property (retain) NUColorSpace *auxInfoColorSpace;
@property (readonly) NSString *auxiliaryImageTypeCGIdentifier;
@property (retain, nonatomic) struct CGImageMetadata { } *compatibilityMetadata;
@property (readonly, nonatomic) struct { long long width; long long height; } size;
@property (readonly, nonatomic) NUPixelFormat *pixelFormat;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)auxiliaryImage:(out id *)a0;
- (id)auxiliaryCoreGraphicsInfoDictionary:(out id *)a0;
- (struct CGImageMetadata { } *)auxiliaryDataInfoMetadata;
- (id)auxiliaryImagePropertiesByUpdatingMetadata:(struct CGImageMetadata { } *)a0;
- (id)auxiliaryImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)depthCameraCalibrationData;
- (id)initWithCGProperties:(id)a0 imageSource:(struct CGImageSource { } *)a1;

@end
