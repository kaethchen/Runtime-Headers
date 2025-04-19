@class NSArray, NSString;

@interface TURoute : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) id /* block */ predicateForInEarAudioRoute;
@property (class, readonly, nonatomic) id /* block */ predicateForInEarRouteInTipiWithCompanionWatch;
@property (class, readonly, nonatomic) id /* block */ predicateForInEarRouteInTipiWithAndSmartRoutedToCompanionWatch;
@property (class, readonly, nonatomic) id /* block */ predicateForPreferredRoute;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isA2DPRoute) BOOL A2DPRoute;
@property (nonatomic, getter=isAirTunes) BOOL airTunes;
@property (nonatomic, getter=isCarAudio) BOOL carAudio;
@property (nonatomic, getter=isCurrentlyPicked) BOOL currentlyPicked;
@property (nonatomic, getter=isBluetooth) BOOL bluetooth;
@property (nonatomic) long long bluetoothEndpointType;
@property (nonatomic, getter=isBluetoothLE) BOOL bluetoothLE;
@property (nonatomic, getter=isBluetoothManaged) BOOL bluetoothManaged;
@property (nonatomic, getter=isDefaultRoute) BOOL defaultRoute;
@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isGuest) BOOL guest;
@property (copy, nonatomic) NSArray *identifiersOfOtherConnectedDevices;
@property (nonatomic, getter=isInEarDetectionEnabled) BOOL inEarDetectionEnabled;
@property (nonatomic, getter=isInEarDetectionSupported) BOOL inEarDetectionSupported;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isPreferred) BOOL preferred;
@property (nonatomic, getter=isPreferredAndActive) BOOL preferredAndActive;
@property (nonatomic, getter=isReceiver) BOOL receiver;
@property (nonatomic, getter=isSpeaker) BOOL speaker;
@property (nonatomic) BOOL supportsHighQualityVoiceWithMedia;
@property (nonatomic) BOOL supportsRelay;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic, getter=isWiredHeadphones) BOOL wiredHeadphones;
@property (nonatomic, getter=isWiredHeadset) BOOL wiredHeadset;
@property (nonatomic, getter=isWirelessHeadset) BOOL wirelessHeadset;
@property (nonatomic, getter=isPartnerRouteRoutable) BOOL partnerRouteRoutable;
@property (nonatomic, getter=isSiblingRoutePresent) BOOL siblingRoutePresent;
@property (nonatomic) BOOL supportsSharePlay;
@property (nonatomic, getter=isRecommended) BOOL recommended;
@property (readonly, nonatomic, getter=isCarKitRoute) BOOL carKitRoute;
@property (readonly, nonatomic, getter=isHomePodFamily) BOOL homePodFamily;
@property (readonly, nonatomic) BOOL isAirPodsRoute;
@property (readonly, nonatomic, getter=isInEarDetected) BOOL inEarDetected;
@property (readonly, nonatomic) BOOL supportsPreferredAndActive;
@property (readonly, nonatomic, getter=isTipiParticipant) BOOL tipiParticipant;
@property (readonly, nonatomic, getter=isTriangleParticipant) BOOL triangleParticipant;
@property (readonly, nonatomic, getter=isAuxiliary) BOOL auxiliary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRoute:(id)a0;
- (id)initWithRoute:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 name:(id)a1;
- (id)customDescription;
- (BOOL)isEqualToRouteIgnoringIsRecommended:(id)a0;

@end
