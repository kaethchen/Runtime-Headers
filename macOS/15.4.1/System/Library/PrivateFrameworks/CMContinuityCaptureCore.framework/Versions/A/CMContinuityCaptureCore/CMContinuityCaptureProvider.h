@class NSString, NSSet, NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureProvider : CMIOExtensionProvider <CMContinuityCaptureAudioInputProviderDelegate, CMContinuityCaptureXPCServerDelegateCCA, CMIOExtensionProviderSource> {
    NSMutableDictionary *_availableCaptureDevicesByIdentifiers;
    NSMutableSet *_pendingTerminateDeviceIdentifiers;
    NSMutableArray *_devicePublishLogs;
    NSMutableSet *_observedDevices;
    _Atomic BOOL _observingStateKVOs;
    NSMutableSet *_registeredStreamDevicesOnWifi;
}

@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *availableProperties;

+ (id)filterCapabilitiesByMinorVersion:(id)a0;

- (void).cxx_destruct;
- (BOOL)activate;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)reset:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)updateState;
- (id)debugInfo;
- (BOOL)connectClient:(id)a0 error:(id *)a1;
- (void)disconnectClient:(id)a0;
- (id)providerPropertiesForProperties:(id)a0 error:(id *)a1;
- (BOOL)setProviderProperties:(id)a0 error:(id *)a1;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_debugInfo;
- (void)_reset:(id)a0;
- (void)_audioInputProvider:(id)a0 startStreamingForClientDeviceUID:(id)a1 options:(id)a2;
- (void)_audioInputProvider:(id)a0 stopStreamingForClientDeviceUID:(id)a1;
- (id)_captureDeviceForEntity:(long long)a0 deviceUID:(id)a1;
- (void)_terminateCompleteForDevice:(id)a0;
- (void)audioInputProvider:(id)a0 startStreamingForClientDeviceUID:(id)a1 options:(id)a2;
- (void)audioInputProvider:(id)a0 stopStreamingForClientDeviceUID:(id)a1;
- (void)createCompositeDeviceWithTransportDevice:(id)a0;
- (void)currentDeviceList:(id /* block */)a0;
- (void)debugInfo:(id /* block */)a0;
- (void)disableAutoTransportSwitch:(BOOL)a0 deviceIdentifier:(id)a1;
- (void)disconnectSession:(id)a0;
- (void)logDevicePublishSummary:(id)a0 publishTime:(id)a1;
- (void)notifyStateChange:(id)a0 forEntity:(unsigned long long)a1;
- (void)postEvent:(id)a0 data:(id)a1 deviceIdentifier:(id)a2;
- (void)postEventOnAllDevices:(id)a0 data:(id)a1;
- (void)registerStreamIntentForDevice:(id)a0 forTransportType:(long long)a1 completion:(id /* block */)a2;
- (void)resetTransportDevice:(id)a0 forIdentifier:(id)a1;
- (void)setControl:(id)a0 withValue:(id)a1 deviceIdentifier:(id)a2;
- (void)terminateAllDevices;
- (void)terminateCompleteForDevice:(id)a0;
- (void)terminateCompositeDeviceWithIdentifier:(id)a0;
- (void)terminateDevicesIfApplicable:(id)a0;
- (void)unhideDeviceWithIdentifier:(id)a0;
- (void)unregisterStreamIntentForDevice:(id)a0;

@end
