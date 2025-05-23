@interface PLAveragedEmbeddingCompareObject : PLEmbeddingCompareObject

@property (readonly, nonatomic) double averageDistanceBetweenVectors;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } videoTimeRange;

- (double)distanceBetweenVectors;
- (id)initWithAssetUUID:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 averageDistanceBetweenVectors:(double)a2;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })llmTimeRange;

@end
