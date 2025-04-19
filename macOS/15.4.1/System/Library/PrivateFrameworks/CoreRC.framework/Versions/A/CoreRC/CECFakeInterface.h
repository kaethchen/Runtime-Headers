@class NSDictionary, NSMutableDictionary, NSMutableArray;

@interface CECFakeInterface : CECInterface {
    NSMutableDictionary *_properties;
    NSMutableArray *_receivedFrames;
    NSDictionary *_blockedMessages;
}

+ (id)defaultPlaybackDeviceProperties;
+ (id)defaultAudioSystemProperties;
+ (id)defaultPropertiesWithPhysicalAddress:(unsigned short)a0;
+ (id)defaultTVProperties;

- (void)dealloc;
- (id)properties;
- (void)scheduleWithDispatchQueue:(id)a0;
- (BOOL)sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0 withRetryCount:(unsigned char)a1 error:(id *)a2;
- (void)clearReceivedFrames;
- (BOOL)errorIsNack:(id)a0;
- (void)fakeHotPlugDetect:(BOOL)a0;
- (void)fakeHotPlugDetectWithPhysicalAddress:(unsigned short)a0;
- (void)fakePropertiesChanged:(id)a0;
- (void)fakeTerminated;
- (id)initWithInterfaceListener:(id)a0 properties:(id)a1;
- (struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })lastReceivedFrameWithOpcode:(unsigned char)a0;
- (struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })lastReceivedFrameWithOpcode:(unsigned char)a0 andHeader:(unsigned char)a1;
- (BOOL)pingTo:(unsigned char)a0 acknowledged:(BOOL *)a1 error:(id *)a2;
- (void)receivedFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0;
- (id)receivedFrames;
- (void)setBlockedMessages:(id)a0;
- (BOOL)setHardwareAddressMask:(unsigned short)a0 error:(id *)a1;
- (void)unscheduleFromDispatchQueue:(id)a0;

@end
