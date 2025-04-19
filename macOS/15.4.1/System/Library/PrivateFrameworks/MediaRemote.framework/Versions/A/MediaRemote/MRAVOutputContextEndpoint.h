@class NSArray, MRAVConcreteOutputContext, MROutputContextController, NSString, MROrigin;

@interface MRAVOutputContextEndpoint : MRAVEndpoint <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *outputDevices;
@property (retain, nonatomic) MRAVConcreteOutputContext *outputContext;
@property (retain, nonatomic) MROutputContextController *outputContextController;
@property (retain, nonatomic) MROrigin *origin;
@property (readonly, nonatomic, getter=isRealized) BOOL realized;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)connectionType;
- (id)uniqueIdentifier;
- (BOOL)isConnected;
- (id)deviceInfo;
- (id)predictedOutputDevice;
- (void)resetPredictedOutputDevice;
- (void)_adjustOutputDeviceVolume:(long long)a0 outputDevice:(id)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (id)_externalOutputContext;
- (void)_handleDeviceInfoDidChange:(id)a0;
- (void)_modifyTopologyWithRequest:(id)a0 withReplyQueue:(id)a1 completion:(id /* block */)a2;
- (void)_muteOutputDeviceVolume:(BOOL)a0 outputDevice:(id)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)_setOutputDeviceVolume:(float)a0 outputDevice:(id)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (BOOL)canModifyGroupMembership;
- (void)connectToExternalDeviceWithOptions:(unsigned int)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (id)designatedGroupLeader;
- (BOOL)groupContainsDiscoverableGroupLeader;
- (id)initWithOutputContext:(id)a0 uniqueIdentifier:(id)a1;
- (BOOL)isProxyGroupPlayer;
- (void)outputContextDataSourceReloaded:(id)a0;
- (id)personalOutputDevices;
- (id)predictedOutputDeviceUIDs;
- (void)removeOutputDeviceFromParentGroup:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)requestGroupSessionWithDetails:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)setAllowsHeadTrackedSpatialAudio:(BOOL)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)setConversationDetectionEnabled:(BOOL)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)setHeadTrackedSpatialAudioMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)setListeningMode:(id)a0 outputDeviceUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
