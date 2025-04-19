@class NSString;

@interface SMSessionEndRemoteControlMessage : SMMessage

@property (readonly, nonatomic) unsigned long long sessionEndReason;
@property (readonly, nonatomic) NSString *sourceDeviceID;
@property (readonly, nonatomic) long long sourceDeviceType;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithSessionEndReason:(unsigned long long)a0 sessionID:(id)a1 sourceDeviceType:(long long)a2 sourceDeviceID:(id)a3;
- (id)outputToDictionary;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionEndReason:(unsigned long long)a2 sessionID:(id)a3 sourceDeviceType:(long long)a4 sourceDeviceID:(id)a5;

@end
