@class NUColorSpace, NSString, AVDepthData;

@interface NUAuxiliaryImageAVDepthData : NSObject <NUAuxiliaryImage>

@property (readonly) AVDepthData *avDepthData;
@property (readonly) long long auxiliaryImageType;
@property (readonly, nonatomic) struct CGImageMetadata { } *metadata;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (struct CGImage { } *)cgImageRef;
- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)a0;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)auxiliaryImageByUpdatingMetadata:(struct CGImageMetadata { } *)a0;
- (struct __CVBuffer { } *)cvPixelBufferRef;
- (id)initAuxiliaryImageFromAVDepthData:(id)a0;
- (id)underlyingAVDepthData;

@end
