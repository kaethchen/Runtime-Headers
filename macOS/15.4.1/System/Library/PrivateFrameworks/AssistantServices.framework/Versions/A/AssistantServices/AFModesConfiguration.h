@class NSString;

@interface AFModesConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEyesFree;
@property (readonly, nonatomic) BOOL isUIFree;
@property (readonly, nonatomic) BOOL isForCarDND;
@property (readonly, nonatomic) BOOL isInAmbient;
@property (readonly, nonatomic) BOOL isMapsNavigationActive;
@property (readonly, nonatomic) BOOL isVoiceTriggerRequest;
@property (readonly, nonatomic) BOOL isConnectedToCarPlay;
@property (readonly, nonatomic) BOOL isRequestMadeWithPhysicalDeviceInteraction;
@property (readonly, nonatomic) BOOL isAudioAccessoryButtonActivation;
@property (readonly, nonatomic) BOOL isSiriAutoPrompt;
@property (readonly, nonatomic) BOOL isFlexibleFollowup;
@property (readonly, nonatomic) BOOL isMediaPlaying;
@property (readonly, nonatomic) BOOL userTypedInSiri;
@property (readonly, copy, nonatomic) NSString *modeOverrideValue;
@property (readonly, nonatomic) BOOL isDeviceUnlocked;
@property (readonly, nonatomic) BOOL isDeviceScreenON;
@property (readonly, nonatomic) BOOL isInPocket;
@property (readonly, nonatomic) BOOL liftToWakeDetected;
@property (readonly, nonatomic) BOOL userInitiatedWakeDetected;
@property (readonly, nonatomic) long long deviceMotion;
@property (readonly, nonatomic) long long deviceRaised;
@property (readonly, nonatomic) long long faceDetected;
@property (readonly, nonatomic) long long touchScreenDetected;
@property (readonly, nonatomic) long long buttonPressDetected;
@property (readonly, nonatomic) long long flatDevicePosture;
@property (readonly, nonatomic) long long deviceOrientation;
@property (readonly, nonatomic) long long isInWorkout;
@property (readonly, nonatomic) long long isBacklightOn;
@property (readonly, nonatomic) long long isInWaterLock;
@property (readonly, nonatomic) long long isInSleepLock;
@property (readonly, nonatomic) long long isInTheaterMode;
@property (readonly, nonatomic) long long isOnWrist;
@property (readonly, nonatomic) long long isUserEngagedWithDevice;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithIsEyesFree:(BOOL)a0 isUIFree:(BOOL)a1 isForCarDND:(BOOL)a2 isInAmbient:(BOOL)a3 isMapsNavigationActive:(BOOL)a4 isVoiceTriggerRequest:(BOOL)a5 isConnectedToCarPlay:(BOOL)a6 isRequestMadeWithPhysicalDeviceInteraction:(BOOL)a7 isAudioAccessoryButtonActivation:(BOOL)a8 isSiriAutoPrompt:(BOOL)a9 isFlexibleFollowup:(BOOL)a10 isMediaPlaying:(BOOL)a11 userTypedInSiri:(BOOL)a12 modeOverrideValue:(id)a13 isDeviceUnlocked:(BOOL)a14 isDeviceScreenON:(BOOL)a15 isInPocket:(BOOL)a16 liftToWakeDetected:(BOOL)a17 userInitiatedWakeDetected:(BOOL)a18 deviceMotion:(long long)a19 deviceRaised:(long long)a20 faceDetected:(long long)a21 touchScreenDetected:(long long)a22 buttonPressDetected:(long long)a23 flatDevicePosture:(long long)a24 deviceOrientation:(long long)a25 isInWorkout:(long long)a26 isBacklightOn:(long long)a27 isInWaterLock:(long long)a28 isInSleepLock:(long long)a29 isInTheaterMode:(long long)a30 isOnWrist:(long long)a31 isUserEngagedWithDevice:(long long)a32;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
