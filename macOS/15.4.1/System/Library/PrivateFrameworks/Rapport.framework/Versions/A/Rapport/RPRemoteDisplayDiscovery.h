@class NSXPCConnection, NSArray, RPRemoteDisplayPerson, NSString, RPRemoteDisplayDevice, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplayDiscovery : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface> {
    BOOL _activateCalled;
    NSMutableDictionary *_discoveredDevices;
    NSMutableDictionary *_discoveredPeople;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL triggerEnhancedDiscovery;
@property (nonatomic) unsigned long long controlFlags;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (copy, nonatomic) id /* block */ deviceSelectedHandler;
@property (readonly, copy, nonatomic) NSArray *discoveredDevices;
@property (readonly, copy, nonatomic) NSArray *discoveredPeople;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long discoveryFlags;
@property (nonatomic) unsigned long long errorFlags;
@property (copy, nonatomic) id /* block */ errorFlagsChangedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ personChangedHandler;
@property (copy, nonatomic) id /* block */ personDeclinedHandler;
@property (copy, nonatomic) id /* block */ personFoundHandler;
@property (copy, nonatomic) id /* block */ personLostHandler;
@property (retain, nonatomic) RPRemoteDisplayPerson *personSelected;
@property (nonatomic) long long rssiThreshold;
@property (readonly, nonatomic) unsigned char currentState;
@property (readonly, nonatomic) NSString *peerDeviceIdentifier;
@property (readonly, nonatomic) RPRemoteDisplayDevice *dedicatedDevice;
@property (copy, nonatomic) id /* block */ dedicatedDeviceChangedHandler;
@property (readonly, nonatomic) unsigned char discoverySessionStartReason;
@property (copy, nonatomic) id /* block */ discoverySessionStateChangedHandler;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_lostAllDevices;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)personCanceled:(id)a0;
- (void)remoteDisplayNotifyDiscoverySessionState:(unsigned char)a0 forDevice:(id)a1 startReason:(unsigned char)a2;
- (void)exitDiscoverySessionWithReason:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (BOOL)_checkRSSIThresholdForDevice:(id)a0;
- (void)_lostAllPeople;
- (void)enterDiscoverySessionWithDevice:(id)a0 reason:(id)a1;
- (void)remoteDisplayChangedDevice:(id)a0 changes:(unsigned int)a1;
- (void)remoteDisplayDedicatedDeviceChanged:(id)a0;
- (void)remoteDisplayDeviceSelected:(id)a0;
- (void)remoteDisplayFoundDevice:(id)a0;
- (void)remoteDisplayLostDevice:(id)a0;
- (void)remoteDisplayPersonDeclined;
- (void)remoteDisplayUpdateErrorFlags:(unsigned long long)a0;
- (void)requestDedicatedDeviceConfirmationWithCompletion:(id /* block */)a0;
- (void)saveDedicatedDevice:(id)a0;
- (void)setPersonSelected:(id)a0 forDedicatedPairing:(BOOL)a1;
- (BOOL)shouldReportDevice:(id)a0;

@end
