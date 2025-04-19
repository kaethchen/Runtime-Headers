@class AVAssetImageGenerator;

@interface TSDMoviePosterImageGenerator : NSObject {
    AVAssetImageGenerator *_assetImageGenerator;
    _Atomic int _isCancelled;
}

@property (nonatomic) struct CGSize { double width; double height; } maximumSize;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (void)cancelAllCGImageGeneration;
- (void)generateCGImageAsynchronouslyForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (struct CGImage { } *)copyCGImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 error:(id *)a1;

@end
