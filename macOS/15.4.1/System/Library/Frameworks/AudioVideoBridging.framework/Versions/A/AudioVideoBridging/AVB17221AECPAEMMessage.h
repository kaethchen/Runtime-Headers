@class NSData;

@interface AVB17221AECPAEMMessage : AVB17221AECPMessage

@property (readonly, nonatomic) unsigned long long minimumReceivedCommandSpecificLength;
@property (readonly, nonatomic) unsigned long long minimumMutableCommandSpecificLength;
@property unsigned short rawCommandType;
@property unsigned short commandType;
@property (getter=isUnsolicited) BOOL unsolicited;
@property (getter=isControllerRequest) BOOL controllerRequest;
@property (copy) NSData *commandSpecificData;

+ (id)responseMessage;
+ (id)commandMessage;
+ (id)commandMessageForCommandType:(unsigned short)a0;
+ (id)errorForStatusCode:(unsigned char)a0;
+ (id)keyPathsForValuesAffectingCommandType;
+ (id)keyPathsForValuesAffectingControllerRequest;
+ (id)keyPathsForValuesAffectingUnsolicited;
+ (id)responseMessageForCommandType:(unsigned short)a0;
+ (id)responseMessageFromCommandMessage:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned short)commandType;
- (void)setCommandType:(unsigned short)a0;
- (void)setUnsolicited:(BOOL)a0;
- (void)_makeItMutableWithMinimumSize:(unsigned long long)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned long long)minimumReceivedCommandSpecificLength;
- (void)setControllerRequest:(BOOL)a0;

@end
