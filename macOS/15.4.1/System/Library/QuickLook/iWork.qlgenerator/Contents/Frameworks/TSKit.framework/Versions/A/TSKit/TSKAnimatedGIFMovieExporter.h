@class TSPData;

@interface TSKAnimatedGIFMovieExporter : NSObject {
    TSPData *_data;
}

@property (nonatomic) BOOL compressesVideo;

+ (BOOL)canInitWithDataType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)exportToMovieFileURL:(id)a0 fileType:(id)a1 completionHandler:(id /* block */)a2;
- (struct opaqueCMSampleBuffer { } *)p_createCMSampleBufferFromImageInCGImageSource:(struct CGImageSource { } *)a0 atIndex:(unsigned long long)a1 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 nextPresentationTime:(out struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3;
- (void)p_finishWithSuccess:(BOOL)a0 error:(id)a1 completionHandler:(id /* block */)a2;

@end
