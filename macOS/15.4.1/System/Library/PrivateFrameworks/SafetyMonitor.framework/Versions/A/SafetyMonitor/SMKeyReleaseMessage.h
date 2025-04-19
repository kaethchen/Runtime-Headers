@class NSData, RTLocation, NSDate;

@interface SMKeyReleaseMessage : SMMessage

@property (readonly, nonatomic) NSDate *triggerDate;
@property (readonly, nonatomic) RTLocation *locationOfTrigger;
@property (readonly, nonatomic) unsigned long long triggerType;
@property (readonly, nonatomic) NSData *safetyCacheKey;
@property (readonly, nonatomic) NSData *safetyCacheToken;
@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) unsigned long long destinationType;
@property (readonly, nonatomic) BOOL isSOSTrigger;
@property (readonly, nonatomic) long long lowPowerModeWarningState;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithSessionID:(id)a0 triggerDate:(id)a1 locationOfTrigger:(id)a2 triggerType:(unsigned long long)a3 safetyCacheKey:(id)a4 safetyCacheToken:(id)a5 sessionType:(unsigned long long)a6 destinationType:(unsigned long long)a7 isSOSTrigger:(BOOL)a8 lowPowerModeWarningState:(long long)a9;
- (id)outputToDictionary;
- (id)summaryText;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 triggerDate:(id)a3 locationOfTrigger:(id)a4 triggerType:(unsigned long long)a5 safetyCacheKey:(id)a6 safetyCacheToken:(id)a7 sessionType:(unsigned long long)a8 destinationType:(unsigned long long)a9 isSOSTrigger:(BOOL)a10 lowPowerModeWarningState:(long long)a11;
- (id)initWithSessionID:(id)a0 triggerDate:(id)a1 locationOfTrigger:(id)a2 triggerType:(unsigned long long)a3 safetyCacheKey:(id)a4 safetyCacheToken:(id)a5 sessionType:(unsigned long long)a6 destinationType:(unsigned long long)a7 lowPowerModeWarningState:(long long)a8;
- (id)outputToURLComponents;

@end
