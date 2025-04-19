@class NSString;
@protocol CMISmartStyleProcessor, MTLCommandQueue;

@interface BWApplySmartStyleRenderer : NSObject <BWFilterRenderer> {
    id<CMISmartStyleProcessor> _smartStyleProcessor;
    id<MTLCommandQueue> _mtlCommandQueue;
    int _smartStyleRenderingVersion;
    Class _smartStyleProcessorInputOutputClass;
}

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithMetalCommandQueue:(id)a0 smartStyleRenderingVersion:(int)a1;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputMediaPropertiesByAttachedMediaKey:(id)a2;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;

@end
