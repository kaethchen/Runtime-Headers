@class NSString, NSObject, NSXPCConnection;
@protocol CMContinuityCaptureAudioInputReceiverDelegate, ContinuityCaptureAudioXPCHelperReceiverProtocol, OS_dispatch_queue, CMContinuityCaptureAudioInputProviderObject;

@interface CMContinuityCaptureAudioInputReceiver : NSObject <ContinuityCaptureAudioXPCHelperReceiverProtocol, CMContinuityCaptureAudioInputReceiverObject> {
    NSXPCConnection *_connectionToHelper;
    NSXPCConnection *_connectionToProvider;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_receiverQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbacksQueue;
    id<ContinuityCaptureAudioXPCHelperReceiverProtocol> _xpcHelper;
    id<CMContinuityCaptureAudioInputProviderObject> _audioInputProviderProxy;
}

@property (weak, nonatomic) id<CMContinuityCaptureAudioInputReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateXPCConnectionToProvider:(id)a0;
- (void)updateAvailableAudioDeviceUIDs:(id)a0;
- (void)stopStreamingForAudioDeviceUID:(id)a0;
- (void)_bringUpXPCConnectionToHelper;
- (void)_bringUpXPCConnectionToProviderListenerEndpoint:(id)a0;
- (void)enqueueAudioData:(id)a0 numSamples:(unsigned int)a1 startingSampleTime:(double)a2 forAudioDeviceUID:(id)a3;
- (void)finishCollectingLatencyMetricsForUniqueID:(long long)a0 withReply:(id /* block */)a1;
- (void)providerHasConnectedWithListenerEndpoint:(id)a0;
- (void)startCollectingLatencyMetricsWithUniqueID:(long long)a0 forAudioDeviceUID:(id)a1;
- (void)startFillingSilenceAudioDataIfApplicableForAudioDeviceUID:(id)a0;
- (void)startStreamingForAudioDeviceUID:(id)a0 options:(id)a1;
- (void)updateAvailableDevices:(id)a0;
- (void)updateNetworkClockWithSynchronizedNetworkTime:(unsigned long long)a0 forSampleTime:(unsigned long long)a1 networkClockIdentifier:(unsigned long long)a2 transportTypeIsUSB:(BOOL)a3 forAudioDeviceUID:(id)a4;
- (void)updateUSBActive:(BOOL)a0 forAudioDeviceUID:(id)a1;
- (void)useCachedNetworkClockIfPossibleForAudioDeviceUID:(id)a0;

@end
