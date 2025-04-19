@class NSMutableArray;

@interface VCPAdaptiveSegmentAnalyzer : NSObject {
    NSMutableArray *_adaptiveEmbeddings;
    struct vector<dlib::matrix<float, 1, 432>, std::allocator<dlib::matrix<float, 1, 432>>> { void *__begin_; void *__end_; struct __compressed_pair<dlib::matrix<float, 1, 432> *, std::allocator<dlib::matrix<float, 1, 432>>> { void *__value_; } __end_cap_; } _featureArray;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)adaptiveEmbeddings;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })averagedEmbedding:(id)a0 startTime:(float)a1 endTime:(float)a2;
- (int)calculateAdaptiveSegments:(id)a0 videoEmbeddingsX3D:(id)a1;
- (float)calculateTimestamp:(unsigned long long)a0 videoEmbeddings:(id)a1;

@end
