@class NSUUID;

@interface SMSessionStateUpdateReqMessage : SMMessage

@property (readonly, nonatomic) NSUUID *deviceToRequest;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 deviceToRequest:(id)a3;
- (id)outputToDictionary;
- (id)initSessionID:(id)a0 deviceToRequest:(id)a1;

@end
