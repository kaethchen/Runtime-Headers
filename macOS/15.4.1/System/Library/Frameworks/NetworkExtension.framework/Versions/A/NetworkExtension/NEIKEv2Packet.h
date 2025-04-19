@class NEIKEv2EncryptedPayload, NSArray, NEIKEv2IKESPI;

@interface NEIKEv2Packet : NSObject <NEPrettyDescription> {
    BOOL _decrypted;
    BOOL _isFragmented;
    BOOL _isResponse;
    BOOL _isInitiator;
    BOOL _isInbound;
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    int _messageID;
    NEIKEv2IKESPI *_initiatorSPI;
    NEIKEv2IKESPI *_responderSPI;
    NEIKEv2EncryptedPayload *_encryptedPayload;
    NSArray *_customPayloads;
    NSArray *_notifications;
    NSArray *_packetDatagrams;
    NSArray *_rawPayloads;
}

+ (BOOL)encryptPayloads;
+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;

- (id)description;
- (void).cxx_destruct;
- (void)filloutPayloads;
- (id)copyShortDescription;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)gatherPayloads;

@end
