@class AVOutputDeviceInternal;

@interface AVOutputDevice : NSObject {
    AVOutputDeviceInternal *_outputDevice;
}

@property (class, readonly) BOOL prefersRouteDescriptors;

+ (void)initialize;
+ (void)localDeviceDidChange;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { } *)a0;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { } *)a0 routingContextFactory:(id)a1;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { } *)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { } *)a1;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0 routingContextFactory:(id)a1;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0 volumeController:(struct OpaqueFigVolumeControllerState { } *)a1;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { } *)a0 withRoutingContext:(struct OpaqueFigRoutingContext { } *)a1;
+ (id)sharedLocalDevice;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)deviceID;
- (id)impl;
- (BOOL)isMuted;
- (id)groupID;
- (id)serialNumber;
- (id)screens;
- (long long)deviceType;
- (void)setVolume:(float)a0;
- (float)volume;
- (id)deviceName;
- (long long)transportType;
- (id)firmwareVersion;
- (long long)authenticationType;
- (id)ID;
- (id)manufacturer;
- (void)setMuted:(BOOL)a0;
- (BOOL)isActivated;
- (id)modelID;
- (float)batteryLevel;
- (id)supportedFeatures;
- (long long)clusterType;
- (BOOL)requiresAuthorization;
- (long long)HAPConformance;
- (BOOL)OEMIconVisible;
- (BOOL)isClusterLeader;
- (BOOL)isHeadTrackedSpatialAudioActive;
- (id)logicalDeviceID;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)proposedGroupID;
- (id)MFiCertificateSerialNumber;
- (id)OEMIconLabel;
- (id)OEMIcons;
- (BOOL)canMute;
- (BOOL)hasBatteryLevel;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (void)activatedDeviceClusterMembersDidChangeVolume:(id)a0 forRoomID:(struct __CFString { } *)a1;
- (id)airPlayProperties;
- (BOOL)allowsHeadTrackedSpatialAudio;
- (id)alternateTransportType;
- (BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (id)availableBluetoothListeningModes;
- (id)borrowScreenForClient:(id)a0 reason:(id)a1;
- (BOOL)canAccessAppleMusic;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canAccessiCloudMusicLibrary;
- (BOOL)canBeGroupLeader;
- (BOOL)canBeGrouped;
- (BOOL)canCommunicateWithAllLogicalDeviceMembers;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)canRelayCommunicationChannel;
- (BOOL)canSetVolume;
- (BOOL)carOwnsMainAudio;
- (BOOL)carOwnsScreen;
- (id)clusterID;
- (id)clusteredDeviceDescriptions;
- (id)communicationChannelDelegate;
- (void)communicationChannelManager:(id)a0 didCloseCommunicationChannel:(id)a1;
- (void)communicationChannelManager:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)configureUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)configureUsingBlock:(id /* block */)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (long long)configuredClusterSize;
- (id)connectedPairedDevices;
- (id)currentBluetoothListeningMode;
- (id)currentScreenViewAreaForScreenID:(id)a0;
- (void)decreaseVolumeByCount:(long long)a0;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (id)displayCornerMasks;
- (long long)electronicTollCollection;
- (id)figEndpointOutputDeviceImpl;
- (double)frecencyScore;
- (BOOL)groupContainsGroupLeader;
- (id)headTrackedSpatialAudioMode;
- (id)identifyingMACAddress;
- (void)increaseVolumeByCount:(long long)a0;
- (id)initWithOutputDeviceImpl:(id)a0 commChannelManager:(id)a1;
- (BOOL)isActivatedForContinuityScreen;
- (BOOL)isAppleAccessory;
- (BOOL)isConversationDetectionEnabled;
- (BOOL)isGroupLeader;
- (BOOL)isInUseByPairedDevice;
- (BOOL)isLogicalDeviceLeader;
- (BOOL)isNightModeSupported;
- (BOOL)limitedUI;
- (id)limitedUIElements;
- (id)modelSpecificInformation;
- (long long)navigationAidedDriving;
- (BOOL)nightMode;
- (BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
- (void)openCommunicationChannelToDestination:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)openCommunicationChannelWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)outputDeviceHIDs;
- (void)outputDeviceImplCanMuteDidChange:(id)a0;
- (void)outputDeviceImplDidChangeCanChangeVolume:(id)a0;
- (void)outputDeviceImplDidChangeMute:(id)a0;
- (void)outputDeviceImplDidChangeProposedGroupID:(id)a0;
- (void)outputDeviceImplDidChangeVolume:(id)a0;
- (void)outputDeviceImplDidChangeVolumeControlType:(id)a0;
- (id)outputDeviceInfo;
- (BOOL)ownsTurnByTurnNavigation;
- (BOOL)participatesInGroupPlayback;
- (void)performHapticFeedbackForUUID:(id)a0 withHapticType:(id)a1 completionHandler:(id /* block */)a2;
- (void)postNotification:(id)a0 fromImpl:(id)a1;
- (void)postNotification:(id)a0 withPayload:(id)a1 fromImpl:(id)a2;
- (BOOL)producesLowFidelityAudio;
- (BOOL)recognizingSpeech;
- (void)requestCarUIForURL:(id)a0 withUUID:(id)a1;
- (id)requestTurnByTurnNavigationOwnership;
- (void)requestViewArea:(long long)a0 forScreenID:(id)a1;
- (BOOL)rightHandDrive;
- (void)setActivatedDeviceClusterMembersVolume:(float)a0 withRoomID:(id)a1;
- (BOOL)setAllowsHeadTrackedSpatialAudio:(BOOL)a0 error:(id *)a1;
- (void)setCommunicationChannelDelegate:(id)a0;
- (BOOL)setConversationDetectionEnabled:(BOOL)a0 error:(id *)a1;
- (void)setCurrentBluetoothListeningMode:(id)a0;
- (BOOL)setCurrentBluetoothListeningMode:(id)a0 error:(id *)a1;
- (void)setDisplayCornerMasks:(id)a0;
- (BOOL)setHeadTrackedSpatialAudioMode:(id)a0 error:(id *)a1;
- (void)setMediaRemoteData:(id)a0 completionHandler:(id /* block */)a1;
- (void)setSecondDisplayEnabled:(BOOL)a0;
- (void)setSecondDisplayMode:(id)a0 completionHandler:(id /* block */)a1;
- (void)setSiriForwardingEnabled:(BOOL)a0;
- (BOOL)siriForwardingEnabled;
- (void)suggestUIWithURLs:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsBluetoothSharing;
- (BOOL)supportsBufferedAirPlay;
- (BOOL)supportsConversationDetection;
- (void)takeScreenForClient:(id)a0 reason:(id)a1;
- (void)updateFrecencyScore;
- (long long)voiceTriggerMode;
- (long long)volumeControlType;
- (float)volumeForActivatedDeviceClusterMembersWithRoomID:(id)a0;

@end
