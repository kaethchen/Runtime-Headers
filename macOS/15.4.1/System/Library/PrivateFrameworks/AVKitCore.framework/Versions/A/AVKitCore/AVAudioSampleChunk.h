@class NSMutableArray;

@interface AVAudioSampleChunk : NSObject {
    NSMutableArray *_backing;
    float **_samples;
}

@property (readonly, getter=isFull) BOOL full;
@property (readonly) unsigned long long channels;
@property (readonly) unsigned long long samplesPerChannel;
@property (readonly) float **samples;

- (void)dealloc;
- (void).cxx_destruct;
- (void)appendBytes:(const void *)a0 ofLength:(unsigned long long)a1 toChannel:(unsigned long long)a2;
- (id)initWithChannels:(unsigned long long)a0 samplesPerChannel:(unsigned long long)a1;
- (unsigned long long)remainingBytes;

@end
