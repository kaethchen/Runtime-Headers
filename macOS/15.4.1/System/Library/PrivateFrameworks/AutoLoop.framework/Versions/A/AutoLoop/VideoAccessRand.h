@class AVAsset, AVAssetTrack, AVSampleBufferGenerator, AVSampleCursor, VideoDecompressor;

@interface VideoAccessRand : NSObject

@property (retain) AVSampleBufferGenerator *sampBufGen;
@property (retain) VideoDecompressor *vidDecompr;
@property (retain) AVSampleCursor *cursor;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime2x;
@property unsigned int recurs;
@property struct __CFDictionary { } *currentChunk;
@property (readonly) AVAssetTrack *videoTrack;
@property (readonly) AVAsset *asset;

- (void)dealloc;
- (void).cxx_destruct;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currPresTime;
- (int)decodeFrame:(struct __CVBuffer **)a0;
- (int)getFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 pixBuf:(struct __CVBuffer **)a1 actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;
- (id)initFromFile:(id)a0 pixelFormat:(unsigned int)a1;

@end
