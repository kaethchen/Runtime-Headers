@class NUColorSpace, NSString;

@interface NUAuxiliaryImageRawBuffer : NSObject <NUAuxiliaryImage>

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) struct CGImageMetadata { } *metadata;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain, nonatomic) struct CGImageMetadata { } *compatibilityMetadata;
@property (copy, nonatomic) NSString *cgAuxIdentifier;
@property (readonly) long long auxiliaryImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (struct CGImage { } *)cgImageRef;
- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)a0;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)auxiliaryImageByUpdatingMetadata:(struct CGImageMetadata { } *)a0;
- (struct __CVBuffer { } *)cvPixelBufferRef;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 auxiliaryImageType:(long long)a1 identifier:(id)a2;

@end
