@interface DRTrack : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (id)trackForAudioOfLength:(id)a0 producer:(id)a1;
+ (BOOL)isPropertyKey:(id)a0;
+ (void)setupBindings;
+ (id)trackForAudioFile:(id)a0;
+ (id)trackForRootFolder:(id)a0;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)length;
- (unsigned long long)_cfTypeID;
- (void)setLength:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)properties;
- (void)setProperties:(id)a0;
- (unsigned short)blockSize;
- (id)verificationType;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (float)testProductionSpeedForInterval:(double)a0;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)a0;
- (int)_estimateSizeCallback:(unsigned long long *)a0;
- (struct DRTrackObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; void /* function */ *x7; void *x8; unsigned int x9; BOOL x10; struct TrackProducer *x11; struct DRSessionObject *x12; } *)_obj;
- (int)_postBurnCallback;
- (int)_preBurnCallback:(id)a0;
- (int)_produceDataCallback:(struct DRTrackProductionInfo { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; } *)a0;
- (int)_producePreGapCallback:(struct DRTrackProductionInfo { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; } *)a0;
- (float)_testProductionSpeedForLength:(unsigned int)a0 orInterval:(double)a1;
- (int)_verificationDoneCallback;
- (int)_verificationStartingCallback;
- (int)_verifyDataCallback:(struct DRTrackProductionInfo { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; } *)a0;
- (int)_verifyPreGapCallback:(struct DRTrackProductionInfo { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; } *)a0;
- (long long)blockType;
- (long long)dataForm;
- (id)dvdCopyrightInfo;
- (id)dvdTimestamp;
- (unsigned long long)estimateLength;
- (id)initWithProducer:(id)a0;
- (id)initWithProperties:(id)a0 callback:(void /* function */ *)a1;
- (float)maximumBurnSpeed;
- (id)preGap;
- (long long)sessionFormat;
- (void)setBlockSize:(unsigned short)a0;
- (void)setBlockType:(long long)a0;
- (void)setDVDCopyrightInfo:(id)a0;
- (void)setDVDTimestamp:(id)a0;
- (void)setDataForm:(long long)a0;
- (void)setMaximumBurnSpeed:(float)a0;
- (void)setPreGap:(id)a0;
- (void)setSessionFormat:(long long)a0;
- (void)setTrackMode:(long long)a0;
- (void)setVerificationType:(id)a0;
- (float)testProductionSpeedForLength:(unsigned int)a0;
- (long long)trackMode;

@end
