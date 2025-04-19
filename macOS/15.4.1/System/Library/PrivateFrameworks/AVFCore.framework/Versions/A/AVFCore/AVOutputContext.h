@class NSString, AVOutputContextInternal;

@interface AVOutputContext : NSObject <NSSecureCoding> {
    AVOutputContextInternal *_outputContext;
}

@property (class, readonly, nonatomic) id /* block */ defaultCommunicationChannelManagerCreator;
@property (class, readonly, nonatomic) id /* block */ commChannelUUIDCommunicationChannelManagerCreator;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueFigRoutingContext { } *figRoutingContext;
@property (readonly, nonatomic) NSString *deviceName;

+ (void)initialize;
+ (id)addSharedAudioOutputContext;
+ (id)allSharedAudioOutputContexts;
+ (id)auxiliaryOutputContext;
+ (Class)defaultOutputContextImplClass;
+ (id)defaultSharedOutputContext;
+ (id)iTunesAudioContext;
+ (id)outputContext;
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)a0 options:(id)a1;
+ (id)outputContextForID:(id)a0;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 communicationChannelManagerCreator:(id /* block */)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 outputDeviceTranslator:(id)a1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemRemoteDisplayContext;
+ (id)sharedSystemRemotePoolContext;
+ (id)sharedSystemScreenContext;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)impl;
- (BOOL)isMuted;
- (id)contextID;
- (void)setVolume:(float)a0;
- (float)volume;
- (id)ID;
- (void)setMuted:(BOOL)a0;
- (void)outputContextImplDidChangeMute:(id)a0;
- (BOOL)canMute;
- (void)addOutputDevice:(id)a0;
- (void)addOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (int)applicationProcessID;
- (id)associatedAudioDeviceID;
- (BOOL)canSetVolume;
- (id)communicationChannelDelegate;
- (void)decreaseVolumeByCount:(long long)a0;
- (BOOL)getApplicationProcessID:(int *)a0;
- (void)increaseVolumeByCount:(long long)a0;
- (id)initWithOutputContextImpl:(id)a0;
- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (id)outgoingCommunicationChannel;
- (void)outputContextImpl:(id)a0 didChangeOutputDeviceWithInitiator:(id)a1;
- (void)outputContextImpl:(id)a0 didChangeOutputDevicesWithInitiator:(id)a1 reason:(id)a2 deviceID:(id)a3 previousDeviceIDs:(id)a4;
- (void)outputContextImpl:(id)a0 didCloseCommunicationChannel:(id)a1;
- (void)outputContextImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (void)outputContextImpl:(id)a0 didInitiateDestinationChange:(id)a1;
- (void)outputContextImpl:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)outputContextImplDidChangeCanMute:(id)a0;
- (void)outputContextImplDidChangeCanSetVolume:(id)a0;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)a0;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)a0;
- (void)outputContextImplDidChangeVolume:(id)a0;
- (void)outputContextImplDidChangeVolumeControlType:(id)a0;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)a0;
- (id)outputContextType;
- (id)outputDevice;
- (unsigned long long)outputDeviceFeatures;
- (id)outputDevices;
- (BOOL)providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(id)a0;
- (void)removeOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)setApplicationProcessID:(int)a0;
- (void)setCommunicationChannelDelegate:(id)a0;
- (BOOL)setOutputDevice:(id)a0 forFeatures:(unsigned long long)a1;
- (void)setOutputDevice:(id)a0 options:(id)a1;
- (void)setOutputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)setOutputDevices:(id)a0;
- (void)setOutputDevices:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (BOOL)supportsMultipleOutputDevices;
- (long long)volumeControlType;

@end
