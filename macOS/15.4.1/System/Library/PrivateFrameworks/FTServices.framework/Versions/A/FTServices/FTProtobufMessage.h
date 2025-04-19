@class NSString, NSData;

@interface FTProtobufMessage : FTIDSMessage

@property (retain, nonatomic) NSString *pushTopic;
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
- (id)userAgentHeaderString;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsIntegerUniqueIDs;
- (BOOL)wantsUserAgentInHeaders;
- (id)initWithPushTopic:(id)a0 protoData:(id)a1;
- (BOOL)wantsIDSProtocolVersion;

@end
