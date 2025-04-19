@interface CSFExclaveAudioAvailability : NSObject

@property (readonly, nonatomic) unsigned long long numChannels;
@property (readonly, nonatomic) unsigned long long numSamples;
@property (readonly, nonatomic) unsigned long long sampleByteDepth;
@property (readonly, nonatomic) unsigned long long startSampleCount;
@property (readonly, nonatomic) unsigned long long hostTime;
@property (readonly, nonatomic) unsigned long long arrivalHostTimeToAudioRecorder;

- (id)initWithNumChannels:(unsigned long long)a0 numSamples:(unsigned long long)a1 sampleByteDepth:(unsigned long long)a2 startSampleCount:(unsigned long long)a3 hostTime:(unsigned long long)a4 arrivalHostTimeToAudioRecorder:(unsigned long long)a5;

@end
