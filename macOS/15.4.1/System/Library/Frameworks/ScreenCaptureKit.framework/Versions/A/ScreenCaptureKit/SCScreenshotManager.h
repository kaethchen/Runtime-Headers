@interface SCScreenshotManager : NSObject

+ (void)captureImageWithFilter:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)captureImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionHandler:(id /* block */)a1;
+ (struct CGImage { } *)captureImageWithFilter:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (void)captureSampleBufferWithFilter:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (struct opaqueCMSampleBuffer { } *)captureSampleBufferWithFilter:(id)a0 configuration:(id)a1 error:(id *)a2;

@end
