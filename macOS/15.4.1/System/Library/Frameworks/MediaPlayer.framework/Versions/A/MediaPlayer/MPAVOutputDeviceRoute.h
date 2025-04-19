@class NSString, NSArray, MRAVOutputDevice;

@interface MPAVOutputDeviceRoute : MPAVRoute {
    NSArray *_roomRoutes;
    NSArray *_clusterMemberRoutes;
    NSArray *_clusterCompositionMembers;
}

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic, getter=isPhoneLocalRoute) BOOL phoneLocalRoute;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;
@property (readonly, nonatomic) NSArray *dnsNames;
@property (readonly, nonatomic) NSArray *roomRoutes;
@property (readonly, nonatomic) NSArray *clusterMemberRoutes;

+ (void *)logicalLeaderFromOutputDevices:(id)a0;
+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;

- (id)description;
- (void).cxx_destruct;
- (id)productIdentifier;
- (long long)routeType;
- (BOOL)isNearby;
- (BOOL)isKnown;
- (long long)clusterType;
- (id)routeName;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)isAppleAccessory;
- (id)clusterComposition;
- (id)groupUID;
- (id)initWithOutputDevices:(id)a0;
- (BOOL)isPickable;
- (BOOL)isPickedOnPairedDevice;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isVolumeControlAvailable;
- (id)playingPairedDeviceName;
- (id)routeUID;
- (BOOL)supportsGrouping;
- (BOOL)_anyOutputDeviceObjPassesTest:(id /* block */)a0;
- (BOOL)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (BOOL)_anyOutputDevicePassesTest:(id /* block */)a0;
- (id)clusterCompositionRoutes;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)headTrackedSpatialAudioEnabled;
- (id)initWithOutputDevices:(id)a0 parentRoute:(id)a1;
- (BOOL)isAirPlayRoute;
- (BOOL)isAppleTVRoute;
- (BOOL)isB520Route;
- (BOOL)isCarplayRoute;
- (BOOL)isClusterRoute;
- (BOOL)isDeviceRoute;
- (BOOL)isDeviceSpeakerPhoneRoute;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isHomePodRoute;
- (BOOL)isHomeTheaterRoute;
- (BOOL)isLowFidelityRoute;
- (BOOL)isLowLatencyRoute;
- (BOOL)isMacRoute;
- (BOOL)isPhoneRoute;
- (BOOL)isPicked;
- (BOOL)isSplitterCapable;
- (BOOL)isStereoPair;
- (long long)originalRouteSubtype;
- (long long)pickableRouteType;
- (BOOL)requiresPassword;
- (long long)routeSubtype;
- (id)subRoutes;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)supportsWirelessDisplay;

@end
