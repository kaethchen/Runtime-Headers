@interface CNNMLScalerEspresso : NSObject {
    void *_plan;
    void *_ctx;
    struct { void *plan; int network_index; } _net;
}

@property (readonly) int outputHeight;
@property (readonly) int outputWidth;

- (void)dealloc;
- (int)inferenceWithPixelBuffer:(struct __CVBuffer { } *)a0 toDestinationPixelBuffer:(struct __CVBuffer { } *)a1;
- (id)initWithConfig:(id)a0 modelIndex:(long long)a1 scalingFactor:(int)a2;

@end
