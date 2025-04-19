@class NSString, NSDate;

@interface AADeviceConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char acceptReplyPlayPauseConfig;
@property (nonatomic) char aclPriority;
@property (nonatomic) unsigned char adaptiveVolumeConfig;
@property (nonatomic) unsigned int autoANCStrength;
@property (nonatomic) char allowsAutoRoute;
@property (copy, nonatomic) NSDate *audiogramEnrolledTimestamp;
@property (nonatomic) char audioRouteHidden;
@property (nonatomic) unsigned char bobbleConfig;
@property (nonatomic) unsigned char clickHoldModeLeft;
@property (nonatomic) unsigned char clickHoldModeRight;
@property (nonatomic) unsigned char conversationDetectConfig;
@property (nonatomic) unsigned char crownRotationDirection;
@property (nonatomic) unsigned char declineDismissSkipConfig;
@property (nonatomic) char doubleTapActionLeft;
@property (nonatomic) char doubleTapActionRight;
@property (nonatomic) char enableHearingAidGainSwipe;
@property (nonatomic) char enableHearingAssist;
@property (nonatomic) char enableSiriMultitone;
@property (nonatomic) unsigned char endCallConfig;
@property (nonatomic) char headGestureToggle;
@property (nonatomic) char headGestureProxCardShown;
@property (nonatomic) char hearingAidToggle;
@property (nonatomic) char hearingAidEnrolled;
@property (nonatomic) char enableHeartRateMonitor;
@property (nonatomic) int listeningMode;
@property (nonatomic) unsigned int listeningModeConfigs;
@property (nonatomic) char listeningModeOffAllowed;
@property (nonatomic) char microphoneMode;
@property (nonatomic) unsigned char muteControlConfig;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char placementMode;
@property (nonatomic) char relinquishAudioRoute;
@property (nonatomic) unsigned char selectiveSpeechListeningConfig;
@property (nonatomic) char smartRoutingMode;
@property (nonatomic) char spatialAudioAllowed;
@property (nonatomic) int spatialAudioMode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (BOOL)needsUpdateToAAController;
- (BOOL)needsUpdateToDeviceCloudRecord;

@end
