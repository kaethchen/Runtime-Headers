@class NEIKEv2NotifyPayload, NEIKEv2KeyExchangePayload;

@interface NEIKEv2FollowupKEPacket : NEIKEv2Packet {
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NotifyPayload *_link;
}

+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (void)filloutPayloads;
- (void)gatherPayloads;

@end
