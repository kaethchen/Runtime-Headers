@class NSArray, NEIKEv2KeyExchangePayload;

@interface NEIKEv2IntermediatePacket : NEIKEv2Packet {
    NSArray *_authenticatedDataVector;
    NEIKEv2KeyExchangePayload *_ke;
}

+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (void)filloutPayloads;
- (void)gatherPayloads;

@end
