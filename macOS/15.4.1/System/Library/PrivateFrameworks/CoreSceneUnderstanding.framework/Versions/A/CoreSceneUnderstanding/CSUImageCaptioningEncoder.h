@class CSUImageCaptioningEncoderConfiguration;

@interface CSUImageCaptioningEncoder : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__value_; } __ptr_; } _net;
    struct unique_ptr<ik::PixelBufferTransfer, std::default_delete<ik::PixelBufferTransfer>> { struct __compressed_pair<ik::PixelBufferTransfer *, std::default_delete<ik::PixelBufferTransfer>> { struct PixelBufferTransfer *__value_; } __ptr_; } _transferSession;
}

@property (readonly, nonatomic) CSUImageCaptioningEncoderConfiguration *configuration;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)loadResources:(id *)a0;
- (id)computeEncodedCaptioningFeaturesForImage:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)resampleImage:(struct __CVBuffer { } *)a0 intoInputImage:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
