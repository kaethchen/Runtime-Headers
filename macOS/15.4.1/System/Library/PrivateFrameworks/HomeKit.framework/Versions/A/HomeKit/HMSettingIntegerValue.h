@interface HMSettingIntegerValue : HMImmutableSettingValue

@property (readonly) long long integerValue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)attributeDescriptions;
- (id)initWithIntegerValue:(long long)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
