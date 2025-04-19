@class NSArray;

@interface HMLanguageValueListSetting : HMImmutableSetting

@property (readonly, copy) NSArray *languageValues;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 languageValues:(id)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 payload:(id)a2;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
