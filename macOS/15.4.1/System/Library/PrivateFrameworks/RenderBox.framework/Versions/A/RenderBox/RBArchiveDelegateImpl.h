@class NSString, NSData, RBEncoderSet;

@interface RBArchiveDelegateImpl : NSObject <RBEncoderDelegate, RBDecoderDelegate> {
    unsigned int _flags;
    struct objc_ptr<NSData *> { NSData *_p; } _metadata;
}

@property (readonly, nonatomic) RBEncoderSet *encoderSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFlags:(unsigned int)a0;
- (id)encodedShaderLibraryData:(id)a0 error:(id *)a1;
- (id)encodedMetadata;
- (struct CGFont { } *)decodedCGFontWithData:(id)a0 error:(id *)a1;
- (void *)decodedImageContentsWithData:(id)a0 type:(int *)a1 error:(id *)a2;
- (void)decodedMetadata:(id)a0;
- (id)decodedShaderLibraryWithData:(id)a0 error:(id *)a1;
- (id)encodedCGFontData:(struct CGFont { } *)a0 error:(id *)a1;
- (id)encodedFontSubsetData:(id)a0 cgFont:(struct CGFont { } *)a1 error:(id *)a2;
- (id)encodedImageData:(struct { int x0; void *x1; })a0 error:(id *)a1;
- (BOOL)shouldEncodeFontSubset:(struct CGFont { } *)a0;

@end
