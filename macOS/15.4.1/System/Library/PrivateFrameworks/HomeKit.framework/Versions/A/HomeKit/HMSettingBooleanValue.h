@interface HMSettingBooleanValue : HMImmutableSettingValue

@property (readonly) BOOL boolValue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)initWithBoolValue:(BOOL)a0;
- (id)attributeDescriptions;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
