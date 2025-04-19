@class NSData, QCIndexPort, QCImage, QCNumberPort, CIFilter, CIImage, QCBooleanPort, QCImagePort, NSNumber;

@interface QCDepthBlurEffectImage : QCPatch {
    QCNumberPort *inputAperture;
    QCBooleanPort *inputNormalizeDisparity;
    QCNumberPort *inputScale;
    QCIndexPort *inputDraftMode;
    QCImagePort *outputImage;
    QCImagePort *outputMainImage;
    QCImagePort *outputDisparityImage;
    QCImagePort *outputAlphaMatteImage;
    unsigned int _orientation;
    BOOL _createdPorts;
}

@property (retain) NSData *_data;
@property (retain) QCImage *_disparity;
@property (retain) QCImage *_disparityNormalized;
@property (retain) CIImage *_disparityCI;
@property (retain) CIImage *_mainImageCI;
@property (retain) CIImage *_alphaCI;
@property (retain) CIFilter *_cachedFilter;
@property (retain) CIFilter *_cachedBlurmapFilter;
@property (retain) NSNumber *_minValue;
@property (retain) NSNumber *_maxValue;

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (BOOL)setPath:(id)a0;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (id)metadataAsData:(id)a0;
- (BOOL)_createImagesFromDataForContext:(id)a0;
- (void)calculateDisparityMinMaxUsingContext:(id)a0;
- (void)createBlurmapPort;
- (void)createNormalizedDisparity;
- (void)createPorts:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (int)orientationFromImage:(id)a0;
- (id)renormalize01;
- (void)setApertureBasedOnFilter:(id)a0;
- (void)setApertureBasedOnSlider:(id)a0;
- (void)setCIImage:(id)a0 onPort:(id)a1 orientation:(int)a2;
- (void)setPortsAndCreateFilterFromData:(id)a0 context:(id)a1 savedMetadata:(struct CGImageMetadata { } *)a2;
- (void)updateBlurmap;

@end
