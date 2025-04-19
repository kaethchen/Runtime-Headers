@class NSString, NSArray, NSDateInterval, NSDictionary;

@interface SMTRequestContextData : NSObject

@property (readonly, copy, nonatomic) NSString *audioSource;
@property (readonly, copy, nonatomic) NSString *audioDestination;
@property (readonly, copy, nonatomic) NSString *responseMode;
@property (readonly, nonatomic) BOOL isEyesFree;
@property (readonly, nonatomic) BOOL isVoiceTriggerEnabled;
@property (readonly, nonatomic) BOOL isTextToSpeechEnabled;
@property (readonly, nonatomic) BOOL isTriggerlessFollowup;
@property (readonly, copy, nonatomic) NSArray *bargeInModes;
@property (readonly, copy, nonatomic) NSDateInterval *approximatePreviousTTSInterval;
@property (readonly, copy, nonatomic) NSArray *deviceRestrictions;
@property (readonly, copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (readonly, nonatomic) unsigned int voiceAudioSessionId;
@property (readonly, nonatomic) BOOL isSystemApertureEnabled;
@property (readonly, nonatomic) BOOL isInAmbient;
@property (readonly, nonatomic) BOOL isLiveActivitiesSupported;
@property (readonly, nonatomic) BOOL isDeviceShowingLockScreen;
@property (readonly, nonatomic) BOOL isDeviceLocked;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)_sanitizeVoiceTriggerEventInfo:(id)a0;

@end
