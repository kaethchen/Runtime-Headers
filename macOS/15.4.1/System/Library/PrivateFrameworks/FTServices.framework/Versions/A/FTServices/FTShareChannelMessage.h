@class NSString, NSData;

@interface FTShareChannelMessage : FTIDSMessage

@property (nonatomic) int messageType;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *protoData;
@property (retain, nonatomic) NSData *protoResponse;
@property (nonatomic) int responseValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)command;
- (id)messageBody;
- (id)topic;
- (BOOL)wantsResponse;
- (long long)responseCommand;
- (BOOL)wantsBAASigning;
- (BOOL)wantsAPSRetries;
- (BOOL)wantsBinaryPush;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseDictionary:(id)a0;
- (void)handleResponseHeaders:(id)a0;
- (BOOL)highPriority;
- (BOOL)isIDSMessage;
- (BOOL)isWebTunnelMessage;
- (BOOL)ultraConstrainedAllowed;
- (id)userAgentHeaderString;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsUserAgentInHeaders;
- (id)initWithProtoData:(id)a0 messageType:(int)a1;
- (BOOL)wantsIDSProtocolVersion;

@end
