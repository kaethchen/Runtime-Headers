@interface SNUtils : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isRunningInDaemon;
+ (void)logKShotSegments:(id)a0 exemplarIndex:(long long)a1;
+ (id)createMultiArrayContainingPreciseTimeRangeOfAudioFile:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 maxFramesPerBuffer:(unsigned int)a2 recycleBuffers:(BOOL)a3 prefixBufferPopulator:(id /* block */)a4 suffixBufferPopulator:(id /* block */)a5 numDimensions:(long long)a6 error:(id *)a7;
+ (BOOL)flushBytesFromPreciseTimeRangeInAudioFile:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 maxFramesPerBuffer:(unsigned int)a2 recycleBuffers:(BOOL)a3 prefixBufferPopulator:(id /* block */)a4 suffixBufferPopulator:(id /* block */)a5 intoSink:(id /* block */)a6 error:(id *)a7;
+ (BOOL)flushBytesFromStreamSource:(id /* block */)a0 toBuffer:(void *)a1 ofSizeInBytes:(long long)a2 error:(id *)a3;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })lastDimensionSizeRange:(id)a0;
+ (id)loadModelAtURL:(id)a0 withTimeout:(double)a1 error:(id *)a2;
+ (unsigned int)modelBlockSize:(id)a0 channelCount:(unsigned int)a1;
+ (BOOL)multiArrayConstraintLastDimensionIsFlexible:(id)a0;
+ (int)numberOfElements:(id)a0;
+ (id)toFloatScalarConvertFromMLMultiArray:(id)a0 error:(id *)a1;
+ (id)toMLMultiArrayConvertFromFloatScalar:(id)a0 error:(id *)a1;
+ (id)userSuppliedInputFeatureNames:(id)a0;
+ (id /* block */)zeroBufferPopulator;

- (id)init;

@end
