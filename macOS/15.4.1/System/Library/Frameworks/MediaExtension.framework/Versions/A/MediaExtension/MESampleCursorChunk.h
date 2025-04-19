@class MEByteSource;

@interface MESampleCursorChunk : NSObject <NSCopying>

@property (readonly, retain, nonatomic) MEByteSource *byteSource;
@property (readonly, nonatomic) struct { long long offset; long long length; } chunkStorageRange;
@property (readonly, nonatomic) struct { long long chunkSampleCount; BOOL chunkHasUniformSampleSizes; BOOL chunkHasUniformSampleDurations; BOOL chunkHasUniformFormatDescriptions; } chunkInfo;
@property (readonly, nonatomic) long long sampleIndexWithinChunk;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithByteSource:(id)a0 chunkStorageRange:(struct { long long x0; long long x1; })a1 chunkInfo:(struct { long long x0; BOOL x1; BOOL x2; BOOL x3; })a2 sampleIndexWithinChunk:(long long)a3;

@end
