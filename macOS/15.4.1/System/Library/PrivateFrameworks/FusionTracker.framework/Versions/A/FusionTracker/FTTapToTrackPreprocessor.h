@protocol FTScaling;

@interface FTTapToTrackPreprocessor : NSObject {
    struct shared_ptr<__CVBuffer> { struct __CVBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } _intermediateBuffer;
    void /* unknown type, empty encoding */ _meanPixel;
    id<FTScaling> _scaler;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct __CVBuffer { } *)bgraPixelBuffer;
- (id)initWithScaler:(id)a0;
- (void /* unknown type, empty encoding */)meanPixel;
- (BOOL)preprocessBuffer:(struct __CVBuffer { } *)a0;

@end
