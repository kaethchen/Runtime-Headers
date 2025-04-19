@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (long long)deviceType;
- (BOOL)isDefaultRoute;
- (BOOL)isInEarDetectionSupported;
- (BOOL)isBluetooth;
- (BOOL)isSpeaker;
- (BOOL)_routeTypeEqualTo:(id)a0;
- (long long)bluetoothEndpointType;
- (id)customDescription;
- (id)identifiersOfOtherConnectedDevices;
- (BOOL)isA2DPRoute;
- (BOOL)isAirTunes;
- (BOOL)isBluetoothLE;
- (BOOL)isBluetoothManaged;
- (BOOL)isCarAudio;
- (BOOL)isCurrentlyPicked;
- (BOOL)isHandset;
- (BOOL)isInEarDetectionEnabled;
- (BOOL)isPartnerRouteRoutable;
- (BOOL)isPreferred;
- (BOOL)isPreferredAndActive;
- (BOOL)isReceiver;
- (BOOL)isSiblingRoutePresent;
- (BOOL)isWiredHeadphones;
- (BOOL)isWiredHeadset;
- (BOOL)isWirelessHeadset;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (BOOL)supportsSharePlay;

@end
