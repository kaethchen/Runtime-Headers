@class NSMutableDictionary, NSMutableArray;

@interface AVResolvedDecompressionSettings : NSObject {
    NSMutableDictionary *_decompressionAttributes;
    BOOL _useDefaultPixelBufferAttributes;
    NSMutableArray *_outputCodecTypes;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxFrameDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minFrameDuration;
- (id)pixelBufferAttributes;
- (BOOL)isVideoMirrored;
- (void)resolveDecompressionAttributes:(id)a0;
- (BOOL)allowUpscaling;
- (id)outputCodecTypes;
- (void)resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:(id)a0;
- (long long)videoOrientation;
- (id)vtDecompressionProperties;

@end
