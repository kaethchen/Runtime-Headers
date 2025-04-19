@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NUImageExportJob : NUExportJob {
    NSData *_destinationData;
    NSMutableDictionary *_auxImages;
    NSObject<OS_dispatch_queue> *_auxImageQueue;
}

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (id)auxiliaryImages;
- (id)_filterProperties:(id)a0;
- (id)auxiliaryImageTypes;
- (struct CGImage { } *)copyCGImageWithIOSurface:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 colorSpace:(id)a2 error:(out id *)a3;
- (id)evaluateRenderDependencies:(out id *)a0;
- (id)imageDestinationOptions;
- (id)imageExportRequest;
- (id)initWithExportRequest:(id)a0;
- (id)initWithImageExportRequest:(id)a0;
- (id)prepareNodeWithPipelineState:(id)a0 error:(out id *)a1;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
