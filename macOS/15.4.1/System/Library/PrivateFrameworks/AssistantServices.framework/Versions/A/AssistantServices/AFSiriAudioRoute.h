@class NSString, NSDictionary;

@interface AFSiriAudioRoute : NSObject {
    long long _ringerSwitchState;
    BOOL _hearingAidsAnnounceEnabled;
    BOOL _builtInSpeakerAnnounceEnabled;
    BOOL _isRouteCurrentlyPicked;
    BOOL _isDoAPCapable;
    BOOL _isHeadsetInEar;
    BOOL _headsetSupportsIED;
    BOOL _headsetSupportsFauxIED;
    BOOL _inEarDetectEnabledSpecified;
    BOOL _inEarDetectEnabled;
    BOOL _headsetSupportsAnnounceCalls;
    BOOL _isTipiRoute;
    BOOL _isOtherDeviceConnected;
    BOOL _isInTriangleMode;
    BOOL _shouldTakeRouteFromOtherConnectedDevice;
    BOOL _shouldDeferToOtherConnectedDevice;
    BOOL _isHearingAidsRoute;
    BOOL _isBuiltInSpeakerRoute;
    BOOL _isGenuineAppleAccessory;
    NSString *_avAudioRouteName;
}

@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *btAddress;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *connectedBTProductID;
@property (nonatomic) unsigned long long availableAnnouncementRequestTypes;
@property (retain, nonatomic) NSDictionary *avscRouteDescription;
@property (nonatomic) long long announcePlatformForRoute;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqualToRoute:(id)a0;
- (id)routeName;
- (long long)_announcementPlatform;
- (unsigned long long)_getRouteCapabilities;
- (void)_initializeInternalState;
- (BOOL)_isBuiltInSpeakerRoute;
- (BOOL)_isHearingAidsRoute;
- (BOOL)hasAuthenticationCapability;
- (id)initWithRouteDescription:(id)a0 hearingAidsAnnounceEnabled:(BOOL)a1 builtInSpeakerAnnounceEnabled:(BOOL)a2 ringerSwitchState:(long long)a3;
- (BOOL)isRouteCurrentlyPicked;
- (BOOL)isThirdPartyBluetoothHeadset;

@end
