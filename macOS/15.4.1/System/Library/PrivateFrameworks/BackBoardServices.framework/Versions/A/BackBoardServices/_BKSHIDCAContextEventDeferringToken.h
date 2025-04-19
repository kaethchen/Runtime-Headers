@interface _BKSHIDCAContextEventDeferringToken : BKSHIDEventDeferringToken {
    unsigned int _CAContextID;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithIdentifier:(unsigned int)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (unsigned int)_identifierOfCAContext;
- (BOOL)_isIdentifierOfCAContext;

@end
