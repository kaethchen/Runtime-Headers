@class NSString, NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface CSAudioRecordContext : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL alwaysUseRemoteBuiltInMic;
@property (nonatomic) BOOL isRequestDuringActiveCall;
@property (retain, nonatomic) NSDictionary *activationMetadata;
@property (retain, nonatomic) NSString *turnIdentifier;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (nonatomic) BOOL isRequestFromSpokenNotification;
@property (nonatomic) BOOL isRequestFromTriggerless;
@property (nonatomic) long long speechEvent;

+ (id)defaultContext;
+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForJarvisWithDeviceId:(id)a0;
+ (id)contextForOpportuneSpeakerListener;
+ (id)contextForOpportuneSpeakerListenerWithCall;
+ (id)contextForRemoraVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForVoiceTriggerTraining;
+ (long long)audioTypeForContinuousConversation:(long long)a0;
+ (id)contextForBTLEWithDeviceId:(id)a0;
+ (id)contextForContinuousConversation;
+ (id)contextForContinuousConversationWithRecordRoute:(id)a0 deviceId:(id)a1;
+ (id)contextForDarwinVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForDictation;
+ (id)contextForHomeButton;
+ (id)contextForRaiseToSpeak;
+ (id)contextForRemoraButtonTriggerWithDeviceId:(id)a0;
+ (id)contextForServerInvoke;
+ (id)recordTypeString:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (BOOL)isServerInvoked;
- (id)initWithRecordType:(long long)a0 deviceId:(id)a1;
- (BOOL)isAudioRecordTypeSupportedByContinuousConversation;
- (BOOL)isAudioRecordTypeSupportedByRemora;
- (BOOL)isBuiltInVoiceTriggered;
- (BOOL)isContinuousConversation;
- (BOOL)isDarwinVoiceTriggered;
- (BOOL)isDictation;
- (BOOL)isGibraltarVoiceTriggered;
- (BOOL)isHearstVoiceTriggered;
- (BOOL)isHomePressed;
- (BOOL)isJarvisVoiceTriggered;
- (BOOL)isRTSTriggered;
- (BOOL)isRemoraVoiceTriggered;
- (BOOL)isTVRemote;
- (BOOL)isTriggeredFromHearst;
- (BOOL)isVoiceTriggered;
- (id)avvcContext;
- (id)avvcContextSettings;
- (BOOL)isUIButtonPress;
- (id)_createAVVCContextWithType:(long long)a0 deviceId:(id)a1;
- (long long)avvcActivationMode:(long long)a0;
- (id)initWithAVVCContext:(id)a0;
- (BOOL)isContinuousConversationTriggerlessAnnounce;
- (BOOL)isHearstDoubleTapTriggered;
- (BOOL)isJarvisContinuousConversation;
- (BOOL)isRemoraButtonPress;
- (BOOL)isRemoraTriggered;
- (BOOL)isStarkTriggered;
- (BOOL)isTriggerlessAnnounce;
- (BOOL)isTypeJarvis;
- (BOOL)isVoiceTriggeredFromRemoteXPCDevice;
- (BOOL)isiOSButtonPress;
- (long long)recordTypeFromAVVCActivationMode:(long long)a0;

@end
