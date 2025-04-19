@class NSDictionary, ASDTAudioDevice;

@interface ASDTStream : ASDStream {
    unsigned int _ioBufferFramesSizeMax;
    unsigned int _ioBufferFramesUnexpectedSizeCount;
}

@property (weak, nonatomic) ASDTAudioDevice *device;
@property (copy, nonatomic) id /* block */ updateClientPositionCopy;
@property (nonatomic) id /* block */ updateClientPositionUnretained;
@property (nonatomic) unsigned int safetyOffset;
@property (nonatomic) unsigned long long isolatedUseCaseID;
@property (nonatomic) char *ioBufferPtr;
@property (retain, nonatomic) NSDictionary *latencies;

+ (id)streamForConfig:(id)a0 withDevice:(id)a1;

- (void).cxx_destruct;
- (unsigned int)ioBufferSize;
- (void)clearBuffer;
- (id /* block */)readInputBlock;
- (void)setPhysicalFormat:(id)a0;
- (id /* block */)writeMixBlock;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)ioThreadStateChange:(id)a0;
- (void)updateLatency;
- (id /* block */ *)getUpdateClientPositionUnretainedAddress;
- (id)initWithConfig:(id)a0 withDevice:(id)a1;
- (id)initWithDirection:(unsigned int)a0 withDevice:(id)a1;
- (unsigned int *)ioBufferFramesSizeMax;
- (unsigned int *)ioBufferFramesUnexpectedSizeCount;
- (char **)ioBufferRef;
- (int)pmIdleStream:(int)a0;
- (int)pmInactiveStream:(int)a0;
- (int)pmOnStream;
- (int)pmPrepareStream:(int)a0;
- (int)pmPrewarmStream:(int)a0;
- (int)pmSleepStream;
- (int)pmStateTransition:(int)a0;
- (id /* block */)readOrWriteBlock;
- (BOOL)setupPhysicalFormats:(id)a0;
- (id /* block */)updateClientPositionBlock;
- (void)writeZerosToMixMilliseconds:(unsigned int)a0 atSampleTime:(unsigned long long)a1;

@end
