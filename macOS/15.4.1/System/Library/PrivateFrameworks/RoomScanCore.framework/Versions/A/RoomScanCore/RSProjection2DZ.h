@class RSSemanticImage;

@interface RSProjection2DZ : NSObject {
    RSSemanticImage *_image;
    RSSemanticImage *_bufferImage;
    int _maxDensity2d;
    int _maxDensity3d;
    struct { float global_max_density; float global_max_density_3d; float voxel_size; int z_slice; unsigned long long numSemanticChannels; unsigned long long numAllChannels; unsigned long long numHeightChannels; } _initParam;
    RSSemanticImage *_heightImage;
    RSSemanticImage *_bufferHeightImage;
    RSSemanticImage *_doorImage;
    RSSemanticImage *_bufferDoorImage;
}

- (id)init;
- (void).cxx_destruct;

@end
