@class NSString;

@interface _BKSHIDStringIdentifierEventDeferringToken : BKSHIDEventDeferringToken {
    NSString *_stringIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)protobufSchema;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (id)_string;
- (id)_initWithString:(id)a0;
- (BOOL)_isString;

@end
