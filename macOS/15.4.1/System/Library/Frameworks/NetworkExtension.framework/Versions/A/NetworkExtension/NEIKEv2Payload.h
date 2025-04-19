@class NSData;

@interface NEIKEv2Payload : NSObject <NEPrettyDescription> {
    BOOL _isInbound;
    NSData *_payloadData;
}

@property (readonly) BOOL hasRequiredFields;
@property (readonly) unsigned long long type;

+ (id)copyTypeDescription;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
