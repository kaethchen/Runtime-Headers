@class NSData;

@interface NEIKEv2EncryptedPayload : NEIKEv2Payload {
    NSData *_authenticatedHeaders;
    unsigned long long _nextPayload;
}

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
