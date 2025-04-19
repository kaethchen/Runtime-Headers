@class APSKStreamVideo, NSString, APSKStreamAudio, NSObject;
@protocol APSKSessionDelegate, OS_dispatch_queue, NSObject;

@interface APSKSession : NSObject <APSKFrameSender, APSKAudioSender> {
    id<APSKSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_queue;
    APSKStreamVideo *_videoStream;
    APSKStreamAudio *_audioStream;
    NSString *_passcode;
    int _state;
    BOOL _remote;
    struct OpaqueFigXPCRemoteClient { } *_client;
    unsigned long long _objectID;
    struct OpaqueAPMediaSender { } *_sender;
    id<NSObject> _senderNotifObserver;
}

@property (readonly, nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (int)addVideoStream:(id)a0;
- (void)startToDestination:(id)a0 withOptions:(id)a1;
- (int)addAudioStream:(id)a0;
- (void)handleAuthRequired:(int)a0;
- (void)handleFailure:(int)a0;
- (void)handleStartCompletion:(int)a0;
- (void)handleUpdatedDisplayWidth:(int)a0 height:(int)a1 refreshRate:(int)a2;
- (void)handleVideoStreamErrorNotification:(int)a0;
- (int)localSendAudioData:(id)a0;
- (int)localSendAudioDataWithTimestamps:(id)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forSampleTime:(unsigned long long)a2 forDiscontinuity:(BOOL)a3;
- (int)localSendFrame:(struct __CVBuffer { } *)a0 forTime:(long long)a1;
- (int)localSetAuthString:(id)a0;
- (int)localStartToDestination:(id)a0 withOptions:(id)a1;
- (void)localStop;
- (int)remoteSendAudioData:(id)a0;
- (int)remoteSendAudioDataWithTimestamps:(id)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forSampleTime:(unsigned long long)a2 forDiscontinuity:(BOOL)a3;
- (int)remoteSendFrame:(struct __CVBuffer { } *)a0 forTime:(long long)a1;
- (int)remoteSetAuthString:(id)a0;
- (int)remoteStartToDestination:(id)a0 withOptions:(id)a1;
- (void)remoteStop;
- (int)sendAudioData:(id)a0;
- (int)sendAudioDataWithTimestamps:(id)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forSampleTime:(unsigned long long)a2 forDiscontinuity:(BOOL)a3;
- (int)sendFrame:(struct __CVBuffer { } *)a0 forTime:(long long)a1;
- (int)setAuthString:(id)a0;
- (unsigned int)usageModes;

@end
