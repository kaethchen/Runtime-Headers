@class NSString, NSData, CBDevice, NSDate;

@interface AudioAccessoryDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char acceptReplyPlayPauseConfig;
@property (nonatomic) unsigned int autoANCCapability;
@property (nonatomic) unsigned int autoANCStrength;
@property (copy, nonatomic) NSDate *audiogramEnrolledTimestamp;
@property (nonatomic) int audioStreamState;
@property (nonatomic) unsigned char bobbleCapability;
@property (nonatomic) unsigned char bobbleConfig;
@property (nonatomic) BOOL bobbleNotificationShown;
@property (nonatomic) unsigned char caseSoundCapability;
@property (copy, nonatomic) CBDevice *coreBluetoothDevice;
@property (nonatomic) unsigned char declineDismissSkipConfig;
@property (nonatomic) unsigned char detectedHeadGesture;
@property (nonatomic) unsigned char earTipFitTestCapability;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (nonatomic) unsigned char frequencyBand;
@property (nonatomic) char headGestureToggle;
@property (nonatomic) char headGestureProxCardShown;
@property (nonatomic) unsigned char hearingAidCapability;
@property (nonatomic) char hearingAidEnrolled;
@property (nonatomic) char hearingAidEnabled;
@property (nonatomic) char hearingAidGainSwipeEnabled;
@property (nonatomic) char hearingAssistEnabled;
@property (nonatomic) unsigned char hearingProtectionCapability;
@property (nonatomic) unsigned char hearingTestCapability;
@property (nonatomic) char heartRateMonitorEnabled;
@property (nonatomic) unsigned char hideEarDetectionCapability;
@property (nonatomic) unsigned char hideOffListeningModeCapability;
@property (nonatomic) int listeningMode;
@property (nonatomic) unsigned int listeningModeConfigs;
@property (nonatomic) char listeningModeOffAllowed;
@property (nonatomic) char placementMode;
@property (nonatomic) int primaryPlacement;
@property (nonatomic) int secondaryPlacement;
@property (nonatomic) unsigned char siriMultitoneCapability;
@property (nonatomic) char siriMultitoneEnabled;
@property (nonatomic) unsigned int smartRoutingStateFlags;
@property (nonatomic) unsigned char streamStateAoS;
@property (readonly, nonatomic) NSString *bluetoothAddress;
@property (readonly, copy, nonatomic) NSData *bluetoothAddressData;
@property (readonly, nonatomic) unsigned char hearingAidConfig;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL routed;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)setIdentifier:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (BOOL)updateWithCBDevice:(id)a0;
- (void)setBluetoothAddressData:(id)a0;
- (BOOL)setDefaultConfigurationsIfNeeded;
- (BOOL)updateWithAADeviceInfo:(id)a0;

@end
