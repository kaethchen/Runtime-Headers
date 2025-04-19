@interface CNNMLEnhancerEspresso : NSObject {
    void *_plan;
    void *_ctx;
    struct { void *plan; int network_index; } _net;
}

- (void)dealloc;
- (int)inferenceWithPixelBuffer:(struct __CVBuffer { } *)a0 toDestinationPixelBuffer:(struct __CVBuffer { } *)a1;
- (id)initWithModelFile:(id)a0;

@end
