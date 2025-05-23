@class NSMutableDictionary, NSString, AWDLActivator, NSMutableArray, NSObject;
@protocol APRKStreamRenderingManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface APRKStreamRenderingManager : NSObject {
    struct AirPlayReceiverServerPrivate { } *_server;
    NSMutableArray *_renderersArray;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _useCALayerForMirroring;
    BOOL _shouldForwardLayers;
    BOOL _usesHomeKitIntegration;
    BOOL _optimizeAudioRenderingLatency;
    struct CGSize { double width; double height; } _customDisplaySize;
    struct CGSize { double width; double height; } _customDisplaySizeMax;
    unsigned long long _displayHDRMode;
    unsigned long long _airPlayVideoVersionSupport;
    long long _permissionTimeout;
    long long _permissionGrantPeriod;
    NSMutableDictionary *_permittedClients;
    NSObject<OS_dispatch_queue> *_permittedClientsQueue;
    NSObject<OS_dispatch_source> *_permissionGrantTimer;
    BOOL _permissionEnabled;
    BOOL _altAdvertisingEnabled;
    BOOL _assistedModeEnabled;
    BOOL _forcePermissionDialog;
    NSString *_passwordString;
    AWDLActivator *_awdlActivator;
    BOOL _enableMixingMediaAudio;
    BOOL _useUniqueClientName;
}

@property (weak, nonatomic) id<APRKStreamRenderingManagerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long supportedModesMask;
@property (nonatomic) unsigned long long maxNumberOfConcurrentSessions;
@property (nonatomic) unsigned long long concurrentPlaybackPolicy;
@property (nonatomic) BOOL supportRemoteControl;
@property (nonatomic) unsigned long long preemptionPolicy;

+ (id)sharedInstance;
+ (unsigned long long)getAdvertisingAccessMode;
+ (BOOL)getAppHasSetAdvertisingAccessModeEntitlement;
+ (BOOL)listeningForAlternateBonjourBrowsing;
+ (BOOL)setAdvertisingAccessMode:(unsigned long long)a0 withError:(id *)a1;
+ (void)setListeningForAlternateBonjourBrowsing:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)activeRenderers;
- (id)delegateQueue;
- (void)setDelegateQueue:(id)a0;
- (id)allRenderers;
- (BOOL)demoModeEnabled;
- (int)forcePINRefresh;
- (void)_addPermittedClient:(id)a0;
- (unsigned long long)_customDisplayHDRModeFromPrefsWithDefault:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_customDisplaySizeFromPrefsWithDefault:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_customDisplaySizeMaxFromPrefsWithDefault:(struct CGSize { double x0; double x1; })a0;
- (struct __CFString { } *)_getHDRModeString:(unsigned long long)a0;
- (void)_initPermittedClients;
- (BOOL)_isPermittedClient:(id)a0;
- (id)_rendererForUniqueIDInternal:(id)a0;
- (void)_setPTPClockEnabled:(BOOL)a0;
- (void)_setRandomPassword;
- (int)_startReceiverServerWithSupportedModesMask:(unsigned long long)a0;
- (unsigned long long)activeRenderersCount;
- (unsigned long long)airPlayVideoVersionSupport;
- (id)allClientNames;
- (BOOL)altAdvertisingEnabled;
- (id)assistedInfoForAWDL;
- (id)assistedInfoForDiscovery;
- (id)assistedInfoForIPAddress:(id)a0;
- (id)assistedInfoForMode:(unsigned long long)a0 options:(id)a1;
- (BOOL)assistedModeEnabled;
- (id)createStreamRendererWithUniqueID:(id)a0 clientName:(id)a1 UIController:(struct OpaqueAPReceiverUIController { } *)a2;
- (unsigned long long)displayHDRMode;
- (BOOL)enableMixingMediaAudio;
- (id)ensureUniqueClientName:(id)a0;
- (BOOL)isAirPlayReceiverSupported;
- (BOOL)isAllowedToProceedForClientWithName:(id)a0 clientID:(id)a1;
- (BOOL)optimizeAudioRenderingLatency;
- (long long)permissionTimeout;
- (void)processHideGlobalPasscodePromptRequest;
- (void)processShowGlobalPasscodePromptRequest:(id)a0 withClientName:(id)a1;
- (void)removeRendererWithUniqueID:(id)a0;
- (id)rendererForUniqueID:(id)a0;
- (void)setAltAdvertisingEnabled:(BOOL)a0;
- (void)setAssistedModeEnabled:(BOOL)a0;
- (void)setCustomDisplaySizeMax:(struct CGSize { double x0; double x1; })a0;
- (void)setDemoModeEnabled:(BOOL)a0;
- (void)setDisplayHDRMode:(unsigned long long)a0;
- (void)setEnableMixingMediaAudio:(BOOL)a0;
- (void)setForcePermissionDialog:(BOOL)a0;
- (void)setOptimizeAudioRenderingLatency:(BOOL)a0;
- (void)setPermissionTimeout:(long long)a0;
- (void)setShouldForwardLayers:(BOOL)a0;
- (void)setSupportsSenderUIEvents:(BOOL)a0;
- (void)setUseCALayerForMirroring:(BOOL)a0;
- (void)setUsesHomeKitIntegration:(BOOL)a0;
- (BOOL)shouldForwardLayers;
- (int)startReceiverServer;
- (int)startReceiverServerWithSupportedRenderingModes:(unsigned long long)a0;
- (int)stopReceiverServer;
- (BOOL)supportsSenderUIEvents;
- (BOOL)systemSupportsWiFiUDM;
- (BOOL)useCALayerForMirroring;
- (BOOL)usesHomeKitIntegration;

@end
