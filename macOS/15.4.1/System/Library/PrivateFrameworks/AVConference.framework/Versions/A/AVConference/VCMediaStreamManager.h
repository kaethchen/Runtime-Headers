@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCMediaStreamManager : NSObject <VCMediaStreamDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } stateLock;
    NSMutableArray *streamArray;
    NSObject<OS_dispatch_queue> *xpcQueue;
    NSMutableDictionary *_vcMomentsCollectorDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (void)addNSError:(id)a0 toXPCArgumentDictionary:(id)a1;

- (oneway void)release;
- (void)dealloc;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (void)stopStream:(id)a0;
- (BOOL)addSyncSourceToVideoStreamConfig:(id)a0 sourceStreamToken:(long long)a1 error:(id *)a2;
- (void)cleanupStreamSyncSourceForVideoStream:(id)a0 andAudioStream:(id)a1;
- (void)deregisterBlocksForService;
- (void)pauseStreams:(BOOL)a0;
- (void)registerBlocksForService;
- (id)textStreamWithStreamToken:(long long)a0;
- (void)vcMediaStream:(id)a0 didReceiveDTMFEventWithDigit:(char)a1;
- (void)vcMediaStream:(id)a0 didReceiveRTCPPackets:(id)a1;
- (void)vcMediaStream:(id)a0 didReceiveTTYCharacter:(unsigned short)a1;
- (void)vcMediaStream:(id)a0 didReceiveText:(id)a1;
- (void)vcMediaStream:(id)a0 didUpdateVideoConfiguration:(BOOL)a1 error:(id)a2 dictionary:(id)a3;
- (void)vcMediaStream:(id)a0 downlinkQualityDidChange:(id)a1;
- (void)vcMediaStream:(id)a0 uplinkQualityDidChange:(id)a1;
- (void)vcMediaStreamDidInterruptionBegin:(id)a0;
- (void)vcMediaStreamDidInterruptionEnd:(id)a0;
- (void)vcMediaStreamDidRTCPTimeOut:(id)a0;
- (void)vcMediaStreamDidRTPTimeOut:(id)a0;
- (void)vcMediaStreamDidRecoverFromRTCPTimeOut:(id)a0;
- (void)vcMediaStreamServerDidDie:(id)a0;
- (id)videoStreamWithSyncToken:(long long)a0;

@end
