@class RSSemanticImage;

@interface RSOfflineProjection2DZNode : NSObject {
    RSSemanticImage *_image;
    struct { float global_max_density; float global_max_density_3d; float voxel_size; int z_slice; unsigned long long numSemanticChannels; unsigned long long numAllChannels; } _initParam;
    RSSemanticImage *_heightImage;
    RSSemanticImage *_cameraImage;
}

- (id)init;
- (void).cxx_destruct;

@end
