@class NSData, NSObject;
@protocol OS_xpc_object;

@interface CSAudioChunk : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long numChannels;
@property (readonly, nonatomic) unsigned long long numSamples;
@property (readonly, nonatomic) unsigned long long sampleByteDepth;
@property (readonly, nonatomic) unsigned long long startSampleCount;
@property (readonly, nonatomic) unsigned long long hostTime;
@property (readonly, nonatomic) unsigned long long arrivalHostTimeToAudioRecorder;
@property (readonly, nonatomic) BOOL wasBuffered;
@property (readonly, nonatomic) BOOL remoteVADAvailable;
@property (retain, nonatomic) NSData *remoteVAD;
@property (readonly, nonatomic) BOOL isFloat;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0;
- (id)dataForChannel:(unsigned long long)a0;
- (id)dataWithRemoteVADWithScaleFactor:(float)a0 numAudioSamplesPerRemoteVAD:(unsigned long long)a1;
- (id)initWithData:(id)a0 numChannels:(unsigned long long)a1 numSamples:(unsigned long long)a2 sampleByteDepth:(unsigned long long)a3 startSampleCount:(unsigned long long)a4 hostTime:(unsigned long long)a5 arrivalHostTimeToAudioRecorder:(unsigned long long)a6 wasBuffered:(BOOL)a7 remoteVAD:(id)a8 isFloat:(BOOL)a9;
- (id)initWithData:(id)a0 numChannels:(unsigned long long)a1 numSamples:(unsigned long long)a2 sampleByteDepth:(unsigned long long)a3 startSampleCount:(unsigned long long)a4 hostTime:(unsigned long long)a5 remoteVAD:(id)a6 isFloat:(BOOL)a7;
- (id)remoteVADSubChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1 numAudioSamplesPerRemoteVAD:(unsigned long long)a2;
- (void)skipSamplesAtStartSuchThatNumSamplesReceivedSoFar:(unsigned long long)a0 reachesACountOf:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)subChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1;
- (id)subChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1 forChannel:(unsigned long long)a2;
- (id)chunkForChannel:(unsigned long long)a0;
- (unsigned long long)copySubAudioChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1 to:(void *)a2 dstBufferSize:(unsigned long long)a3;
- (id)gainCompensatedChunk;
- (void)splitAudioChunkSuchThatNumSamplesReceivedSoFar:(unsigned long long)a0 reachesACountOf:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
