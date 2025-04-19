@class NSArray, NSData, HKAudiogramSample, NSNumber;

@interface HMDeviceConfigurations : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *mediaLossDataLeft;
@property (copy) NSData *mediaLossDataRight;
@property (copy) NSData *voiceLossDataLeft;
@property (copy) NSData *voiceLossDataRight;
@property (nonatomic) char allowListeningModeOff;
@property (retain, nonatomic) NSNumber *amplification;
@property (retain, nonatomic) NSNumber *balance;
@property (retain, nonatomic) NSNumber *beamFormer;
@property (nonatomic) char enableHearingAid;
@property (nonatomic) char enableHearingAssist;
@property (nonatomic) char enableHearingProtection;
@property (nonatomic) char enableMediaAssist;
@property (nonatomic) char enablePMEMedia;
@property (nonatomic) char enablePMEVoice;
@property (nonatomic) char enableSwipeGain;
@property (nonatomic) char enrollHearingAssist;
@property (nonatomic) char enrollPMEVoice;
@property (copy) NSArray *mediaLossArrayLeft;
@property (copy) NSArray *mediaLossArrayRight;
@property (retain, nonatomic) NSNumber *noiseSuppression;
@property (retain, nonatomic) HKAudiogramSample *selectedAudiogram;
@property (copy) NSArray *voiceLossArrayLeft;
@property (copy) NSArray *voiceLossArrayRight;
@property (retain, nonatomic) NSNumber *tone;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (BOOL)setEnableHearingAssistIfNeeded:(id)a0;
- (BOOL)needsUpdateToAHPSConnectionManagerForDevice:(id)a0;
- (BOOL)needsUpdateToDeviceManagerForDevice:(id)a0;
- (BOOL)needsUpdateToPMEConfigurationForDevice:(id)a0;
- (BOOL)needsUpdateToPersonalAudioForDevice:(id)a0;
- (BOOL)restoreConfigsFromCloudRecordIfNeeded:(id)a0;

@end
