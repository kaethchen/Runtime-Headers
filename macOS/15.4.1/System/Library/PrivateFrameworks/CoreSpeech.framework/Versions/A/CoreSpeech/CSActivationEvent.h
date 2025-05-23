@class NSString, NSDictionary, CSDeviceActivationEvent;

@interface CSActivationEvent : NSObject

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) NSDictionary *activationInfo;
@property (readonly, nonatomic) unsigned long long hosttime;
@property (readonly, nonatomic) float vadScore;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) CSDeviceActivationEvent *deviceActivationEvent;

+ (id)builtInMicVoiceTriggerEvent:(id)a0 hostTime:(unsigned long long)a1;
+ (id)jarvisVoiceTriggerEvent:(id)a0 activationInfo:(id)a1 hostTime:(unsigned long long)a2;
+ (id)mediaserverdLaunchedEvent:(unsigned long long)a0;
+ (id)remoraVoiceTriggerEvent:(id)a0 activationInfo:(id)a1 hostTime:(unsigned long long)a2;
+ (id)remoraVoiceTriggerEvent:(id)a0 hostTime:(unsigned long long)a1;
+ (id)remoteMicVADEvent:(id)a0 vadScore:(float)a1 hostTime:(unsigned long long)a2;
+ (id)remoteMicVoiceTriggerEvent:(id)a0 activationInfo:(id)a1 hostTime:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (id)initWithType:(unsigned long long)a0 deviceId:(id)a1 activationInfo:(id)a2 hosttime:(unsigned long long)a3;
- (id)initWithType:(unsigned long long)a0 deviceId:(id)a1 activationInfo:(id)a2 vadScore:(float)a3 hosttime:(unsigned long long)a4;
- (id)xpcObject;

@end
