@class NSXPCConnection, NSString, NSSet, NSMutableDictionary, NSMutableSet, NSObject, NSXPCListener, CMContinuityCaptureAudioRouteManager;
@protocol CMContinuityCaptureAudioInputProviderDelegate, OS_dispatch_group, ContinuityCaptureAudioXPCHelperProviderProtocol, CMContinuityCaptureAudioInputReceiverObject, OS_dispatch_queue;

@interface CMContinuityCaptureAudioInputProvider : NSObject <NSXPCListenerDelegate, CMContinuityCaptureAudioInputProviderObject> {
    NSXPCListener *_serviceListener;
    NSXPCConnection *_connectionToHelper;
    NSXPCConnection *_connectionToReceiver;
    id<ContinuityCaptureAudioXPCHelperProviderProtocol> _xpcHelper;
    id<CMContinuityCaptureAudioInputReceiverObject> _audioInputReceiverProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_providerQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbacksQueue;
    NSObject<OS_dispatch_queue> *_firstDeviceDiscoveryWaitQueue;
    unsigned long long _bufferCount;
    NSSet *_availableAudioDeviceUIDs;
    NSMutableSet *_magicStateAudioDeviceUIDs;
    NSMutableDictionary *_availableDeviceNamesByAudioDeviceUIDs;
    NSMutableDictionary *_clientDeviceUIDsByAudioDeviceUIDs;
    CMContinuityCaptureAudioRouteManager *_audioRouteManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _firstDeviceDiscoveryFinished;
    NSObject<OS_dispatch_group> *_firstDeviceDiscoveryWaitGroup;
    NSMutableDictionary *_vouchersByAudioDeviceUIDs;
}

@property (weak, nonatomic) id<CMContinuityCaptureAudioInputProviderDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *magicStateAudioDeviceUIDs;
@property (nonatomic) BOOL firstDeviceDiscoveryFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)removeMagicStateAudioDeviceUID:(id)a0;
- (void)updateAvailableAudioDeviceUIDs:(id)a0;
- (void)stopStreamingForAudioDeviceUID:(id)a0;
- (void)_bringUpXPCConnectionToHelper;
- (void)_serializeAndSendAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forAudioDeviceUID:(id)a1;
- (void)_setupListenerForAudioInputReceiver;
- (BOOL)_shouldPrintSampleBufferLog:(long long)a0;
- (void)_stopStreamingForAllAvailableDevices;
- (BOOL)_waitUntilFirstDeviceDiscoveryFinishWithTimeout:(double)a0;
- (void)addMagicStateAudioDeviceUID:(id)a0;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forAudioDeviceUID:(id)a1;
- (id)getRemotelyCollectedLatencyMetricsForUniqueID:(long long)a0;
- (void)publishDeviceForClientDeviceUID:(id)a0 audioDeviceUID:(id)a1 name:(id)a2 deviceModel:(id)a3;
- (void)receiverConnectedWithReply:(id /* block */)a0;
- (void)startCollectingLatencyMetricsRemotelyWithUniqueID:(long long)a0 forAudioDeviceUID:(id)a1;
- (void)startFillingSilenceAudioDataIfApplicableForAudioDeviceUID:(id)a0;
- (void)startStreamingForAudioDeviceUID:(id)a0 options:(id)a1;
- (void)terminateDeviceForClientDeviceUID:(id)a0;
- (void)updateNetworkClockWithSynchronizedNetworkTime:(unsigned long long)a0 forSampleTime:(unsigned long long)a1 networkClockIdentifier:(unsigned long long)a2 transportTypeIsUSB:(BOOL)a3 forAudioDeviceUID:(id)a4;
- (void)updateUSBActive:(BOOL)a0 forAudioDeviceUID:(id)a1;
- (void)useCachedNetworkClockIfPossibleForAudioDeviceUID:(id)a0;

@end
