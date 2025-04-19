@class NSData;

@interface NEIKEv2CustomPayload : NEIKEv2Payload {
    unsigned long long _customType;
    NSData *_customData;
}

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
