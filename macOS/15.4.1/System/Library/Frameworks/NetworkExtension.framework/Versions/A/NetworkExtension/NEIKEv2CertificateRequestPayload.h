@class NSData;

@interface NEIKEv2CertificateRequestPayload : NEIKEv2Payload {
    unsigned long long _encoding;
    NSData *_certificateData;
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
