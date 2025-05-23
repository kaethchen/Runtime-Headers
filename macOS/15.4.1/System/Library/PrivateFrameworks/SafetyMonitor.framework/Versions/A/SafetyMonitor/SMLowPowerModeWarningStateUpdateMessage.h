@interface SMLowPowerModeWarningStateUpdateMessage : SMMessage

@property (readonly, nonatomic) long long lowPowerModeWarningState;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithSessionID:(id)a0 lowPowerModeWarningState:(long long)a1;
- (id)outputToDictionary;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 lowPowerModeWarningState:(long long)a3;

@end
