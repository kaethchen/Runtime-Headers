@interface _BKSHIDCGSConnectIDEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CGSConnectionID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (unsigned int)_identifierOfCGSConnection;
- (id)_initWithCGSConnectionID:(unsigned int)a0;
- (BOOL)_isIdentifierOfCGSConnection;

@end
